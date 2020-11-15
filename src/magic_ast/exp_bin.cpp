//
// Created by ligen on 11/15/2020.
//

#include "exp_bin.h"

#include "magic_ast_eval.h"

std::shared_ptr< magic::ast::val > magic::ast::binop::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
    return compute_binop(ctx, this);
}

std::shared_ptr< magic::ast::val > magic::ast::binop_str::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
    return compute_binop_str(ctx, this);
}
