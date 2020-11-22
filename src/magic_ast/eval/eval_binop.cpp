//
// Created by ligen on 11/21/2020.
//

#include "eval_binop.h"

#include <memory>
#include <cassert>

#include "type_cast.hpp"
#include "type_lift_val.h"

using namespace magic::ast;

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    p_val_t compute_binop_(char const op, p_val_t const &lhs, p_val_t const &rhs) {
        assert(lhs->typ == rhs->typ);
        auto v = var::builder::make();
        auto &res_v = caster_int< S >::template get_< IsUnsigned >(v);
        auto const &lhs_v = caster_int< S >::template get_< IsUnsigned >(lhs->data);
        auto const &rhs_v = caster_int< S >::template get_< IsUnsigned >(rhs->data);

        auto maker = [&](int_t< S, IsUnsigned > const &) {
            return std::make_shared< val >(lhs->typ, v);
        };

        switch (op) {
            case '&': return maker(res_v = lhs_v & rhs_v); // NOLINT(hicpp-signed-bitwise)
            case '|': return maker(res_v = lhs_v | rhs_v); // NOLINT(hicpp-signed-bitwise)
            case '^': return maker(res_v = lhs_v ^ rhs_v); // NOLINT(hicpp-signed-bitwise)
            case '+': return maker(res_v = lhs_v + rhs_v);
            case '-': return maker(res_v = lhs_v - rhs_v);
            case '*': return maker(res_v = lhs_v * rhs_v);
            case '/': return maker(res_v = lhs_v / rhs_v);
            case '%': return maker(res_v = lhs_v % rhs_v);
            case '<': return maker(res_v = lhs_v < rhs_v);
            case '>': return maker(res_v = lhs_v > rhs_v);
            case '=': return maker(res_v = lhs_v == rhs_v);
            case '!': return maker(res_v = lhs_v != rhs_v);
            default: break;
        }

        throw std::logic_error("Failed to compute bin expression: unsupported operator!");
    }

    template< std::size_t S, bool IsUnsigned >
    struct [[maybe_unused]] binop_computer {
        static p_val_t on_dispatch(char const op, p_val_t const &lhs, p_val_t const &rhs) {
            return internal::compute_binop_< S, IsUnsigned >(op, lhs, rhs);
        }
    };

}

p_val_t compute_binop(char const op, p_val_t const &lhs, p_val_t const &rhs) {
    lift_type(lhs, rhs);
    return dispatch_by< internal::binop_computer >(
            size_of_typ(lhs->typ.typ), lhs->typ.is_unsigned, op, lhs, rhs);
}