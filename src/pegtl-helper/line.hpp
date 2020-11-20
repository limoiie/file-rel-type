//
// Created by ligen on 11/21/2020.
//

#ifndef FILE_REL_TYPE_SRC_PEGTL_HELPER_LINE_HPP_
#define FILE_REL_TYPE_SRC_PEGTL_HELPER_LINE_HPP_

#include <tao/pegtl.hpp>

namespace TAO_PEGTL_NAMESPACE::contrib
{
    template< class ...Rules >
    struct line
            : must< Rules..., tao::pegtl::eolf > {
        using rule_t = line;
        using subs_t = empty_list;

    };

}

#endif //FILE_REL_TYPE_SRC_PEGTL_HELPER_LINE_HPP_
