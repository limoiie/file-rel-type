//
// Created by ligen on 10/24/2020.
//

#include "magic_entry.h"

#include <utility>

magic_entry::magic_entry(std::shared_ptr< magic::ast::exp > exp,
                         size_t level,
                         std::string description,
                         unsigned type_code)
        : exp(std::move(exp))
        , level(level)
        , description(std::move(description))
        , type_code(type_code) {
}

std::string magic_entry::to_string() const {
    return std::string(level, '>') + (exp == nullptr ? "nullptr" : exp->to_string());
}
