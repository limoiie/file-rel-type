//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_CAST_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_CAST_H_

#include <iostream>

#include "../var.h"
#include "../../make_int_type.hpp"

#include "type_dispatcher.h"

using namespace magic::ast;

template< std::size_t S, bool IsUnsigned >
using int_t = std::conditional_t< IsUnsigned, make_uint_t< S >, make_int_t< S>>;

template< std::size_t S >
struct caster_int;

template<>
struct caster_int< 1 > {
    static uint8_t &get(var &v) {
        return v.b;
    }

    template< bool IsUnsigned >
    static int_t< 1, IsUnsigned > &get_(var &v) {
        return (int_t< 1, IsUnsigned > &) v.b;
    }

    template< bool IsUnsigned >
    static int_t< 1, IsUnsigned > get_(var const &v) {
        return (int_t< 1, IsUnsigned >) v.b;
    }

};

template<>
struct caster_int< 2 > {
    static uint16_t &get(var &v) {
        return v.h;
    }

    template< bool IsUnsigned >
    static int_t< 2, IsUnsigned > &get_(var &v) {
        return (int_t< 2, IsUnsigned > &) v.h;
    }

    template< bool IsUnsigned >
    static int_t< 2, IsUnsigned > get_(var const &v) {
        return (int_t< 2, IsUnsigned >) v.h;
    }

};

template<>
struct caster_int< 4 > {
    static uint32_t &get(var &v) {
        return v.l;
    }

    template< bool IsUnsigned >
    static int_t< 4, IsUnsigned > &get_(var &v) {
        return (int_t< 4, IsUnsigned > &) v.l;
    }

    template< bool IsUnsigned >
    static int_t< 4, IsUnsigned > get_(var const &v) {
        return (int_t< 4, IsUnsigned >) v.l;
    }

};

template<>
struct caster_int< 8 > {
    static uint64_t &get(var &v) {
        return v.q;
    }

    template< bool IsUnsigned >
    static int_t< 8, IsUnsigned > &get_(var &v) {
        return (int_t< 8, IsUnsigned > &) v.q;
    }

    template< bool IsUnsigned >
    static int_t< 8, IsUnsigned > get_(var const &v) {
        return (int_t< 8, IsUnsigned >) v.q;
    }

};

template< std::size_t From, std::size_t To >
struct [[maybe_unused]] int_caster {
    static void on_dispatch(var &v, bool const is_from_unsigned, bool const is_to_unsigned) {
        using int_from_t = make_int_t< From >;
        using int_to_t = make_int_t< To >;
        using uint_to_t = make_uint_t< To >;

        auto &to = caster_int< To >::get(v);
        auto &from = caster_int< From >::get(v);

        switch ((is_from_unsigned ? 0b00 : 0b10) | (is_to_unsigned ? 0b00 : 0b01)) {
            case 0b00:to = (uint_to_t) from;
                break;
            case 0b01:to = (uint_to_t) (int_to_t) from;
                break;
            case 0b10:to = (uint_to_t) (int_from_t) from;
                break;
            case 0b11:to = (uint_to_t) (int_to_t) (int_from_t) from;
                break;
        }
    }
};

inline
void cast_int(var &v, std::size_t from, std::size_t to, bool const is_from_unsigned, bool const is_to_unsigned) {
    dispatcher_by_2sizes::dispatch< int_caster >(from, to, v, is_from_unsigned, is_to_unsigned);
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_CAST_H_
