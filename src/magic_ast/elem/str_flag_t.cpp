//
// Created by ligen on 11/26/2020.
//

#include "str_flag_t.h"

std::map< char, str_flag_t > const &map_flag() {
    static auto const m = std::map< char, str_flag_t >{
            { 'r', str_flag_t::INDIRECT_RELATIVE},
            { 'W', str_flag_t::STRING_COMPACT_WHITESPACE},
            { 'w', str_flag_t::STRING_COMPACT_OPTIONAL_WHITESPACE},
            { 'c', str_flag_t::STRING_IGNORE_LOWERCASE},
            { 'C', str_flag_t::STRING_IGNORE_UPPERCASE},
            { 's', str_flag_t::REGEX_OFFSET_START},
            { 't', str_flag_t::STRING_TEXT_TEST},
            { 'b', str_flag_t::STRING_BIN_TEST},
            { 'B', str_flag_t::PSTRING_1_BE},
            { 'B', str_flag_t::PSTRING_1_LE},
            { 'H', str_flag_t::PSTRING_2_BE},
            { 'h', str_flag_t::PSTRING_2_LE},
            { 'L', str_flag_t::PSTRING_4_BE},
            { 'l', str_flag_t::PSTRING_4_LE},
            { 'J', str_flag_t::PSTRING_LENGTH_INCLUDES_ITSELF},
            { 'T', str_flag_t::STRING_TRIM},
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
