//
// Created by ligen on 12/5/2020.
//

#ifndef FILE_REL_TYPE_SRC_UTILS_TAO_PEGTL_rep_min_max_or_more_OR_MORE_HPP_
#define FILE_REL_TYPE_SRC_UTILS_TAO_PEGTL_rep_min_max_or_more_OR_MORE_HPP_

#include <type_traits>

#include <tao/pegtl/internal/enable_control.hpp>
#include <tao/pegtl/internal/failure.hpp>
#include <tao/pegtl/internal/not_at.hpp>
#include <tao/pegtl/internal/seq.hpp>

#include <tao/pegtl/apply_mode.hpp>
#include <tao/pegtl/rewind_mode.hpp>
#include <tao/pegtl/type_list.hpp>

namespace TAO_PEGTL_NAMESPACE::contrib
{
    namespace internal
    {
        template< unsigned Min, unsigned Max, typename... Rules >
        struct rep_min_max_or_more
                : rep_min_max_or_more< Min, Max, seq< Rules... > > {
            static_assert(Min <= Max);
        };

        template< unsigned Min, unsigned Max >
        struct rep_min_max_or_more< Min, Max >
                : failure {
            static_assert(Min <= Max);
        };

        template< typename Rule >
        struct rep_min_max_or_more< 0, 0, Rule >
                : success {
        };

        template< unsigned Min, unsigned Max, typename Rule >
        struct rep_min_max_or_more< Min, Max, Rule > {
            using rule_t = rep_min_max_or_more;
            using subs_t = type_list< Rule >;

            static_assert(Min <= Max);

            template< apply_mode A,
                    rewind_mode M,
                    template< typename... >
                    class Action,
                    template< typename... >
                    class Control,
                    typename ParseInput,
                    typename... States >
            [[nodiscard]] static bool match(ParseInput &in, States &&... st) {
                auto m = in.template mark< M >();
                using m_t = decltype(m);

                for (unsigned i = 0; i != Min; ++i) {
                    if (!Control< Rule >::template match< A, m_t::next_rewind_mode, Action, Control >(in, st...)) {
                        return false;
                    }
                }
                for (unsigned i = Min; i != Max; ++i) {
                    if (!Control< Rule >::template match< A, rewind_mode::required, Action, Control >(in, st...)) {
                        return m(true);
                    }
                }
                return m(true);
            }
        };

    }  // namespace TAO_PEGTL_NAMESPACE::internal

    template < unsigned Min, unsigned Max, class... Rules >
    struct rep_min_max_or_more
            : internal::rep_min_max_or_more<Min, Max, Rules...> {
    };

}

#endif //FILE_REL_TYPE_SRC_UTILS_TAO_PEGTL_rep_min_max_or_more_OR_MORE_HPP_
