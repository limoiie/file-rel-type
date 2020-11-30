//
// Created by ligen on 11/30/2020.
//

#include "magic_peg_op_typ_action.h"

namespace np_type::action::abbrev::internal
{
    bool offset_indirect_unsigned(char const c) {
        return c == '.';
    }

    val_typ_t abbrev_sign_typ(char const c) {
        switch (c) {
            case 'l':return FILE_LELONG;
            case 'L':return FILE_BELONG;
            case 'm':return FILE_MELONG;
            case 'h':
            case 's':return FILE_LESHORT;
            case 'H':
            case 'S':return FILE_BESHORT;
            case 'c':
            case 'b':
            case 'C':
            case 'B':return FILE_BYTE;
            case 'e':
            case 'f':
            case 'g':return FILE_LEDOUBLE;
            case 'E':
            case 'F':
            case 'G':return FILE_BEDOUBLE;
            case 'i':return FILE_LEID3;
            case 'I':return FILE_BEID3;
            case 'q':return FILE_LEQUAD;
            case 'Q':return FILE_BEQUAD;
            default:
                throw std::runtime_error(
                        std::string("Invalid offset deref type: ").append(std::string() + c));
        }
    }

    std::shared_ptr< val_sign_typ_t > sign_type(char const sign, char const c) {
        return std::make_shared< val_sign_typ_t >(
                abbrev_sign_typ(c),
                offset_indirect_unsigned(sign)
        );
    }

}
