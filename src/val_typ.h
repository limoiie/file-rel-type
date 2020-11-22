//
// Created by ligen on 11/20/2020.
//

#ifndef FILE_REL_TYPE_SRC_VAL_TYP_H_
#define FILE_REL_TYPE_SRC_VAL_TYP_H_

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

enum val_fmt_t {
    FILE_FMT_NONE = BIT(0),
    FILE_FMT_STR = BIT(1),
    FILE_FMT_INT = BIT(2),
    FILE_FMT_QUAD = BIT(3),
    FILE_FMT_FLOAT = BIT(4),
    FILE_FMT_DOUBLE = BIT(5),
    FILE_FMT_DATE = BIT(6)
};

enum val_endian_t {
    NORMAL_ENDIAN,
    BIGGER_ENDIAN,
    MIDDLE_ENDIAN,
    LITTLE_ENDIAN
};

#endif //FILE_REL_TYPE_SRC_VAL_TYP_H_