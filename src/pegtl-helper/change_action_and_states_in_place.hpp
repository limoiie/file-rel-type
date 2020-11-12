//
// Created by ligen on 11/11/2020.
//

#ifndef FILE_REL_TYPE_SRC_PEGTL_HELPER_CHANGE_ACTION_AND_STATES_IN_PLACE_HPP
#define FILE_REL_TYPE_SRC_PEGTL_HELPER_CHANGE_ACTION_AND_STATES_IN_PLACE_HPP

#include <tuple>
#include <utility>

#include <tao/pegtl.hpp>

namespace TAO_PEGTL_NAMESPACE
{
    namespace internal
    {
        template< typename Rule,
                apply_mode A,
                template< typename... >
                class Action,
                template< typename... >
                class Control
        >
        struct inspect {
            /**
             * Deduct the dusel_mode from the given type params
             * @return
             */
            template<
                    typename ParseInput,
                    typename... States
            >
            constexpr static dusel_mode inspect_mode() {
                constexpr bool enable_control = Control< Rule >::enable;
                constexpr bool enable_action = enable_control && (A == apply_mode::action);

                using iterator_t = typename ParseInput::iterator_t;
                constexpr bool has_apply_void = enable_action && internal::has_apply<
                        Control< Rule >, void, Action, const iterator_t &, const ParseInput &, States... >;
                constexpr bool has_apply_bool = enable_action && internal::has_apply<
                        Control< Rule >, bool, Action, const iterator_t &, const ParseInput &, States... >;
                constexpr bool has_apply = has_apply_void || has_apply_bool;

                constexpr bool has_apply0_void = enable_action && internal::has_apply0<
                        Control< Rule >, void, Action, const ParseInput &, States... >;
                constexpr bool has_apply0_bool = enable_action && internal::has_apply0<
                        Control< Rule >, bool, Action, const ParseInput &, States... >;
                constexpr bool has_apply0 = has_apply0_void || has_apply0_bool;

                static_assert(!(has_apply && has_apply0), "both apply() and apply0() defined");

                constexpr bool is_nothing = std::is_base_of_v< nothing< Rule >, Action< Rule > >;
                static_assert(!(has_apply && is_nothing), "unexpected apply() defined");
                static_assert(!(has_apply0 && is_nothing), "unexpected apply0() defined");

                if constexpr(!has_apply && std::is_base_of_v< require_apply, Action< Rule > >) {
                    //internal::missing_apply< Control< Rule >, Action >(in, st...);
                }

                if constexpr(!has_apply0 && std::is_base_of_v< require_apply0, Action< Rule > >) {
                    //internal::missing_apply0< Control< Rule >, Action >(in, st...);
                }

                constexpr bool validate_nothing = std::is_base_of_v< maybe_nothing, Action< void > >;
                constexpr bool is_maybe_nothing = std::is_base_of_v< maybe_nothing, Action< Rule > >;
                static_assert(
                        !enable_action || !validate_nothing || is_nothing || is_maybe_nothing || has_apply
                                || has_apply0,
                        "either apply() or apply0() must be defined");

                [[maybe_unused]] auto constexpr __x = is_nothing || validate_nothing || is_maybe_nothing;

                constexpr auto mode =
                        static_cast< internal::dusel_mode >( enable_control + has_apply_void + 2 * has_apply_bool
                                + 3 * has_apply0_void + 4 * has_apply0_bool );
                return mode;
            }
        };

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control,
                dusel_mode >
        struct apply_action {
            template< typename Iterator, typename ParseInput, typename... States >
            static bool apply(Iterator const &, ParseInput &, States &&...) {
                return true;  // do-nothing
            }
        };

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control >
        struct apply_action< Rule, A, M, Action, Control, dusel_mode::control_and_apply_void > {
            template< typename Iterator, typename ParseInput, typename... States >
            static bool apply(Iterator const &begin, ParseInput &in, States &&... st) {
                const typename ParseInput::action_t action_input(begin, in);
                Control< Rule >::template apply< Action >(action_input, st...);
                return true;
            }
        };

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control >
        struct apply_action< Rule, A, M, Action, Control, dusel_mode::control_and_apply_bool > {
            template< typename Iterator, typename ParseInput, typename... States >
            static bool apply(Iterator const &begin, ParseInput &in, States &&... st) {
                const typename ParseInput::action_t action_input(begin, in);
                return Control< Rule >::template apply< Action >(action_input, st...);
            }
        };

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control >
        struct apply_action< Rule, A, M, Action, Control, dusel_mode::control_and_apply0_void > {
            template< typename Iterator, typename ParseInput, typename... States >
            static bool apply(Iterator const & /*unused*/, ParseInput &in, States &&... st) {
                Control< Rule >::template apply0< Action >(static_cast< const ParseInput & >( in ), st...);
                return true;
            }
        };

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control >
        struct apply_action< Rule, A, M, Action, Control, dusel_mode::control_and_apply0_bool > {
            template< typename Iterator, typename ParseInput, typename... States >
            static bool apply(Iterator const & /*unused*/, ParseInput &in, States &&... st) {
                return Control< Rule >::template apply0< Action >(static_cast< const ParseInput & >( in ), st...);
            }
        };

    }

    /**
     * This action allows change_action_and_states and normal action can merge together
     */
    template< template< typename... > class NewAction, typename... NewStates >
    struct change_action_and_states_in_place
            : maybe_nothing {
        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control,
                std::size_t... Ns,
                typename ParseInput,
                typename... States >
        [[nodiscard]] static bool match(std::index_sequence< Ns... > /*unused*/, ParseInput &in,
                                        NewStates &&... new_st, States &&... old_st) {
            auto m = in.template mark< rewind_mode::required >();
            if (Control< Rule >::template match< A, M, NewAction, Control >(in, new_st...)) {
                if constexpr(A == apply_mode::action) {
                    Action< Rule >::success(static_cast< const ParseInput & >( in ), new_st..., old_st...);

                    constexpr auto mode =
                            internal::inspect< Rule, A, Action, Control >::template inspect_mode<
                                    ParseInput, States... >();
                    auto const result =
                            internal::apply_action< Rule, A, M, Action, Control, mode >::apply(
                                    m.iterator(), in, old_st...);

                    (void)m(result);
                }
                return true;
            }
            return false;
        }

        template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control,
                typename ParseInput,
                typename... States >
        [[nodiscard]] static bool match(ParseInput &in, States &&... st) {
            static_assert(!std::is_same_v< Action< void >, NewAction< void > >,
                          "old and new action class templates are identical");
            return match< Rule, A, M, Action, Control >(std::index_sequence_for< NewStates... >(),
                                                        in,
                                                        NewStates()...,
                                                        st...);
        }
    };
}

#endif //FILE_REL_TYPE_SRC_PEGTL_HELPER_CHANGE_ACTION_AND_STATES_IN_PLACE_HPP
