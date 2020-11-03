//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
#define FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP

#include <tao/pegtl.hpp>

#include <pegtl-helper/integer.hpp>

#include "magic_peg.h"

namespace peg::magic::action
{
    using namespace tao::pegtl::helper::integer;
    using namespace tao::pegtl::helper::integer::action;

    struct offset_state {
        long long int base_offset;
    };

    template< class Rule >
    struct action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect_absolute_num >
            : to_integer_switcher< long long int > {
        using int_t = long long int;

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_integer< int_t > &s, offset_state &state) {
            state.base_offset = s.val;
        }

    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
