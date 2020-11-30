//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_

#include "../elem/val.h"

using magic::ast::p_val_t;

p_val_t compute_binop(char const op, p_val_t const &lhs, p_val_t const &rhs);

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_BINOP_H_
