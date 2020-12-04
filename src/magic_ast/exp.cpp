//
// Created by ligen on 11/22/2020.
//

#include "exp.h"

namespace magic::ast
{
    exp::exp() : exp(val_sign_typ_t::default_()) {
    }

    exp::exp(val_sign_typ_t const &typ)
            : typ(typ) {
    }

    bool operator==(exp const &lhs, exp const &rhs) {
        return lhs.equal_to(rhs);
    }

    bool operator!=(exp const &lhs, exp const &rhs) {
        return !(lhs == rhs);
    }

    std::string exp::to_string() const {
        return "(" + to_string_() + ":" + typ.to_string() + ")";
    }

    bool exp::equal_to(exp const &other) const {
        return typ == other.typ;
    }

}
