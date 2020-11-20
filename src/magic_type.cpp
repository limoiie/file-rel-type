//
// Created by ligen on 11/5/2020.
//

#include "magic_type.h"

auto map_type() -> std::list< std::tuple< std::string, val_typ_t, val_fmt_t>> const & {
    static auto m = std::list< std::tuple< std::string, val_typ_t, val_fmt_t>>{
            {"invalid",    FILE_INVALID,    FILE_FMT_NONE},
            {"default",    FILE_DEFAULT,    FILE_FMT_NONE},

            {"byte",       FILE_BYTE,       FILE_FMT_INT},
            {"short",      FILE_SHORT,      FILE_FMT_INT},
            {"long",       FILE_LONG,       FILE_FMT_INT},
            {"beshort",    FILE_BESHORT,    FILE_FMT_INT},
            {"belong",     FILE_BELONG,     FILE_FMT_INT},
            {"leshort",    FILE_LESHORT,    FILE_FMT_INT},
            {"lelong",     FILE_LELONG,     FILE_FMT_INT},
            {"melong",     FILE_MELONG,     FILE_FMT_INT},
            {"quad",       FILE_QUAD,       FILE_FMT_QUAD},
            {"lequad",     FILE_LEQUAD,     FILE_FMT_QUAD},
            {"bequad",     FILE_BEQUAD,     FILE_FMT_QUAD},
            {"float",      FILE_FLOAT,      FILE_FMT_FLOAT},
            {"befloat",    FILE_BEFLOAT,    FILE_FMT_FLOAT},
            {"lefloat",    FILE_LEFLOAT,    FILE_FMT_FLOAT},
            {"double",     FILE_DOUBLE,     FILE_FMT_DOUBLE},
            {"bedouble",   FILE_BEDOUBLE,   FILE_FMT_DOUBLE},
            {"ledouble",   FILE_LEDOUBLE,   FILE_FMT_DOUBLE},
            {"leid3",      FILE_LEID3,      FILE_FMT_INT},
            {"beid3",      FILE_BEID3,      FILE_FMT_INT},
            {"indirect",   FILE_INDIRECT,   FILE_FMT_INT},

            {"date",       FILE_DATE,       FILE_FMT_INT},
            {"bedate",     FILE_BEDATE,     FILE_FMT_INT},
            {"ledate",     FILE_LEDATE,     FILE_FMT_INT},
            {"medate",     FILE_MEDATE,     FILE_FMT_INT},
            {"meldate",    FILE_MELDATE,    FILE_FMT_INT},
            {"qdate",      FILE_QDATE,      FILE_FMT_INT},
            {"leqdate",    FILE_LEQDATE,    FILE_FMT_INT},
            {"beqdate",    FILE_BEQDATE,    FILE_FMT_INT},
            {"qldate",     FILE_QLDATE,     FILE_FMT_INT},
            {"leqldate",   FILE_LEQLDATE,   FILE_FMT_INT},
            {"beqldate",   FILE_BEQLDATE,   FILE_FMT_INT},
            {"qwdate",     FILE_QWDATE,     FILE_FMT_INT},
            {"leqwdate",   FILE_LEQWDATE,   FILE_FMT_INT},
            {"beqwdate",   FILE_BEQWDATE,   FILE_FMT_INT},
            {"ldate",      FILE_LDATE,      FILE_FMT_INT},
            {"beldate",    FILE_BELDATE,    FILE_FMT_INT},
            {"leldate",    FILE_LELDATE,    FILE_FMT_INT},

            {"string",     FILE_STRING,     FILE_FMT_STR},
            {"pstring",    FILE_PSTRING,    FILE_FMT_STR},
            {"regex",      FILE_REGEX,      FILE_FMT_STR},
            {"bestring16", FILE_BESTRING16, FILE_FMT_STR},
            {"lestring16", FILE_LESTRING16, FILE_FMT_STR},
            {"search",     FILE_SEARCH,     FILE_FMT_STR},

            {"name",       FILE_NAME,       FILE_FMT_NONE},
            {"use",        FILE_USE,        FILE_FMT_NONE},
            {"clear",      FILE_CLEAR,      FILE_FMT_NONE},
            {"der",        FILE_DER,        FILE_FMT_STR},
    };
    return m;
}

