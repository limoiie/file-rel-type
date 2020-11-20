//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_

#include "../val.h"
#include "../magic_ast_eval.h"

#include "type_cast.h"
#include "type_dispatcher.h"
#include "type_lift_val.h"

#include "val_fetcher.h"
#include "eval_binop.h"

using magic::ast::val;
using magic::ast::var;
using magic::ast::ctx_exp_t;

using p_ctx_t = std::shared_ptr< ctx_exp_t >;

namespace internal
{
    template< std::size_t S, bool IsUnsigned >
    std::shared_ptr< val > compute_unop_def(val const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
        ctx->current_offset = std::make_shared< val >(inner);
        auto const offset = caster_int< S >::template get_< IsUnsigned >(inner.data);
        ctx->fetcher.in.seek(offset, offset >= 0 ? std::ios_base::beg : std::ios_base::end);
        return ctx->fetcher.fetch(typ);
    }

    std::shared_ptr< val > compute_unop_rel(val const &inner, p_ctx_t const &ctx) {
        if (ctx->offset_history.empty()) {
            throw std::domain_error("Failed to compute unop rel: cannot relatively fetch when no history");
        }
        auto left = *ctx->offset_history.top();
        auto right = inner;
        lift_type(left, right);
        return compute_binop('+', left, right);
    }

    template< std::size_t S >
    std::shared_ptr< val > compute_unop_inv(val const &inner) {
        auto v = std::make_shared< val >(inner);
        caster_int< S >::get(v->data) = ~caster_int< S >::get(v->data);
        return v;
    }

    template< std::size_t S, bool IsUnsigned >
    std::shared_ptr< val >
    compute_unop_(char const op, val const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
        switch (op) {
            case '*': return compute_unop_def< S, IsUnsigned >(inner, typ, ctx);
            case '&': return compute_unop_rel(inner, ctx);
            case '~': return compute_unop_inv< S >(inner);
        }

        throw std::logic_error("Failed to compute unop expression: unsupported operator!");
    }
}

template< std::size_t S, bool IsUnsigned >
struct [[maybe_unused]] unop_computer {
    static std::shared_ptr< val > on_dispatch(char const op,
                                              val const &inner,
                                              val_sign_typ_t const &typ,
                                              p_ctx_t const &ctx) {
        return internal::compute_unop_< S, IsUnsigned >(op, inner, typ, ctx);
    }
};

std::shared_ptr< val > compute_unop(char const op, val const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx) {
    return dispatch_by< unop_computer >(size_of_typ(inner.typ.typ), inner.typ.is_unsigned, op, inner, typ, ctx);
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_
