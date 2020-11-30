//
// Created by ligen on 11/26/2020.
//

#ifndef FILE_REL_TYPE_SRC_STR_FLAG_T_H_
#define FILE_REL_TYPE_SRC_STR_FLAG_T_H_

#include <map>

#include "val_typ.h"

#define PSTRING_LEN         (PSTRING_1_BE|PSTRING_2_LE|PSTRING_2_BE|PSTRING_4_LE|PSTRING_4_BE)
#define STRING_IGNORE_CASE  (STRING_IGNORE_LOWERCASE|STRING_IGNORE_UPPERCASE)

#define STRING_DEFAULT_RANGE        100

enum class str_flag_t : unsigned {
    INDIRECT_RELATIVE = BIT(0),
    STRING_COMPACT_WHITESPACE = BIT(0),
    STRING_COMPACT_OPTIONAL_WHITESPACE = BIT(1),
    STRING_IGNORE_LOWERCASE = BIT(2),
    STRING_IGNORE_UPPERCASE = BIT(3),
    REGEX_OFFSET_START = BIT(4),
    STRING_TEXT_TEST = BIT(5),
    STRING_BIN_TEST = BIT(6),
    PSTRING_1_BE = BIT(7),
    PSTRING_1_LE = BIT(7),
    PSTRING_2_BE = BIT(8),
    PSTRING_2_LE = BIT(9),
    PSTRING_4_BE = BIT(10),
    PSTRING_4_LE = BIT(11),
    REGEX_LINE_COUNT = BIT(11),
    PSTRING_LENGTH_INCLUDES_ITSELF = BIT(12),
    STRING_TRIM = BIT(13),
};


std::map< char, str_flag_t > const &map_flag();

str_flag_t convert_flag(char const flag);

unsigned convert_flags(std::string const &flag_string);

#endif //FILE_REL_TYPE_SRC_STR_FLAG_T_H_