auto map_name_type() -> const std::map< std::string, val_typ_t > & {
    static auto mapping = std::map< std::string, val_typ_t >();
    if (mapping.empty()) {
        for (auto const &name_type_format : map_type()) {
            mapping[std::get< 0 >(name_type_format)] = std::get< 1 >(name_type_format);
        }
    }
    return mapping;
}

auto map_type_name() -> const std::map< val_typ_t, std::string > & {
    static auto mapping = std::map< val_typ_t, std::string >();
    if (mapping.empty()) {
        for (auto const &name_type_format : map_type()) {
            mapping[std::get< 1 >(name_type_format)] = std::get< 0 >(name_type_format);
        }
    }
    return mapping;
}

auto map_type_fmt() -> const std::map< val_typ_t, val_fmt_t > & {
    auto const &meta_data = map_type();
    static auto type_fmt_mapping = std::map< val_typ_t, val_fmt_t >();
    if (type_fmt_mapping.empty()) {
        for (auto const &name_typ_fmt : meta_data) {
            type_fmt_mapping[std::get< 1 >(name_typ_fmt)] = std::get< 2 >(name_typ_fmt);
        }
    }
    return type_fmt_mapping;
}

val_typ_t parse_typ(const std::string &name) {
    auto const &mapping = map_name_type();
    if (mapping.count(name)) {
        return mapping.at(name);
    }
    return val_typ_t::FILE_INVALID;
}

val_fmt_t fmt_of_typ(val_typ_t typ) {
    auto const &mapping = map_type_fmt();
    if (mapping.count(typ)) {
        return mapping.at(typ);
    }
    return val_fmt_t::FILE_FMT_NONE;
}

size_t size_of_typ(val_typ_t typ) {
    switch (typ) {
        case FILE_BYTE: return (size_t) 1;

        case FILE_SHORT:
        case FILE_LESHORT:
        case FILE_BESHORT: return (size_t) 2;

        case FILE_LONG:
        case FILE_LELONG:
        case FILE_BELONG:
        case FILE_MELONG:

        case FILE_DATE:
        case FILE_LEDATE:
        case FILE_BEDATE:
        case FILE_MEDATE:
        case FILE_LDATE:
        case FILE_LELDATE:
        case FILE_BELDATE:
        case FILE_MELDATE:
        case FILE_FLOAT:
        case FILE_BEFLOAT:
        case FILE_LEFLOAT: return (size_t) 4;

        case FILE_QUAD:
        case FILE_BEQUAD:
        case FILE_LEQUAD:
        case FILE_QDATE:
        case FILE_LEQDATE:
        case FILE_BEQDATE:
        case FILE_QLDATE:
        case FILE_LEQLDATE:
        case FILE_BEQLDATE:
        case FILE_QWDATE:
        case FILE_LEQWDATE:
        case FILE_BEQWDATE:
        case FILE_DOUBLE:
        case FILE_BEDOUBLE:
        case FILE_LEDOUBLE: return (size_t) 8;

        default: return (size_t) ~(size_t) 0;
    }
}

std::string name_of_typ(val_typ_t const typ) {
    return map_type_name().at(typ);
}

bool is_number_typ(val_typ_t const typ) {
    auto const format = fmt_of_typ(typ);
    return is_number_fmt(format);
}

bool is_number_fmt(val_fmt_t const fmt) {
    return fmt == FILE_FMT_INT ||
           fmt == FILE_FMT_QUAD ||
           fmt == FILE_FMT_FLOAT ||
           fmt == FILE_FMT_DOUBLE;
}

bool is_integer_typ(val_typ_t const typ) {
    return is_integer_fmt(fmt_of_typ(typ));
}

bool is_integer_fmt(val_fmt_t const fmt) {
    return fmt == FILE_FMT_INT ||
           fmt == FILE_FMT_QUAD;
}

bool is_string_typ(val_typ_t const typ) {
    auto const format = fmt_of_typ(typ);
    return is_string_fmt(format);
}

bool is_string_fmt(val_fmt_t const fmt) {
    return fmt == FILE_FMT_STR;
}
