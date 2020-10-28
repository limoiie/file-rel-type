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

    struct offset_state {
        int num;
    };

    template< class Rule >
    struct build_action
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct build_action< signed_integer > {
    };

    template<>
    struct build_action< number > {
        template< class ActionInput >
        static void apply(ActionInput const& in, offset_state& st) {
            std::cout << "number is: " << in.string() << std::endl;
        }
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
