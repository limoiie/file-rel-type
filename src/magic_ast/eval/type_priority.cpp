//
// Created by ligen on 11/20/2020.
//

#include "type_priority.h"

#include <climits>
#include <stdexcept>

int priority_of_typ(val_typ_t const typ) {
    switch (typ) {
        case FILE_INVALID:
        case FILE_DEFAULT: return 0;

            /// number-integer
        case FILE_BYTE: return 1;

        case FILE_SHORT:
        case FILE_BESHORT:
        case FILE_LESHORT: return 2;

        case FILE_BEID3:
        case FILE_LEID3:

        case FILE_LONG:
        case FILE_BELONG:
        case FILE_LELONG:
        case FILE_MELONG: return 3;

        case FILE_QUAD:
        case FILE_LEQUAD:
        case FILE_BEQUAD: return 4;

            /// number-float/double
        case FILE_FLOAT:
        case FILE_BEFLOAT:
        case FILE_LEFLOAT: return 5;

        case FILE_DOUBLE:
        case FILE_BEDOUBLE:
        case FILE_LEDOUBLE: return 6;

            /// number-date
        case FILE_DATE:
        case FILE_BEDATE:
        case FILE_LEDATE:
        case FILE_MEDATE:

        case FILE_LDATE:
        case FILE_BELDATE:
        case FILE_LELDATE:
        case FILE_MELDATE: return 7;

        case FILE_QDATE:
        case FILE_LEQDATE:
        case FILE_BEQDATE:

        case FILE_QLDATE:
        case FILE_LEQLDATE:
        case FILE_BEQLDATE:

        case FILE_QWDATE:
        case FILE_LEQWDATE:
        case FILE_BEQWDATE: return 8;

            /// string
        case FILE_STRING:
        case FILE_PSTRING:
        case FILE_REGEX:
        case FILE_BESTRING16:
        case FILE_LESTRING16: return 9;

            /// functionality
        case FILE_INDIRECT:
        case FILE_SEARCH:
        case FILE_NAME:
        case FILE_USE:
        case FILE_CLEAR:
        case FILE_DER: return INT_MAX;
    }

    throw std::domain_error("type_priority: Not support type!");
}
