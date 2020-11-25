//
// Created by ligen on 11/20/2020.
//

#include "type_lift_val.h"

#include <cassert>

#include "../../val_typ_name.h"

#include "type_priority.h"
#include "type_cast.hpp"

void lift_type(val &l_val, val &r_val) {
    assert(endian_of_typ(l_val.typ.typ) == NORMAL_ENDIAN);
    assert(endian_of_typ(r_val.typ.typ) == NORMAL_ENDIAN);

    if (is_integer_typ(l_val.typ.typ) && is_integer_typ(r_val.typ.typ)) {
        auto sign_typ = lift_type(l_val.typ, r_val.typ);
        auto const typ_sign = sign_typ.is_unsigned;
        auto const typ_size = size_of_typ(sign_typ.typ);
        cast_int(l_val.data, size_of_typ(l_val.typ.typ), typ_size, l_val.typ.is_unsigned, typ_sign);
        cast_int(r_val.data, size_of_typ(r_val.typ.typ), typ_size, r_val.typ.is_unsigned, typ_sign);
        l_val.typ = sign_typ;
        r_val.typ = sign_typ;
    } else {
        // todo: support across non-integer
        throw std::domain_error("type_lift(val): Not support cast between non-integer type yet!");
    }
}

void lift_type(p_val_t const &l_val, p_val_t const &r_val) {
    lift_type(*l_val, *r_val);
}

val_sign_typ_t lift_type(val_sign_typ_t const &l_typ, val_sign_typ_t const &r_typ) {
    auto const is_unsigned = l_typ.is_unsigned && r_typ.is_unsigned;
    auto const typ = priority_of_typ(l_typ.typ) > priority_of_typ(r_typ.typ) ? l_typ.typ : r_typ.typ;
    return {
        typ, is_unsigned
    };
}
