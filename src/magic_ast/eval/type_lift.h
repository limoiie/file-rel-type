//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_H_

#include "../elem/var.h"

using magic::ast::var;

void type_lift(std::size_t &l_size, bool &l_is_unsigned, var &lhs,
               std::size_t &r_size, bool &r_is_unsigned, var &rhs);

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_H_
