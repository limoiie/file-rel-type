//
// Created by ligen on 11/15/2020.
//

#include "eval_exp.h"

#include "eval_binop.h"
#include "eval_unop.h"

namespace magic::ast
{
    using p_ctx = std::shared_ptr< ctx_exp_t >;

    ctx_exp_t::ctx_exp_t(std::istream &stream, std::size_t maximum_buffer)
            : in(stream, maximum_buffer)
            , fetcher(in) {
    }
    // todo: consider using int64_t to present all the integer value?

    p_val_t compute_num(p_ctx const &ctx, num *e) {
        return std::make_shared< val >(*e->inner);
    }

    p_val_t compute_unop(p_ctx const &ctx, unop *e) {
        auto inner_v = e->inner->compute(ctx);
        return ::compute_unop(e->op, inner_v, e->typ, ctx);
    }

    p_val_t compute_binop(p_ctx const &ctx, binop *e) {
        auto left_v = e->left->compute(ctx);
        auto right_v = e->right->compute(ctx);
        return ::compute_binop(e->op, left_v, right_v);
    }

    p_val_t compute_binop_str(p_ctx const &ctx, binop_str *e) {
        auto left_v = e->left->compute(ctx);
        auto right_v = e->right->compute(ctx);
        return ::compute_binop_str(e->op, left_v, right_v, e->flag);
    }

}