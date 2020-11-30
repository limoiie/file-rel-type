//
// Created by ligen on 11/20/2020.
//

#include "val_typ_endian.h"

val_endian_t endian_of_typ(val_typ_t typ) {
    switch (typ) {
        case FILE_LEDOUBLE:
        case FILE_LEDATE:
        case FILE_LEFLOAT:
        case FILE_LEID3:
        case FILE_LELONG:
        case FILE_LELDATE:
        case FILE_LEQDATE:
        case FILE_LEQLDATE:
        case FILE_LEQUAD:
        case FILE_LEQWDATE:
        case FILE_LESHORT:
        case FILE_LESTRING16: return LITTLE_ENDIAN;

        case FILE_BEDOUBLE:
        case FILE_BEDATE:
        case FILE_BEFLOAT:
        case FILE_BEID3:
        case FILE_BELONG:
        case FILE_BELDATE:
        case FILE_BEQDATE:
        case FILE_BEQLDATE:
        case FILE_BEQUAD:
        case FILE_BEQWDATE:
        case FILE_BESHORT:
        case FILE_BESTRING16: return BIGGER_ENDIAN;

        case FILE_MEDATE:
        case FILE_MELDATE:
        case FILE_MELONG: return MIDDLE_ENDIAN;

        default: return NORMAL_ENDIAN;
    }
}

val_typ_t erase_endian(val_typ_t typ) {
    switch (typ) {
        case FILE_BYTE: return FILE_BYTE;

        case FILE_LESHORT:
        case FILE_BESHORT:
        case FILE_SHORT: return FILE_SHORT;

        case FILE_LONG:
        case FILE_LELONG:
        case FILE_MELONG:
        case FILE_BELONG:
        case FILE_LEID3:
        case FILE_BEID3: return FILE_LONG;

        case FILE_LEQUAD:
        case FILE_BEQUAD:
        case FILE_QUAD: return FILE_QUAD;

        case FILE_LEFLOAT:
        case FILE_BEFLOAT:
        case FILE_FLOAT: return FILE_FLOAT;

        case FILE_LEDOUBLE:
        case FILE_BEDOUBLE:
        case FILE_DOUBLE: return FILE_DOUBLE;

        case FILE_LEDATE:
        case FILE_BEDATE:
        case FILE_MEDATE:
        case FILE_DATE: return FILE_DATE;

        case FILE_LELDATE:
        case FILE_MELDATE:
        case FILE_BELDATE:
        case FILE_LDATE: return FILE_LDATE;

        case FILE_LEQDATE:
        case FILE_BEQDATE:
        case FILE_QDATE: return FILE_QDATE;

        case FILE_LEQLDATE:
        case FILE_BEQLDATE:
        case FILE_QLDATE: return FILE_QLDATE;

        case FILE_LEQWDATE:
        case FILE_BEQWDATE:
        case FILE_QWDATE: return FILE_QWDATE;

        case FILE_STRING:
        case FILE_PSTRING:
        case FILE_LESTRING16:
        case FILE_BESTRING16: return FILE_STRING;

        case FILE_INVALID:
        case FILE_DEFAULT:
        case FILE_REGEX:
        case FILE_SEARCH:
        case FILE_INDIRECT:
        case FILE_NAME:
        case FILE_USE:
        case FILE_CLEAR:
        case FILE_DER:
        default: return typ;
    }
}
