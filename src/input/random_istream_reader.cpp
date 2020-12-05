//
// Created by ligen on 11/22/2020.
//

#include "random_istream_reader.h"

random_istream_reader::random_istream_reader(std::istream &s)
        : stream(s) {
}

std::size_t random_istream_reader::operator()(char *out, std::size_t const to_read) {
    stream.read(out, std::streamsize(to_read));

    if (const auto r = stream.gcount()) {
        return std::size_t(r);
    }
    if (eof()) {
        return 0;
    }
    throw std::system_error(errno, std::system_category(), "std::istream::read() failed");
}

random_istream_reader::off_type random_istream_reader::tell() const {
    return stream.tellg();
}

bool random_istream_reader::eof() const {
    return stream.eof();
}

void random_istream_reader::seek(random_istream_reader::pos_type pos) {
    stream.clear();
    stream.seekg(pos);
}

void random_istream_reader::seek(random_istream_reader::off_type off, random_istream_reader::seek_dir dir) {
    stream.clear();
    stream.seekg(off, dir);
}

std::size_t random_istream_reader::size() {
    auto const origin_pos = stream.tellg();
    if (origin_pos == -1) stream.clear();
    auto const size = stream.seekg(0, std::ios_base::end).tellg();
    stream.seekg(origin_pos);
    return (std::size_t) size;
}

void random_istream_reader::clear() {
    stream.clear();
}
