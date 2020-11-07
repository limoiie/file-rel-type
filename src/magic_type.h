//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_TYPE_H
#define FILE_REL_TYPE_MAGIC_TYPE_H

#include <string>
#include <list>
#include <tuple>
#include <map>

#define BIT(O) (1u << (O##u))

enum ref_type_t {
    FILE_INVALID,
    FILE_BYTE,
    FILE_SHORT,
    FILE_DEFAULT,
    FILE_LONG,
    FILE_STRING,
    FILE_DATE,
    FILE_BESHORT,
    FILE_BELONG,
    FILE_BEDATE,
    FILE_LESHORT,
    FILE_LELONG,
    FILE_LEDATE,
    FILE_PSTRING,
    FILE_LDATE,
    FILE_BELDATE,
    FILE_LELDATE,
    FILE_REGEX,
    FILE_BESTRING16,
    FILE_LESTRING16,
    FILE_SEARCH,
    FILE_MEDATE,
    FILE_MELDATE,
    FILE_MELONG,
    FILE_QUAD,
    FILE_LEQUAD,
    FILE_BEQUAD,
    FILE_QDATE,
    FILE_LEQDATE,
    FILE_BEQDATE,
    FILE_QLDATE,
    FILE_LEQLDATE,
    FILE_BEQLDATE,
    FILE_FLOAT,
    FILE_BEFLOAT,
    FILE_LEFLOAT,
    FILE_DOUBLE,
    FILE_BEDOUBLE,
    FILE_LEDOUBLE,
    FILE_BEID3,
    FILE_LEID3,
    FILE_INDIRECT,
    FILE_QWDATE,
    FILE_LEQWDATE,
    FILE_BEQWDATE,
    FILE_NAME,
    FILE_USE,
    FILE_CLEAR,
    FILE_DER
};

enum ref_type_format_t {
    FILE_FMT_NONE = BIT(0),
    FILE_FMT_STR = BIT(1),
    FILE_FMT_INT = BIT(2),
    FILE_FMT_QUAD = BIT(3),
    FILE_FMT_FLOAT = BIT(4),
    FILE_FMT_DOUBLE = BIT(5),
};

struct val_typ_t {
    ref_type_t typ;
    bool is_unsigned;

    val_typ_t(ref_type_t typ, bool is_unsigned);

    static val_typ_t default_();

    bool operator==(const val_typ_t &rhs) const;

    bool operator!=(const val_typ_t &rhs) const;

    [[nodiscard]] bool is_string() const;

    [[nodiscard]] bool is_number() const;

};

inline
auto map_type() -> std::list< std::tuple< std::string, ref_type_t, ref_type_format_t>> const &;

inline
auto map_name_type() -> std::map< std::string, ref_type_t > const &;

inline
auto map_type_fmt() -> std::map< ref_type_t, ref_type_format_t > const &;

bool is_number_typ(ref_type_t typ);

bool is_number_fmt(ref_type_format_t fmt);

bool is_string_typ(ref_type_t typ);

bool is_string_fmt(ref_type_format_t fmt);

ref_type_t parse_type(std::string const &name);

val_typ_t parse_sign_type(std::string const &name);

ref_type_format_t type_format(ref_type_t typ);

size_t typ_size(ref_type_t typ);

#endif //FILE_REL_TYPE_MAGIC_TYPE_H
