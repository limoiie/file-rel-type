//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_INPUT_RANDOM_BUFFER_INPUT_HPP_
#define FILE_REL_TYPE_SRC_INPUT_RANDOM_BUFFER_INPUT_HPP_

#include <string>
#include <fstream>

template< class Reader, std::size_t Chunk = 64 >
struct random_buffer_input {
    friend class input_state;

    using off_type = typename Reader::off_type;
    using pos_type = typename Reader::pos_type;

    struct input_state {
        explicit input_state(random_buffer_input< Reader, Chunk > const &in)
                : reader_cursor(in.reader_.tell())
                , buffer_pos(in.buffer_pos_)
                , buffer_capacity(in.buffer_capacity_)
                , buffer_size(in.buffer_size_)
                , iter(in.iter_) {
        }

        bool operator==(input_state const &other) const {
            return reader_cursor == other.reader_cursor &&
                   buffer_pos == other.buffer_pos &&
                   buffer_capacity == other.buffer_capacity &&
                   buffer_size == other.buffer_size &&
                   iter == other.iter;
        }

        bool operator!=(input_state const &other) const {
            return !(*this == other);
        }

        pos_type reader_cursor;
        pos_type buffer_pos;
        std::size_t buffer_capacity;
        std::size_t buffer_size;
        char const *iter;

    };

    template< class ...As >
    explicit random_buffer_input(std::size_t const capacity, As &&... as)
            : reader_(std::forward< As >(as)...)
            , buffer_pos_(0)
            , buffer_(new char[capacity + Chunk])
            , buffer_capacity_(capacity)
            , buffer_size_(0)
            , iter_(buffer_.get()) {
    }

    /**
     * Require `amount` more bytes from the cursor. If no enough read bytes in the buffer and
     * the buffer still has free space, try to read. If there is no enough free buffer remains,
     * then throws an overflow_error.
     *
     * @param amount The number of required bytes
     * @return true if satisfied or false if failed to read
     * @throw std::overflow_error if the buffer has no enough
     */
    bool require(size_t const amount) {
        if (iter_ + amount - 1 < buffer_written_end()) {
            return true;
        }
        if (iter_ + amount - 1 >= buffer_end()) {
            throw std::overflow_error("require beyond end of buffer!");
        }

        auto const need_to_read = amount - buffer_occupied();
        auto const to_read = std::min(buffer_free(), std::max(need_to_read, Chunk));
        if (auto const read = reader_(buffer_written_end(), to_read)) {
            buffer_size_ += read;
            return true;
        }
        return false;
    }

    /**
     * Discard the buffer content that before the iterator
     */
    void discard() noexcept {
        auto const buffer_begin = buffer_.get();
        if (iter_ > buffer_begin + Chunk) {
            auto const unread_size = buffer_occupied();
            if (iter_ < buffer_written_end()) {
                std::memmove(buffer_begin, iter_, unread_size);
            }
            buffer_pos_ += buffer_size_ - unread_size;
            buffer_size_ = std::max((int) unread_size, 0);
            iter_ = buffer_begin;
        }
    }

    /**
     * Move the cursor to the given position. If failed to seek, then
     * nothing would be changed
     */
    bool seek(pos_type pos) {
        return seek_(pos);
    }

    /**
     * Move the cursor to the given position. If failed to seek, then
     * nothing would be changed
     */
    bool seek(off_type off, typename Reader::seek_dir dir) {
        auto const origin_pos = reader_.tell();
        reader_.seek(off, dir);
        auto const target_pos = reader_.tell();
        reader_.clear();
        reader_.seek(origin_pos);
        return seek_(target_pos);
    }

private:
    bool seek_(pos_type pos) {
        if (pos >= reader_.size()) return false;

        if (is_in_buffer(pos)) {
            iter_ = map_pos_into_buffer(pos);
            return true;
        }

        move_buffer_to(pos);
        return true;
    }

    const char *map_pos_into_buffer(pos_type pos) const {
        return buffer_.get() + std::streamoff(pos - buffer_pos_);
    }

    /**
     * Is the offset `off` in the memory into which the buffer maps or not
     */
    bool is_in_buffer(pos_type const off) const {
        return buffer_pos_ <= off && off < buffer_end_pos();
    }

    /**
     * Is the offset `off` in the memory where the buffer has already cached (written)
     */
    bool is_in_written_buffer(pos_type const off) const {
        return buffer_pos_ <= off && off < buffer_written_end_pos();
    }

    void move_buffer_to(pos_type const pos) {
        // move buffer to the current offset, and
        buffer_pos_ = pos;
        // invalidate the buffer content
        buffer_size_ = 0;
        // sync iterator
        iter_ = buffer_.get();
        // align reader
        if (reader_.tell() != pos)
            reader_.seek(pos);
    }

public:
    [[nodiscard]] char const *current() {
        return iter_;
    }

    /**
     * the end of the written buffer
     */
    [[nodiscard]] char const *buffer_written_end() const {
        return buffer_.get() + buffer_size_;
    }

    /**
     * the end of the written buffer
     */
    [[nodiscard]] char *buffer_written_end() {
        return buffer_.get() + buffer_size_;
    }

    /**
     * the end of the whole buffer
     */
    [[nodiscard]] char const *buffer_end() const {
        return buffer_.get() + buffer_capacity_;
    }

    /**
     * size of unwritten buffer
     */
    [[nodiscard]] std::size_t buffer_free() const {
        return buffer_capacity_ - buffer_size_;
    }

    /**
     * size of unread buffer
     */
    [[nodiscard]] std::size_t buffer_occupied() const {
        return std::distance(iter_, buffer_written_end());
    }

    /**
     * position of the end of the written buffer
     */
    [[nodiscard]] pos_type buffer_written_end_pos() const {
        return buffer_pos_ + std::streamoff(buffer_size_);
    }

    /**
     * position of the end of buffer
     */
    [[nodiscard]] pos_type buffer_end_pos() const {
        return buffer_pos_ + std::streamoff(buffer_capacity_);
    }

    /// the reader-head that provides method `read`, `seek`, `tell`, `eof`, etc
    Reader reader_;

    /// the position from where the buffer begins in the original input space
    pos_type buffer_pos_;

    /// mapping to a part of continuous space of a very large input.
    /// at the end of any method, following asserts should be preserved:
    ///   1. whole contiguous memory: the memory [buffer_, buffer_ + buffer_size_)
    /// must be read continuously from (must map into) the real input space;
    ///   2. sync cursor with buffer: the reader's cursor must point at `offset_ + buffer_size_`
    ///   3. valid iterator: the iterator `iter_` must be in [buffer_, buffer_ + buffer_capacity_)
    std::unique_ptr< char[] > buffer_;

    /// the maximum num of bytes that can be written into the buffer
    std::size_t buffer_capacity_;

    /// the number of bytes that has already written into buffer
    std::size_t buffer_size_;

    /// the iterator that points to the buffer where to read
    char const *iter_;

};

#endif //FILE_REL_TYPE_SRC_INPUT_RANDOM_BUFFER_INPUT_HPP_
