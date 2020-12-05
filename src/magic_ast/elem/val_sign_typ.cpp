//
// Created by ligen on 11/20/2020.
//

#include "val_sign_typ.h"

#include "val_typ_name.h"

val_sign_typ_t::val_sign_typ_t(val_typ_t typ, bool is_unsigned)
        : typ(typ), is_unsigned(is_unsigned) {
}

val_sign_typ_t val_sign_typ_t::default_() {
    return {
            FILE_QUAD, false
    };
}

bool val_sign_typ_t::operator==(const val_sign_typ_t &rhs) const {
    return typ == rhs.typ;  // comparing will ignore the sign
}

bool val_sign_typ_t::operator!=(const val_sign_typ_t &rhs) const {
    return !(rhs == *this);
}

bool val_sign_typ_t::is_string() const {
    return is_string_typ(typ);
}

bool val_sign_typ_t::is_number() const {
    return is_number_typ(typ);
}

std::string val_sign_typ_t::to_string() const {
    return std::string(is_unsigned ? "u" : "i").append(name_of_typ(typ));
}

val_sign_typ_t parse_sign_typ(std::string const &name) {
    auto typ = parse_typ(name);
    auto is_unsigned = false;
    if (typ == val_typ_t::FILE_INVALID) {
        if (tolower(name.front()) == 'u') {
            typ = parse_typ(name.substr(1));
            is_unsigned = typ != val_typ_t::FILE_INVALID;
        }
    }

    return {typ, is_unsigned};
}
