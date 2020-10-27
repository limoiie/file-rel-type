//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_TYPE_H
#define FILE_REL_TYPE_MAGIC_TYPE_H

#include <string>
#include <list>
#include <tuple>

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
    FILE_FMT_NONE,
    FILE_FMT_STR,
    FILE_FMT_NUM,
    FILE_FMT_QUAD,
    FILE_FMT_FLOAT,
    FILE_FMT_DOUBLE,
};

inline
auto map_type() -> std::list<std::tuple<std::string, ref_type_t, ref_type_format_t>> const& {
    static auto m = std::list<std::tuple<std::string, ref_type_t, ref_type_format_t>>{
            {"invalid",    FILE_INVALID,    FILE_FMT_NONE},
            {"byte",       FILE_BYTE,       FILE_FMT_NUM},
            {"short",      FILE_SHORT,      FILE_FMT_NUM},
            {"default",    FILE_DEFAULT,    FILE_FMT_NONE},
            {"long",       FILE_LONG,       FILE_FMT_NUM},
            {"string",     FILE_STRING,     FILE_FMT_STR},
            {"date",       FILE_DATE,       FILE_FMT_STR},
            {"beshort",    FILE_BESHORT,    FILE_FMT_NUM},
            {"belong",     FILE_BELONG,     FILE_FMT_NUM},
            {"bedate",     FILE_BEDATE,     FILE_FMT_STR},
            {"leshort",    FILE_LESHORT,    FILE_FMT_NUM},
            {"lelong",     FILE_LELONG,     FILE_FMT_NUM},
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
            {"melong",     FILE_MELONG,     FILE_FMT_NUM},
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
            {"leid3",      FILE_LEID3,      FILE_FMT_NUM},
            {"beid3",      FILE_BEID3,      FILE_FMT_NUM},
            {"indirect",   FILE_INDIRECT,   FILE_FMT_NUM},
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

inline
auto map_name_type() -> std::map<std::string, ref_type_t> const& {
    auto const& meta_data = map_type();
    static auto name_type_mapping = std::map<std::string, ref_type_t>();
    if (name_type_mapping.empty()) {
        for (auto const& name_typ_fmt : meta_data) {
            name_type_mapping[std::get<0>(name_typ_fmt)] = std::get<1>(name_typ_fmt);
        }
    }
    return name_type_mapping;
}

inline
auto parse_type(std::string const& name) {
    auto const& mapping = map_name_type();
    if (mapping.count(name)) {
        return mapping.at(name);
    }
    return ref_type_t::FILE_INVALID;
}

inline
bool is_string(ref_type_t const typ) {
    return typ == FILE_STRING      ||
           typ == FILE_PSTRING     ||
           typ == FILE_BESTRING16  ||
           typ == FILE_LESTRING16  ||
           typ == FILE_REGEX       ||
           typ == FILE_SEARCH      ||
           typ == FILE_INDIRECT    ||
           typ == FILE_NAME        ||
           typ == FILE_USE;
}

#endif //FILE_REL_TYPE_MAGIC_TYPE_H
