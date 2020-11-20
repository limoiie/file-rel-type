//
// Created by ligen on 11/15/2020.
//

#include "magic_ast_eval.h"

namespace magic::ast
{
    using p_ctx = std::shared_ptr< ctx_exp_t >;
    using p_val = std::shared_ptr< val >;

    std::shared_ptr< val > compute_unop_deref(p_ctx const &ctx, unop *e, p_val const &v) {
        return nullptr;
    }

    std::shared_ptr< val > compute_num(p_ctx const &ctx, num *e) {
        return std::make_shared< val >(e->inner->typ, e->inner->data);
    }

    std::shared_ptr< val > compute_unop(p_ctx const &ctx, unop *e) {
        return nullptr;
    }

    std::shared_ptr< val > compute_binop(p_ctx const &ctx, binop *e) {
        return nullptr;
    }

    std::shared_ptr< val > compute_binop_str(p_ctx const &ctx, binop_str *e) {
        return nullptr;
    }

}