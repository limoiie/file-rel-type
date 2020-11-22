//
// Created by ligen on 11/22/2020.
//

#include "magic_peg_op_typ.h"

namespace np_type::np_indirect_type::action::internal
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

namespace np_flag
{
    std::map< char, str_flag_t > const &map_flag() {
        static auto const m = std::map< char, str_flag_t >{
                {r, str_flag_t::INDIRECT_RELATIVE},
                {W, str_flag_t::STRING_COMPACT_WHITESPACE},
                {w, str_flag_t::STRING_COMPACT_OPTIONAL_WHITESPACE},
                {c, str_flag_t::STRING_IGNORE_LOWERCASE},
                {C, str_flag_t::STRING_IGNORE_UPPERCASE},
                {s, str_flag_t::REGEX_OFFSET_START},
                {T, str_flag_t::STRING_TEXT_TEST},
                {b, str_flag_t::STRING_BIN_TEST},
                {B, str_flag_t::PSTRING_1_BE},
                {B, str_flag_t::PSTRING_1_LE},
                {H, str_flag_t::PSTRING_2_BE},
                {h, str_flag_t::PSTRING_2_LE},
                {L, str_flag_t::PSTRING_4_BE},
                {l, str_flag_t::PSTRING_4_LE},
                {J, str_flag_t::PSTRING_LENGTH_INCLUDES_ITSELF},
                {T, str_flag_t::STRING_TRIM},
        };
        return m;
    }

    str_flag_t convert_flag(char const flag) {
        return map_flag().at(flag);
    }

    unsigned convert_flags(std::string const &flag_string) {
        unsigned flags = 0;
        for (auto c : flag_string) {
            if (c == '/') continue;
            flags |= (unsigned) convert_flag(c);
        }
        return flags;
    }

}
