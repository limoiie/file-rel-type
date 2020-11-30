//
// Created by ligen on 11/15/2020.
//

#include "var.h"

magic::ast::var magic::ast::var::builder::make(uint8_t val, magic::ast::var v) {
    v.b = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(uint16_t val, magic::ast::var v) {
    v.h = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(uint32_t val, magic::ast::var v) {
    v.l = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(uint64_t val, magic::ast::var v) {
    v.q = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(float val, magic::ast::var v) {
    v.f = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(double val, magic::ast::var v) {
    v.d = val;
    return v;
}

magic::ast::var magic::ast::var::builder::make(std::string_view val, magic::ast::var v) {
    if (val.size() > MAX_STRING_LEN - 1) {
        val = val.substr(0, MAX_STRING_LEN - 1);
    }
    std::copy(val.cbegin(), val.cend(), v.s);
    v.s[val.size()] = '\0';
    return v;
}

magic::ast::var magic::ast::var::builder::make() {
    return make((uint64_t) 0);
}

std::shared_ptr< magic::ast::var > magic::ast::var::builder::make_ptr() {
    return make_ptr((uint64_t) 0);
}
