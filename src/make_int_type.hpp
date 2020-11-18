//
// Created by ligen on 11/17/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAKE_INT_TYPE_HPP_
#define FILE_REL_TYPE_SRC_MAKE_INT_TYPE_HPP_

#include <cstdint>
#include <type_traits>

template< size_t S >
struct make_int;

template<>
struct make_int< 1 > {
    using type = int8_t;
};

template<>
struct make_int< 2 > {
    using type = int16_t;
};

template<>
struct make_int< 4 > {
    using type = int32_t;
};

template<>
struct make_int< 8 > {
    using type = int64_t;
};

template< size_t S >
using make_int_t = typename make_int< S >::type;

template< size_t S >
using make_uint_t = std::make_unsigned_t< make_int_t< S > >;

#endif //FILE_REL_TYPE_SRC_MAKE_INT_TYPE_HPP_
