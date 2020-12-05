//
// Created by ligen on 11/25/2020.
//

#include "val_typ.h"

#include <stdexcept>

#include "val_typ_name.h"

bool is_number_typ(val_typ_t const typ) {
    auto const format = format_of(typ);
    return is_number_fmt(format);
}

bool is_integer_typ(val_typ_t const typ) {
    return is_integer_fmt(format_of(typ));
}

bool is_string_typ(val_typ_t const typ) {
    auto const format = format_of(typ);
    return is_string_fmt(format);
}

size_t size_of_typ(val_typ_t typ) {
    switch (typ) {
        case FILE_BYTE: return (size_t) 1;

        case FILE_SHORT:
        case FILE_LESHORT:
        case FILE_BESHORT: return (size_t) 2;

        case FILE_LONG:
        case FILE_LELONG:
        case FILE_BELONG:
        case FILE_MELONG:

        case FILE_DATE:
        case FILE_LEDATE:
        case FILE_BEDATE:
        case FILE_MEDATE:
        case FILE_LDATE:
        case FILE_LELDATE:
        case FILE_BELDATE:
        case FILE_MELDATE:
        case FILE_FLOAT:
        case FILE_BEFLOAT:
        case FILE_LEFLOAT: return (size_t) 4;

        case FILE_QUAD:
        case FILE_BEQUAD:
        case FILE_LEQUAD:
        case FILE_QDATE:
        case FILE_LEQDATE:
        case FILE_BEQDATE:
        case FILE_QLDATE:
        case FILE_LEQLDATE:
        case FILE_BEQLDATE:
        case FILE_QWDATE:
        case FILE_LEQWDATE:
        case FILE_BEQWDATE:
        case FILE_DOUBLE:
        case FILE_BEDOUBLE:
        case FILE_LEDOUBLE: return (size_t) 8;

        default: return (size_t) ~(size_t) 0;
    }
}

val_typ_t int_type_of(unsigned const size) {
    switch (size) {
        case 1: return FILE_BYTE;
        case 2: return FILE_SHORT;
        case 4: return FILE_LONG;
        case 8: return FILE_QUAD;
        default: break;
    }
    throw std::runtime_error("Failed to create integer type: invalid type size!");
}
