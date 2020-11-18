//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_

#include <memory>
#include <stack>
#include <utility>

#include "var.h"

#include "../magic_type.h"

namespace magic::ast
{
    struct val {
        val_sign_typ_t typ;
        var data;

        explicit val(val_sign_typ_t typ, var const &data)
                : typ(typ), data(data) {
        }

        bool operator==(const val &rhs) const {
            if (typ != rhs.typ) return false;
            switch (fmt_of_typ(typ.typ)) {
                case FILE_FMT_STR: return std::string_view(data.s) == std::string_view(rhs.data.s);
                case FILE_FMT_INT:
                case FILE_FMT_QUAD:
                    switch (size_of_typ(typ.typ)) {
                        case 1: return data.b == rhs.data.b;
                        case 2: return data.s == rhs.data.s;
                        case 4: return data.l == rhs.data.l;
                        case 8: return data.q == rhs.data.q;
                        default:return false;
                    }
                case FILE_FMT_FLOAT: return data.f == rhs.data.f;
                case FILE_FMT_DOUBLE: return data.d == rhs.data.d;
                default: return false;
            }
        }

        bool operator!=(const val &rhs) const {
            return !(rhs == *this);
        }

        std::string to_string() const {
            switch (fmt_of_typ(typ.typ)) {
                case FILE_FMT_STR: return std::string(data.s);
                case FILE_FMT_INT:
                case FILE_FMT_QUAD:
                    switch (size_of_typ(typ.typ)) {
                        case 1: return typ.is_unsigned ? std::to_string(data.b) : std::to_string((int8_t) data.b);
                        case 2: return typ.is_unsigned ? std::to_string(data.h) : std::to_string((int16_t) data.h);
                        case 4: return typ.is_unsigned ? std::to_string(data.l) : std::to_string((int32_t) data.l);
                        case 8: return typ.is_unsigned ? std::to_string(data.q) : std::to_string((int64_t) data.q);
                        default: return std::to_string(0);
                    }
                case FILE_FMT_FLOAT: return std::to_string(data.f);
                case FILE_FMT_DOUBLE: return std::to_string(data.d);
                default: return std::to_string(0);
            }
        }
    };
}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAL_H_
