//
// Created by ligen on 11/17/2020.
//

#ifndef FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_INPUT_HPP_
#define FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_INPUT_HPP_

#include "random_buffer_input.hpp"
#include "random_istream_reader.h"

template< std::size_t Chunk = 64 >
struct random_istream_input
        : public random_buffer_input< random_istream_reader, Chunk > {
    random_istream_input(std::istream &in_stream, const std::size_t in_maximum)
            : random_buffer_input< random_istream_reader, Chunk >(in_maximum, in_stream) {
    }

};

#endif //FILE_REL_TYPE_SRC_INPUT_RANDOM_ISTREAM_INPUT_HPP_
