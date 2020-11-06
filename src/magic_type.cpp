//
// Created by ligen on 11/5/2020.
//

#include "magic_type.h"

auto map_type() -> std::list< std::tuple< std::string, ref_type_t, ref_type_format_t>> const & {
    static auto m = std::list< std::tuple< std::string, ref_type_t, ref_type_format_t>>{
            {"invalid",    FILE_INVALID,    FILE_FMT_NONE},
            {"byte",       FILE_BYTE,       FILE_FMT_INT},
            {"short",      FILE_SHORT,      FILE_FMT_INT},
            {"default",    FILE_DEFAULT,    FILE_FMT_NONE},
            {"long",       FILE_LONG,       FILE_FMT_INT},
            {"string",     FILE_STRING,     FILE_FMT_STR},
            {"date",       FILE_DATE,       FILE_FMT_STR},
            {"beshort",    FILE_BESHORT,    FILE_FMT_INT},
            {"belong",     FILE_BELONG,     FILE_FMT_INT},
            {"bedate",     FILE_BEDATE,     FILE_FMT_STR},
            {"leshort",    FILE_LESHORT,    FILE_FMT_INT},
            {"lelong",     FILE_LELONG,     FILE_FMT_INT},
            {"ledate",     FILE_LEDATE,     FILE_FMT_STR},
            {"pstring",    FILE_PSTRING,    FILE_FMT_STR},
            {"ldate",      FILE_LDATE,      FILE_FMT_STR},
            {"beldate",    FILE_BELDATE,    FILE_FMT_STR},
            {"leldate",    FILE_LELDATE,    FILE_FMT_STR},
            {"regex",      FILE_REGEX,      FILE_FMT_STR},
            {"bestring16", FILE_BESTRING16, FILE_FMT_STR},
            {"lestring16", FILE_LESTRING16, FILE_FMT_STR},
            {"search",     FILE_SEARCH,     FILE_FMT_STR},
            {"medate",     FILE_MEDATE,     FILE_FMT_STR},
            {"meldate",    FILE_MELDATE,    FILE_FMT_STR},
            {"melong",     FILE_MELONG,     FILE_FMT_INT},
            {"quad",       FILE_QUAD,       FILE_FMT_QUAD},
            {"lequad",     FILE_LEQUAD,     FILE_FMT_QUAD},
            {"bequad",     FILE_BEQUAD,     FILE_FMT_QUAD},
            {"qdate",      FILE_QDATE,      FILE_FMT_STR},
            {"leqdate",    FILE_LEQDATE,    FILE_FMT_STR},
            {"beqdate",    FILE_BEQDATE,    FILE_FMT_STR},
            {"qldate",     FILE_QLDATE,     FILE_FMT_STR},
            {"leqldate",   FILE_LEQLDATE,   FILE_FMT_STR},
            {"beqldate",   FILE_BEQLDATE,   FILE_FMT_STR},
            {"float",      FILE_FLOAT,      FILE_FMT_FLOAT},
            {"befloat",    FILE_BEFLOAT,    FILE_FMT_FLOAT},
            {"lefloat",    FILE_LEFLOAT,    FILE_FMT_FLOAT},
            {"double",     FILE_DOUBLE,     FILE_FMT_DOUBLE},
            {"bedouble",   FILE_BEDOUBLE,   FILE_FMT_DOUBLE},
            {"ledouble",   FILE_LEDOUBLE,   FILE_FMT_DOUBLE},
            {"leid3",      FILE_LEID3,      FILE_FMT_INT},
            {"beid3",      FILE_BEID3,      FILE_FMT_INT},
            {"indirect",   FILE_INDIRECT,   FILE_FMT_INT},
            {"qwdate",     FILE_QWDATE,     FILE_FMT_STR},
            {"leqwdate",   FILE_LEQWDATE,   FILE_FMT_STR},
            {"beqwdate",   FILE_BEQWDATE,   FILE_FMT_STR},
            {"name",       FILE_NAME,       FILE_FMT_NONE},
            {"use",        FILE_USE,        FILE_FMT_NONE},
            {"clear",      FILE_CLEAR,      FILE_FMT_NONE},
            {"der",        FILE_DER,        FILE_FMT_STR},
            {"",           FILE_INVALID,    FILE_FMT_NONE},
    };
    return m;
}

auto map_name_type() -> const std::map< std::string, ref_type_t > & {
    auto const &meta_data = map_type();
    static auto name_type_mapping = std::map< std::string, ref_type_t >();
    if (name_type_mapping.empty()) {
        for (auto const &name_typ_fmt : meta_data) {
            name_type_mapping[std::get< 0 >(name_typ_fmt)] = std::get< 1 >(name_typ_fmt);
        }
    }
    return name_type_mapping;
}

auto map_type_fmt() -> const std::map< ref_type_t, ref_type_format_t > & {
    auto const &meta_data = map_type();
    static auto type_fmt_mapping = std::map< ref_type_t, ref_type_format_t >();
    if (type_fmt_mapping.empty()) {
        for (auto const &name_typ_fmt : meta_data) {
            type_fmt_mapping[std::get< 1 >(name_typ_fmt)] = std::get< 2 >(name_typ_fmt);
        }
    }
    return type_fmt_mapping;
}

ref_type_t parse_type(const std::string &name) {
    auto const &mapping = map_name_type();
    if (mapping.count(name)) {
        return mapping.at(name);
    }
    return ref_type_t::FILE_INVALID;
}

val_typ_t parse_sign_type(std::string const &name) {
    auto type_name = name;
    auto is_unsigned = false;
    if (tolower(name.front()) == 'u') {
        type_name = name.substr(1);
        is_unsigned = true;
    }
    return {
        parse_type(type_name), is_unsigned
    };
}

ref_type_format_t type_format(const ref_type_t typ) {
    auto const &mapping = map_type_fmt();
    if (mapping.count(typ)) {
        return mapping.at(typ);
    }
    return ref_type_format_t::FILE_FMT_NONE;
}

size_t typ_size(const ref_type_t typ) {
    switch (typ) {
        case FILE_BYTE:
            return (size_t) 1;

        case FILE_SHORT:
        case FILE_LESHORT:
        case FILE_BESHORT:
            return (size_t) 2;

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
        case FILE_LEFLOAT:
            return (size_t) 4;

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
        case FILE_LEDOUBLE:
            return (size_t) 8;

        default:
            return (size_t) ~0u;
    }
}

val_typ_t::val_typ_t(ref_type_t typ, bool is_unsigned)
        : typ(typ), is_unsigned(is_unsigned) {
}

val_typ_t val_typ_t::default_() {
    return {
            FILE_LONG, false
    };
}

bool val_typ_t::operator==(const val_typ_t &rhs) const {
    return typ == rhs.typ &&
           is_unsigned == rhs.is_unsigned;
}

bool val_typ_t::operator!=(const val_typ_t &rhs) const {
    return !(rhs == *this);
}

bool val_typ_t::is_string() const {
    return type_format(typ) == FILE_FMT_STR;
}

bool val_typ_t::is_number() const {
    auto const format = type_format(typ);
    return format == FILE_FMT_INT ||
           format == FILE_FMT_QUAD ||
           format == FILE_FMT_FLOAT ||
           format == FILE_FMT_DOUBLE;
}
