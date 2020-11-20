//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_TYPE_H
#define FILE_REL_TYPE_MAGIC_TYPE_H

#include <string>
#include <list>
#include <tuple>
#include <map>
#include <memory>

#include "val_typ.h"
#include "type_endian.h"

inline
auto map_type() -> std::list< std::tuple< std::string, val_typ_t, val_fmt_t>> const &;

inline
auto map_name_type() -> std::map< std::string, val_typ_t > const &;

inline
auto map_type_fmt() -> std::map< val_typ_t, val_fmt_t > const &;

bool is_number_typ(val_typ_t typ);

bool is_number_fmt(val_fmt_t fmt);

bool is_integer_typ(val_typ_t typ);

bool is_integer_fmt(val_fmt_t fmt);

bool is_string_typ(val_typ_t typ);

bool is_string_fmt(val_fmt_t fmt);

val_typ_t parse_typ(std::string const &name);

val_fmt_t fmt_of_typ(val_typ_t typ);

size_t size_of_typ(val_typ_t typ);

std::string name_of_typ(val_typ_t typ);

val_typ_t erase_endian(val_typ_t typ);

#endif //FILE_REL_TYPE_MAGIC_TYPE_H
