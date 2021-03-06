//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_

#include <memory>
#include <stack>
#include <utility>

#include "var.h"

#include "val_sign_typ.h"

namespace magic::ast
{
    struct val;

    using p_val_t = std::shared_ptr< val >;

    struct val {
        struct builder {
            static p_val_t default_true_ptr();

            static p_val_t default_false_ptr();

        };

        val_sign_typ_t typ;
        var data;

        explicit val(val_sign_typ_t typ, var const &data);

        bool operator==(const val &rhs) const;

        bool operator!=(const val &rhs) const;

        std::string to_string() const;

    };

    bool is_val_true(p_val_t const& v);

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_
