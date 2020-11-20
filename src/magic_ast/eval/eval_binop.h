//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_

#include <memory>
#include <cassert>

#include "../val.h"
#include "type_cast.h"
#include "type_dispatcher.h"

using namespace magic::ast;

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    std::shared_ptr< val > compute_binop_(char const op, val const &lhs, val const &rhs) {
        assert(lhs.typ == rhs.typ);
        auto v = var::builder::make();
        auto &res_v = caster_int< S >::template get_< IsUnsigned >(v);
        auto const &lhs_v = caster_int< S >::template get_< IsUnsigned >(lhs.data);
        auto const &rhs_v = caster_int< S >::template get_< IsUnsigned >(rhs.data);

        auto maker = [&](int_t< S, IsUnsigned > const &) {
            return std::make_shared< val >(lhs.typ, v);
        };

        switch (op) {
            case '&': return maker(res_v = lhs_v & rhs_v);
            case '|': return maker(res_v = lhs_v | rhs_v);
            case '^': return maker(res_v = lhs_v ^ rhs_v);
            case '+': return maker(res_v = lhs_v + rhs_v);
            case '-': return maker(res_v = lhs_v - rhs_v);
            case '*': return maker(res_v = lhs_v * rhs_v);
            case '/': return maker(res_v = lhs_v / rhs_v);
            case '%': return maker(res_v = lhs_v % rhs_v);
            case '<': return maker(res_v = lhs_v < rhs_v);
            case '>': return maker(res_v = lhs_v > rhs_v);
            case '=': return maker(res_v = lhs_v == rhs_v);
            case '!': return maker(res_v = lhs_v != rhs_v);
        }

        throw std::logic_error("Failed to compute bin expression: unsupported operator!");
    }

}

template< std::size_t S, bool IsUnsigned >
struct [[maybe_unused]] binop_computer {
    static std::shared_ptr< val > on_dispatch(char const op, val const &lhs, val const &rhs) {
        return internal::compute_binop_< S, IsUnsigned >(op, lhs, rhs);
    }
};

std::shared_ptr< val > compute_binop(char const op, val const &lhs, val const &rhs) {
    assert(lhs.typ == rhs.typ);
    return dispatch_by< binop_computer >(size_of_typ(lhs.typ.typ), lhs.typ.is_unsigned, op, lhs, rhs);
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
