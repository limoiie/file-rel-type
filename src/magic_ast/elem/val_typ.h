//
// Created by ligen on 11/20/2020.
//

#ifndef FILE_REL_TYPE_SRC_VAL_TYP_H_
#define FILE_REL_TYPE_SRC_VAL_TYP_H_

#include <string>
#include <list>

#define BIT(O) (1u << (O##u))

enum val_typ_t {
    FILE_INVALID,
    FILE_BYTE,
    FILE_SHORT,
    FILE_DEFAULT,
    FILE_LONG,
    FILE_STRING,
    FILE_DATE,
    FILE_BESHORT,
    FILE_BELONG,
    FILE_BEDATE,
    FILE_LESHORT,
    FILE_LELONG,
    FILE_LEDATE,
    FILE_PSTRING,
    FILE_LDATE,
    FILE_BELDATE,
    FILE_LELDATE,
    FILE_REGEX,
    FILE_BESTRING16,
    FILE_LESTRING16,
    FILE_SEARCH,
    FILE_MEDATE,
    FILE_MELDATE,
    FILE_MELONG,
    FILE_QUAD,
    FILE_LEQUAD,
    FILE_BEQUAD,
    FILE_QDATE,
    FILE_LEQDATE,
    FILE_BEQDATE,
    FILE_QLDATE,
    FILE_LEQLDATE,
    FILE_BEQLDATE,
    FILE_FLOAT,
    FILE_BEFLOAT,
    FILE_LEFLOAT,
    FILE_DOUBLE,
    FILE_BEDOUBLE,
    FILE_LEDOUBLE,
    FILE_BEID3,
    FILE_LEID3,
    FILE_INDIRECT,
    FILE_QWDATE,
    FILE_LEQWDATE,
    FILE_BEQWDATE,
    FILE_NAME,
    FILE_USE,
    FILE_CLEAR,
    FILE_DER
};

bool is_number_typ(val_typ_t typ);

bool is_integer_typ(val_typ_t typ);

bool is_string_typ(val_typ_t typ);

size_t size_of_typ(val_typ_t typ);

val_typ_t int_type_of(unsigned size);

#endif //FILE_REL_TYPE_SRC_VAL_TYP_H_
