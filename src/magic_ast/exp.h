//
// Created by ligen on 11/4/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_AST_H
#define FILE_REL_TYPE_MAGIC_AST_H

#include <memory>
#include <stack>
#include <string>
#include <utility>

#include "../magic_type.h"
#include "../val_sign_typ.h"

#include "var.h"
#include "val.h"

namespace magic::ast
{
    struct ctx_exp_t;

    struct exp {
        exp() : exp(val_sign_typ_t::default_()) {
        }

        explicit exp(val_sign_typ_t const &typ)
                : typ(typ) {
        }

        friend
        bool operator==(exp const &lhs, exp const &rhs) {
            return lhs.equal_to(rhs);
        }

        friend
        bool operator!=(exp const &lhs, exp const &rhs) {
            return !(lhs == rhs);
        }

        virtual std::string to_string() const {
            return "< " + to_string_() + ":" + typ.to_string() + " >";
        }

        virtual std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) = 0;

    protected:
        [[nodiscard]] virtual bool equal_to(exp const &other) const {
            return typ == other.typ;
        }

        virtual std::string to_string_() const = 0;

    public:
        val_sign_typ_t typ;

    };

}

#endif //FILE_REL_TYPE_MAGIC_AST_H
