//
// Created by ligen on 11/15/2020.
//

#include "magic_ast_eval.h"

namespace magic::ast
{
    std::shared_ptr< val > compute_num(std::shared_ptr< ctx_exp_t > const &ctx, num *e) {
        return e->inner;
    }

    std::shared_ptr< val > compute_unop(std::shared_ptr< ctx_exp_t > const &ctx, unop *e) {
        return nullptr;
    }

    std::shared_ptr< val > compute_binop(std::shared_ptr< ctx_exp_t > const &ctx, binop *e) {
        return nullptr;
    }

    std::shared_ptr< val > compute_binop_str(std::shared_ptr< ctx_exp_t > const &ctx, binop_str *e) {
        return nullptr;
    }

}