//
// Created by ligen on 11/15/2020.
//

#include "val.h"
#include "val_typ_name.h"

#include "../eval/type_cast.hpp"
#include "../../utils/print_memory.h"

namespace magic::ast
{
    val::val(val_sign_typ_t typ, var const &data)
            : typ(typ), data(data) {
    }

    bool val::operator==(val const &rhs) const {
        if (typ != rhs.typ) return false;
        switch (format_of(typ.typ)) {
            case FILE_FMT_STR:
                return std::string_view(data.s.s, data.s.len) ==
                       std::string_view(rhs.data.s.s, rhs.data.s.len);
            case FILE_FMT_INT:
            case FILE_FMT_QUAD:
                switch (size_of_typ(typ.typ)) {
                    case 1: return data.b == rhs.data.b;
                    case 2: return data.h == rhs.data.h;
                    case 4: return data.l == rhs.data.l;
                    case 8: return data.q == rhs.data.q;
                    default:return false;
                }
            case FILE_FMT_FLOAT: return data.f == rhs.data.f;
            case FILE_FMT_DOUBLE: return data.d == rhs.data.d;
            default: return false;
        }
    }

    bool val::operator!=(val const &rhs) const {
        return !(rhs == *this);
    }

    std::string val::to_string() const {
        auto fn_val = [this]() {
            switch (format_of(typ.typ)) {
                case FILE_FMT_STR: return memory_to_human_friendly(data.s.string_view());
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
        };
        return fn_val() + "-" + typ.to_string() + "";
    }

    p_val_t make_bool(bool const true_or_false) {
        return std::make_shared< val >(
                val_sign_typ_t{FILE_QUAD, false},
                var::builder::make((uint64_t) true_or_false));
    }

    p_val_t val::builder::default_true_ptr() {
        return make_bool(true);
    }

    p_val_t val::builder::default_false_ptr() {
        return make_bool(false);
    }

    bool is_val_true(const p_val_t &v) {
        if (v == nullptr) return false;
        return dispatch_by< int_getter >(size_of_typ(v->typ.typ), v->typ.is_unsigned, v->data) != 0;
    }

}