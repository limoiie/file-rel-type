//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_

#include <memory>
#include <cassert>

#include "../val.h"
#include "type_cast.h"

using namespace magic::ast;

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    std::shared_ptr< val > compute_binop_(char const op, val const &lhs, val const &rhs) {
        assert(lhs.typ == rhs.typ);
        auto v = var::builder::make();
        auto &res_v = caster_int< S >::template get_< IsUnsigned >(v);
        auto lhs_v = caster_int< S >::template get_< IsUnsigned >(lhs.data);
        auto rhs_v = caster_int< S >::template get_< IsUnsigned >(rhs.data);
        switch (op) {
            case '&': res_v = lhs_v & rhs_v;
                break;
            case '|': res_v = lhs_v | rhs_v;
                break;
            case '^': res_v = lhs_v ^ rhs_v;
                break;
            case '+': res_v = lhs_v + rhs_v;
                break;
            case '-': res_v = lhs_v - rhs_v;
                break;
            case '*': res_v = lhs_v * rhs_v;
                break;
            case '/': res_v = lhs_v / rhs_v;
                break;
            case '%': res_v = lhs_v % rhs_v;
                break;
            case '<': res_v = lhs_v < rhs_v;
                break;
            case '>': res_v = lhs_v > rhs_v;
                break;
            case '=': res_v = lhs_v == rhs_v;
                break;
            case '!': res_v = lhs_v != rhs_v;
                break;
        }
        return std::make_shared< val >(lhs.typ, v);
    }

}

template< std::size_t S >
std::shared_ptr< val > compute_binop(char const op, val const &lhs, val const &rhs) {
    assert(lhs.typ == rhs.typ);
    return lhs.typ.is_unsigned ? internal::compute_binop_< S, true >(op, lhs, rhs)
                               : internal::compute_binop_< S, false >(op, lhs, rhs);
}

std::shared_ptr< val > compute_binop(char const op, val const &lhs, val const &rhs) {
    assert(lhs.typ == rhs.typ);
    switch (size_of_typ(lhs.typ.typ)) {
        case 1: return compute_binop< 1 >(op, lhs, rhs);
        case 2: return compute_binop< 2 >(op, lhs, rhs);
        case 4: return compute_binop< 4 >(op, lhs, rhs);
        case 8: return compute_binop< 8 >(op, lhs, rhs);
    }
    throw std::logic_error("Failed to compute bin expression: not supported type size!");
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
