//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_

#include <memory>
#include <cassert>

#include "../val.h"
#include "cast_var.h"

using namespace magic::ast;

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    std::shared_ptr< val > compute_binop_(char const op, val const &lhs, val const &rhs) {
        assert(lhs.typ == rhs.typ);
        auto v = var::builder::make();
        auto &res_v = caster_int< S >::get_< IsUnsigned >(v);
        auto &lhs_v = caster_int< S >::get_< IsUnsigned >(lhs);
        auto &rhs_v = caster_int< S >::get_< IsUnsigned >(rhs);
        switch (op) {
            case '&': res_v = lhs_v & rhs_v; break;
            case '|': res_v = lhs_v | rhs_v; break;
            case '^': res_v = lhs_v ^ rhs_v; break;
            case '+': res_v = lhs_v + rhs_v; break;
            case '-': res_v = lhs_v - rhs_v; break;
            case '*': res_v = lhs_v * rhs_v; break;
            case '/': res_v = lhs_v / rhs_v; break;
            case '%': res_v = lhs_v % rhs_v; break;
            case '<': res_v = lhs_v < rhs_v; break;
            case '>': res_v = lhs_v > rhs_v; break;
            case '=': res_v = lhs_v == rhs_v; break;
            case '!': res_v = lhs_v != rhs_v; break;
        }
        return std::make_shared< val >(lhs.typ, v);
    }

}

template< std::size_t S >
std::shared_ptr< val > compute_binop(char const op, val const &lhs, val const &rhs) {
    assert(lhs.typ == rhs.typ);
    return lhs.typ.is_unsigned ? internal::compute_binop_<S, true>(op, lhs, rhs)
                               : internal::compute_binop_<S, false>(op, lhs, rhs);
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
