//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_READER_H_
#define FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_READER_H_

#include <istream>

struct random_istream_reader {
    using pos_type = std::istream::pos_type;
    using off_type = std::istream::off_type;
    using seek_dir = std::ios_base::seekdir;

    explicit random_istream_reader(std::istream &s)
            : stream(s) {
    }

    std::size_t operator()(char *out, std::size_t const to_read) {
        stream.read(out, std::streamsize(to_read));

        if (const auto r = stream.gcount()) {
            return std::size_t(r);
        }
        if (eof()) {
            return 0;
        }
        throw std::system_error(errno, std::system_category(), "std::istream::read() failed");
    }

    off_type tell() const {
        return stream.tellg();
    }

    bool eof() const {
        return stream.eof();
    }

    void seek(pos_type pos) {
        stream.clear();
        stream.seekg(pos);
    }

    void seek(off_type off, seek_dir dir) {
        stream.clear();
        stream.seekg(off, dir);
    }

    std::size_t size() {
        auto const origin_pos = stream.tellg();
        if (origin_pos == -1) stream.clear();
        auto const size = stream.seekg(0, std::ios_base::end).tellg();
        stream.seekg(origin_pos);
        return size;
    }

    std::istream &stream;

};

#endif //FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_READER_H_
