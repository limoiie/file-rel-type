//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_

#include "val.h"
#include "exp_num.h"
#include "exp_bin.h"
#include "exp_un.h"
#include "var.h"

namespace magic::ast
{
    struct ctx_exp_t {
    };

    std::shared_ptr< val > compute_num(std::shared_ptr< ctx_exp_t > const &ctx, num *e);

    std::shared_ptr< val > compute_unop(std::shared_ptr< ctx_exp_t > const &ctx, unop *e);

    std::shared_ptr< val > compute_binop(std::shared_ptr< ctx_exp_t > const &ctx, binop *e);

    std::shared_ptr< val > compute_binop_str(std::shared_ptr< ctx_exp_t > const &ctx, binop_str *e);

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
