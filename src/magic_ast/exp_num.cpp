//
// Created by ligen on 11/15/2020.
//

#include "exp_num.h"

#include "eval/eval_exp.h"

namespace magic::ast
{
    num::num(std::shared_ptr< val > inner)
            : exp(inner->typ), inner(std::move(inner)) {
    }

    bool num::operator==(num const &other) const {
        return exp::equal_to(other) && *inner == *other.inner;
    }

    std::shared_ptr< val > num::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
        return compute_num(ctx, this);
    }

    bool num::equal_to(exp const &other) const {
        if (num const *n = dynamic_cast<num const *>(&other)) {
            return *this == *n;
        }
        return false;
    }

    std::string num::to_string_() const {
        return inner->to_string();
    }

    std::shared_ptr< num > num::builder::make_ptr(val_sign_typ_t typ, var const &data) {
        return std::shared_ptr< num >(new num{std::make_shared< val >(typ, data)});
    }

}