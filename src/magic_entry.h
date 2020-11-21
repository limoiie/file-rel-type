//
// Created by ligen on 10/24/2020.
//

#ifndef FILE_REL_TYPE_MAGICENTRY_H
#define FILE_REL_TYPE_MAGICENTRY_H

#include <memory>

#include "magic_ast/exp.h"

struct magic_entry {
    magic_entry(std::shared_ptr< magic::ast::exp > exp,
                size_t level,
                std::string description = "",
                unsigned type_code = 0);

    std::string to_string() const {
        return std::string(level, '>') + (exp == nullptr ? "nullptr" : exp->to_string());
    }

    std::shared_ptr< magic::ast::exp > exp;
    size_t level;
    std::string description;
    unsigned type_code;

};

#endif //FILE_REL_TYPE_MAGICENTRY_H
