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

    explicit random_istream_reader(std::istream &s);

    std::size_t operator()(char *out, std::size_t const to_read);

    off_type tell() const;

    bool eof() const;

    void seek(pos_type pos);

    void seek(off_type off, seek_dir dir);

    std::size_t size();

    void clear();

    std::istream &stream;

};

#endif //FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_READER_H_
