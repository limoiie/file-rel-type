//
// Created by ligen on 11/22/2020.
//

#include "exp.h"

magic::ast::exp::exp() : exp(val_sign_typ_t::default_()) {
}

magic::ast::exp::exp(val_sign_typ_t const &typ)
        : typ(typ) {
}

bool magic::ast::operator==(magic::ast::exp const &lhs, magic::ast::exp const &rhs) {
    return lhs.equal_to(rhs);
}

bool magic::ast::operator!=(magic::ast::exp const &lhs, magic::ast::exp const &rhs) {
    return !(lhs == rhs);
}

std::string magic::ast::exp::to_string() const {
    return "< " + to_string_() + ":" + typ.to_string() + " >";
}

bool magic::ast::exp::equal_to(magic::ast::exp const &other) const {
    return typ == other.typ;
}
