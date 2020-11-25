//
// Created by ligen on 11/25/2020.
//

#ifndef FILE_REL_TYPE_SRC_VAL_TYP_NAME_H_
#define FILE_REL_TYPE_SRC_VAL_TYP_NAME_H_

#include <map>

#include "val_typ.h"
#include "val_typ_endian.h"
#include "val_typ_format.h"

std::list< std::tuple< std::string, val_typ_t, val_format_t>> const &map_type();

std::map< val_typ_t, val_format_t > const &map_type_fmt();

std::map< std::string, val_typ_t > const &map_name_type();

val_typ_t parse_typ(std::string const &name);

std::string name_of_typ(val_typ_t typ);

#endif //FILE_REL_TYPE_SRC_VAL_TYP_NAME_H_
