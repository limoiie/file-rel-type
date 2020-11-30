//
// Created by ligen on 11/30/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_PEG_OP_TYP_ACTION_H_
#define FILE_REL_TYPE_SRC_MAGIC_PEG_OP_TYP_ACTION_H_

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/alphabet.hpp>
#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include "utils/tao/pegtl/ascii.hpp"
#include "utils/tao/pegtl/integer.hpp"
#include "utils/tao/pegtl/exact.hpp"
#include "utils/tao/pegtl/change_action_and_states_in_place.hpp"
#include "val_sign_typ.h"
#include "val_typ_name.h"
#include "magic_peg_op_typ.h"

namespace np_type
{
    namespace action
    {
        struct state_to_deref_typ {
            val_sign_typ_t typ = val_sign_typ_t::default_();
        };

        namespace abbrev
        {
            using np_type::action::state_to_deref_typ;

            namespace internal
            {
                bool offset_indirect_unsigned(char const c);

                val_typ_t abbrev_sign_typ(char const c);

                std::shared_ptr< val_sign_typ_t > sign_type(char const sign, char const c);
            }

            template< class Rule >
            struct action_to_deref_typ
                    : maybe_nothing {
            };

            template<>
            struct action_to_deref_typ< np_type::abbrev::sign > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.is_unsigned =
                            internal::offset_indirect_unsigned(in.peek_char());
                }
            };

            template<>
            struct action_to_deref_typ< np_type::abbrev::typ > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.typ =
                            internal::abbrev_sign_typ(in.peek_char());
                }
            };

            using to_typ_switcher = change_action_and_states<
                    abbrev::template action_to_deref_typ,
                    abbrev::state_to_deref_typ
            >;
        }

        namespace formal
        {
            using np_type::action::state_to_deref_typ;
            struct action_to_typ {
                template< class ActionInput >
                static void apply(ActionInput &in, state_to_deref_typ &st) {
                    st.typ = parse_sign_typ(in.string());
                }
            };

            template< class Rule >
            struct [[maybe_unused]] action_to_deref_typ
                    : maybe_nothing {
            };

            template< unsigned Fmt >
            struct [[maybe_unused]] action_to_deref_typ< np_type::formal::formal_typ_< Fmt > >
                    : action_to_typ {
            };

            template<>
            struct [[maybe_unused]] action_to_deref_typ< np_type::abbrev::sign > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.is_unsigned =
                            abbrev::internal::offset_indirect_unsigned(in.peek_char());
                }

            };

            template<>
            struct [[maybe_unused]] action_to_deref_typ< np_type::abbrev::typ > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.typ =
                            abbrev::internal::abbrev_sign_typ(in.peek_char());
                }

            };

            using to_typ_switcher = change_action_and_states_in_place<
                    formal::template action_to_deref_typ,
                    formal::state_to_deref_typ
            >;
        }
    }
}

#endif //FILE_REL_TYPE_SRC_MAGIC_PEG_OP_TYP_ACTION_H_
