//
// Created by ligen on 11/20/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_VAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_VAL_H_

#include "../elem/val.h"

using magic::ast::val;
using magic::ast::p_val_t;

void lift_type(val &l_val, val &r_val);

void lift_type(p_val_t const &l_val, p_val_t const &r_val);

val_sign_typ_t lift_type(val_sign_typ_t const &l_typ, // NOLINT(readability-avoid-const-params-in-decls) ???
                         val_sign_typ_t const &r_typ);

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_LIFT_VAL_H_
