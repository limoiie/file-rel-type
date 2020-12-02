//
// Created by ligen on 11/15/2020.
//

#include "exp_un.h"

#include "eval/eval_exp.h"

namespace magic::ast
{
    std::shared_ptr< unop > unop::builder::make_ptr(char op,
                                                    std::shared_ptr< exp > const &inner,
                                                    val_sign_typ_t const &typ) {
        return std::make_shared< unop >(op, inner, typ);
    }

    unop::unop(char const op, std::shared_ptr< exp > inner)
            : op(op), inner(std::move(inner)) {
    }

    unop::unop(char const op, std::shared_ptr< exp > inner, val_sign_typ_t const &typ)
            : exp(typ), op(op), inner(std::move(inner)) {
    }

    bool unop::operator==(unop const &other) const {
        return equal_to(other);
    }

    std::shared_ptr< magic::ast::val > magic::ast::unop::compute_(std::shared_ptr< ctx_exp_t > const &ctx) {
        return compute_unop(ctx, this);
    }

    bool unop::equal_to(exp const &other) const {
        if (auto const *n = dynamic_cast<unop const *>(&other)) {
            return exp::equal_to(other) && *inner == *n->inner && op == n->op;
        }
        return false;
    }

    std::string unop::to_string_() const {
        return op + inner->to_string();
    }

}
