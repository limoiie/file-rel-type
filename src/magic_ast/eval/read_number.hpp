//
// Created by ligen on 11/17/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_READ_NUMBER_HPP_
#define FILE_REL_TYPE_SRC_MAGIC_AST_READ_NUMBER_HPP_

#include "../elem/var.h"

template< class Int >
Int read_normal_endian(magic::ast::var const *v) {
    return *(Int *) v;
}

template< class Int >
Int read_bigger_endian(magic::ast::var const *v) {
    auto constexpr s = sizeof(Int);
    Int res = 0;
    for (unsigned i = 0, o = s - 1; i < s; ++i, --o) {
        res |= ((Int) v->hq[i]) << (o << 3);
    }
    return res;
}

template< class Int >
Int read_little_endian(magic::ast::var const *v) {
    auto constexpr s = sizeof(Int);
    Int res = 0;
    for (unsigned i = 0; i < s; ++i) {
        res |= ((Int) v->hq[i]) << (i << 3);
    }
    return res;
}

template< class Int >
Int read_middle_endian(magic::ast::var const *v) {
    auto constexpr s = sizeof(Int);
    Int res = 0;
    for (unsigned i = 0, o = s - 1; i < s; ++i, --o) {
        auto const k = (i & 1) ? i - 1 : i + 1;
        res |= ((Int) v->hq[k]) << (o << 3);
    }
    return res;
}

inline
uint32_t to_id3(uint32_t const v) {
    return (((v >>  0u) & 0x7fu) <<  0u) |
           (((v >>  8u) & 0x7fu) <<  7u) |
           (((v >> 16u) & 0x7fu) << 14u) |
           (((v >> 24u) & 0x7fu) << 21u);
}

inline
void to_id3_(uint32_t &v) {
    v = to_id3(v);
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_READ_NUMBER_HPP_
