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

    p_val_t compute_binop_str_(char const op, p_val_t const &lhs, p_val_t const &rhs, unsigned const flag) {
        assert(lhs->typ == rhs->typ);
        auto v = var::builder::make();
        auto &res_v = caster_int< 8 >::template get_< true >(v);
        auto const l = strnlen_s(rhs->data.s, MAX_STRING_LEN);
        auto const &lhs_v = std::string_view(lhs->data.s, l);
        auto const &rhs_v = std::string_view(rhs->data.s, l);

        // todo: handle the string flags
        std::cerr << "Warning - NotImplemented: Handle the string flags in compute_binop_str_!!!" << std::endl;

        auto maker = [&](uint64_t const) {
            return std::make_shared< val >(val_sign_typ_t{FILE_QUAD, false}, v);
        };

        switch (op) {
            case '<': return maker(res_v = lhs_v < rhs_v);
            case '>': return maker(res_v = lhs_v > rhs_v);
            case '=': return maker(res_v = lhs_v == rhs_v);
            case '!': return maker(res_v = lhs_v != rhs_v);
            default: break;
        }

        throw std::logic_error("Failed to compute bin_str expression: unsupported operator!");
    }

}

p_val_t compute_binop(char const op, p_val_t const &lhs, p_val_t const &rhs) {
    lift_type(lhs, rhs);
    return dispatch_by< internal::binop_computer >(
            size_of_typ(lhs->typ.typ), lhs->typ.is_unsigned, op, lhs, rhs);
}

p_val_t compute_binop_str(char const op, p_val_t const &lhs, p_val_t const &rhs, unsigned const flag) {
    return internal::compute_binop_str_(op, lhs, rhs, flag);
}