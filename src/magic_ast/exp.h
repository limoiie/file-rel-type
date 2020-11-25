//
// Created by ligen on 11/4/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_AST_H
#define FILE_REL_TYPE_MAGIC_AST_H

#include <memory>
#include <stack>
#include <string>
#include <utility>

#include "../val_sign_typ.h"

#include "var.h"
#include "val.h"

namespace magic::ast
{
    struct ctx_exp_t;

    struct exp {
        exp();

        explicit exp(val_sign_typ_t const &typ);

        friend
        bool operator==(exp const &lhs, exp const &rhs);

        friend
        bool operator!=(exp const &lhs, exp const &rhs);

        virtual std::string to_string() const;

        virtual p_val_t compute(std::shared_ptr< ctx_exp_t > const &ctx) = 0;

    protected:
        [[nodiscard]] virtual bool equal_to(exp const &other) const;

        virtual std::string to_string_() const = 0;

    public:
        val_sign_typ_t typ;

    };

}

#endif //FILE_REL_TYPE_MAGIC_AST_H
