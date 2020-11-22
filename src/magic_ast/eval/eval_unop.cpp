//
// Created by ligen on 11/21/2020.
//

#include "eval_unop.h"

#include "type_cast.hpp"
#include "eval_binop.h"

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    p_val_t compute_unop_def(p_val_t const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
        ctx->current_offset = std::make_shared< val >(*inner);
        auto const offset = caster_int< S >::template get_< IsUnsigned >(inner->data);
        ctx->fetcher.in.seek(offset, offset >= 0 ? std::ios_base::beg : std::ios_base::end);
        return ctx->fetcher.fetch(typ);
    }

    inline
    p_val_t compute_unop_rel(p_val_t const &inner, p_ctx_t const &ctx) {
        if (ctx->offset_history.empty()) {
            throw std::domain_error("Failed to compute unop rel: cannot relatively fetch when no history");
        }
        auto const &left = ctx->offset_history.top();
        auto const &right = inner;
        return compute_binop('+', left, right);
    }

    template< std::size_t S >
    p_val_t compute_unop_inv(p_val_t const &inner) {
        caster_int< S >::get(inner->data) = ~caster_int< S >::get(inner->data);
        return inner;
    }

    template< std::size_t S, bool IsUnsigned >
    p_val_t
    compute_unop_(char const op, p_val_t const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
        switch (op) {
            case '*': return compute_unop_def< S, IsUnsigned >(inner, typ, ctx);
            case '&': return compute_unop_rel(inner, ctx);
            case '~': return compute_unop_inv< S >(inner);
            default: break;
        }

        throw std::logic_error("Failed to compute unop expression: unsupported operator!");
    }

    template< std::size_t S, bool IsUnsigned >
    struct [[maybe_unused]] unop_computer {
        static
        p_val_t on_dispatch(char const op, p_val_t const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
            return internal::compute_unop_< S, IsUnsigned >(op, inner, typ, ctx);
        }
    };

}

p_val_t compute_unop(char const op, p_val_t const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
    return dispatch_by< internal::unop_computer >(
            size_of_typ(inner->typ.typ), inner->typ.is_unsigned, op, inner, typ, ctx);
}
