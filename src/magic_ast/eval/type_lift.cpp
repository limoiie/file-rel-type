//
// Created by ligen on 11/20/2020.
//

#include "type_lift.h"
#include "type_cast.h"

void type_lift(std::size_t &l_size, bool &l_is_unsigned, var &l_var,
               std::size_t &r_size, bool &r_is_unsigned, var &r_var) {
    if (0 < l_size && l_size <= 16 && 0 < r_size && r_size <= 16 ) {
        auto const size = std::max(l_size, r_size);
        auto const is_unsigned = l_is_unsigned | r_is_unsigned;
        cast_int(l_var, l_size, size, l_is_unsigned, is_unsigned);
        cast_int(r_var, r_size, size, r_is_unsigned, is_unsigned);
    } else {
        throw std::domain_error("type_lift(var): Not support cast between non-integer type yet!");
    }
}
