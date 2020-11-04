//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
#define FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/alphabet.hpp>
#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include "magic_type.h"

#include "pegtl-helper/ascii.hpp"
#include "pegtl-helper/integer.hpp"
#include "pegtl-helper/exact.hpp"

namespace np_operator
{
    struct mask_aux_operator
            : one< '~' > {
    };
    struct mask_base_operator
            : one< '&', '|', '^', '+', '-', '*', '/', '%' > {
    };
    struct mask_operator
            : seq<
                    opt< mask_aux_operator >,
                    mask_base_operator
            > {
    };
    struct compare_operator
            : one< '&', '^', '=', '<', '>', '!' > {
    };
}

namespace np_type
{
    using namespace alphabet;

    namespace action
    {
        struct state_to_deref_typ {
            val_typ_t typ = val_typ_t::default_();
        };

    }

    namespace np_indirect_type
    {
        struct abbrev_sign
                : one< '.', ',' > {
        };

        struct abbrev_typ
                : one< l, L, m, h, s, H, S, c, b, C, B, e, f, g, E, F, G, i, I, q, Q > {
        };

        struct abbrev_sign_typ
                : seq<
                        abbrev_sign,  // [.,]
                        abbrev_typ    // [lLmhHsS...]
                > {
        };

        namespace action
        {
            using np_type::action::state_to_deref_typ;

            namespace internal
            {
                inline
                bool offset_indirect_unsigned(char const c) {
                    return c == '.';
                }

                inline
                ref_type_t abbrev_sign_typ(char const c) {
                    switch (c) {
                        case 'l':
                            return FILE_LELONG;
                        case 'L':
                            return FILE_BELONG;
                        case 'm':
                            return FILE_MELONG;
                        case 'h':
                        case 's':
                            return FILE_LESHORT;
                        case 'H':
                        case 'S':
                            return FILE_BESHORT;
                        case 'c':
                        case 'b':
                        case 'C':
                        case 'B':
                            return FILE_BYTE;
                        case 'e':
                        case 'f':
                        case 'g':
                            return FILE_LEDOUBLE;
                        case 'E':
                        case 'F':
                        case 'G':
                            return FILE_BEDOUBLE;
                        case 'i':
                            return FILE_LEID3;
                        case 'I':
                            return FILE_BEID3;
                        case 'q':
                            return FILE_LEQUAD;
                        case 'Q':
                            return FILE_BEQUAD;
                        default:
                            throw std::runtime_error(
                                    std::string("Invalid offset deref type: ").append(std::string() + c));
                    }
                }

                inline
                std::shared_ptr< val_typ_t > sign_type(char const sign, char const c) {
                    return std::make_shared< val_typ_t >(
                            abbrev_sign_typ(c),
                            offset_indirect_unsigned(sign)
                    );
                }
            }

            template< class Rule >
            struct action_to_deref_typ
                    : maybe_nothing {
            };

            template<>
            struct action_to_deref_typ< abbrev_sign > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.is_unsigned =
                            internal::offset_indirect_unsigned(in.peek_char());
                }

            };

            template<>
            struct action_to_deref_typ< abbrev_typ > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.typ =
                            internal::abbrev_sign_typ(in.peek_char());
                }

            };

        }

        using to_typ_switcher = change_action_and_states<
                action::template action_to_deref_typ,
                action::state_to_deref_typ
        >;
    }

    namespace np_deref_type
    {
        struct formal_sign
                : one< 'u', 'U' > {
        };

        struct formal_typ
                : seq<
                        plus< alpha >,
                        opt< plus< digit > >
                > {
        };

        struct formal_sign_normal_typ
                : seq<
                        opt< formal_sign >,
                        formal_typ
                > {
        };
        struct formal_special_typ
                : sor<
                        TAO_PEGTL_STRING("use"),
                        TAO_PEGTL_STRING("name"),
                        TAO_PEGTL_STRING("der")
                > {
        };

        struct formal_sign_typ
                : sor<
                        formal_special_typ,
                        formal_sign_normal_typ
                > {
        };

        namespace action
        {
            using np_type::action::state_to_deref_typ;

            template< class Rule >
            struct action_to_deref_typ
                    : maybe_nothing {
            };

            template<>
            struct action_to_deref_typ< formal_sign > {
                static void apply0(state_to_deref_typ &st) {
                    st.typ.is_unsigned = true;
                }
            };

            template<>
            struct action_to_deref_typ< formal_typ > {
                template< class ActionInput >
                static void apply(ActionInput &in, state_to_deref_typ &st) {
                    st.typ.typ = parse_type(in.string());
                }
            };

            template<>
            struct action_to_deref_typ< formal_special_typ >
                    : action_to_deref_typ< formal_typ > {
            };

        }

        using to_typ_switcher = change_action_and_states<
                action::template action_to_deref_typ,
                action::state_to_deref_typ
        >;
    }

}

namespace np_flag
{
    using namespace alphabet;

    struct deref_mask_flag
            : one< W, w, C, c, T, t, B, b, H, h, L, l, J, s, r > {
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
