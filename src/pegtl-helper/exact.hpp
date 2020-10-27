//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_EXACT_HPP
#define FILE_REL_TYPE_EXACT_HPP

#include <tao/pegtl.hpp>

namespace TAO_PEGTL_NAMESPACE::contrib
{

    template<class... Rule>
    struct exact
            : must< Rule..., tao::pegtl::eof > {
    };

}


#endif //FILE_REL_TYPE_EXACT_HPP
