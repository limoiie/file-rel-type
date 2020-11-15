//
// Created by ligen on 11/15/2020.
//

#include "exp_un.h"

#include "magic_ast_eval.h"

std::shared_ptr< magic::ast::val > magic::ast::unop::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
    return compute_unop(ctx, this);
}
