//
// Created by ligen on 11/20/2020.
//

#ifndef FILE_REL_TYPE_SRC_VAL_SIGN_TYP_H_
#define FILE_REL_TYPE_SRC_VAL_SIGN_TYP_H_

#include <string>
#include <list>
#include <tuple>
#include <map>
#include <memory>

#include "val_typ.h"

struct val_sign_typ_t {
    val_typ_t typ;
    bool is_unsigned;

    val_sign_typ_t(val_typ_t typ, bool is_unsigned);

    static val_sign_typ_t default_();

    static std::shared_ptr< val_sign_typ_t > default_ptr();

    bool operator==(const val_sign_typ_t &rhs) const;

    bool operator!=(const val_sign_typ_t &rhs) const;

    [[nodiscard]] bool is_string() const;

    [[nodiscard]] bool is_number() const;

    std::string to_string() const;

};

val_sign_typ_t parse_sign_typ(std::string const &name);

#endif //FILE_REL_TYPE_SRC_VAL_SIGN_TYP_H_
