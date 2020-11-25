//
// Created by ligen on 11/25/2020.
//

#include "val_typ_format.h"
#include "val_typ_name.h"

bool is_number_fmt(val_format_t const fmt) {
    return fmt == FILE_FMT_INT ||
           fmt == FILE_FMT_QUAD ||
           fmt == FILE_FMT_FLOAT ||
           fmt == FILE_FMT_DOUBLE;
}

bool is_integer_fmt(val_format_t const fmt) {
    return fmt == FILE_FMT_INT ||
           fmt == FILE_FMT_QUAD;
}

bool is_string_fmt(val_format_t const fmt) {
    return fmt == FILE_FMT_STR;
}

val_format_t format_of(val_typ_t const typ) {
    auto const &mapping = map_type_fmt();
    if (mapping.count(typ)) {
        return mapping.at(typ);
    }
    return FILE_FMT_NONE;
}
