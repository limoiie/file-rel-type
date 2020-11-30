//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_

#include "../elem/val.h"
#include "magic_ast_eval.h"

using magic::ast::p_val_t;
using magic::ast::p_ctx_t;

p_val_t compute_unop(char const op, p_val_t const &inner, val_sign_typ_t const &typ, p_ctx_t const &ctx);

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_UNOP_H_
