//
// Created by ligen on 11/25/2020.
//

#ifndef FILE_REL_TYPE_SRC_VAL_TYP_FORMAT_H_
#define FILE_REL_TYPE_SRC_VAL_TYP_FORMAT_H_

#include "val_typ.h"

enum val_format_t {
    FILE_FMT_NONE = BIT(0),
    FILE_FMT_STR = BIT(1),
    FILE_FMT_INT = BIT(2),
    FILE_FMT_QUAD = BIT(3),
    FILE_FMT_FLOAT = BIT(4),
    FILE_FMT_DOUBLE = BIT(5)
};

bool is_number_fmt(val_format_t fmt);

bool is_integer_fmt(val_format_t fmt);

bool is_string_fmt(val_format_t fmt);

val_format_t format_of(val_typ_t typ);

#endif //FILE_REL_TYPE_SRC_VAL_TYP_FORMAT_H_
