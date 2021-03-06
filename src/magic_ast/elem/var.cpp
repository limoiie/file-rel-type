//
// Created by ligen on 11/15/2020.
//

#include "var.h"

#include "../../utils/log.h"

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
    v.set(val);
    return v;
}

magic::ast::var magic::ast::var::builder::make() {
    return make((uint64_t) 0);
}

std::shared_ptr< magic::ast::var > magic::ast::var::builder::make_ptr() {
    return make_ptr((uint64_t) 0);
}

void magic::ast::var::set(std::string_view val) {
    if (val.size() > MAX_STRING_LEN) {
        logs::debug("Warning: set to var a string whose size exceeds MAX_STRING_LEN", val.size());
        val = val.substr(0, MAX_STRING_LEN);
    }
    std::copy(val.cbegin(), val.cend(), s.s);
    s.len = val.size();
    s.s[s.len] = '\0';
}
