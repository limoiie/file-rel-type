//
// Created by ligen on 11/15/2020.
//

#include "magic_ast_eval.h"

#include "eval/eval_binop.h"
#include "eval/eval_unop.h"

namespace magic::ast
{
    using p_ctx = std::shared_ptr< ctx_exp_t >;

    p_val_t compute_num(p_ctx const &ctx, num *e) {
        return std::make_shared< val >(*e->inner);
    }

    p_val_t compute_unop(p_ctx const &ctx, unop *e) {
        auto inner_v = e->inner->compute(ctx);
        return ::compute_unop(e->op, inner_v, e->typ, ctx);
    }

    p_val_t compute_binop(p_ctx const &ctx, binop *e) {
        auto left_v = e->left->compute(ctx);
        auto right_v = e->left->compute(ctx);
        return ::compute_binop(e->op, left_v, right_v);
    }

    p_val_t compute_binop_str(p_ctx const &ctx, binop_str *e) {
        return nullptr;
    }

}