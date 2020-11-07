//
// Created by ligen on 11/6/2020.
//

#ifndef FILE_REL_TYPE_SWITCHER_HPP
#define FILE_REL_TYPE_SWITCHER_HPP

#include <type_traits>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

namespace TAO_PEGTL_NAMESPACE
{
    using namespace tao::pegtl;

    namespace internal
    {
        template< class ... >
        struct switcher;

        template< class Cond, class Then, class ...CondThens >
        struct switcher< Cond, Then, CondThens... >
                : if_then_else< Cond, Then, switcher< CondThens...>> {
        };

        template<>
        struct switcher<>
                : failure {
        };

    }

    template< class ...CondThens >
    struct switcher
            : internal::switcher< CondThens... > {
    };

}

#endif //FILE_REL_TYPE_SWITCHER_HPP
