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
#include "pegtl-helper/change_action_and_states_in_place.hpp"

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
            val_sign_typ_t typ = val_sign_typ_t::default_();
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
                val_typ_t abbrev_sign_typ(char const c) {
                    switch (c) {
                        case 'l':return FILE_LELONG;
                        case 'L':return FILE_BELONG;
                        case 'm':return FILE_MELONG;
                        case 'h':
                        case 's':return FILE_LESHORT;
                        case 'H':
                        case 'S':return FILE_BESHORT;
                        case 'c':
                        case 'b':
                        case 'C':
                        case 'B':return FILE_BYTE;
                        case 'e':
                        case 'f':
                        case 'g':return FILE_LEDOUBLE;
                        case 'E':
                        case 'F':
                        case 'G':return FILE_BEDOUBLE;
                        case 'i':return FILE_LEID3;
                        case 'I':return FILE_BEID3;
                        case 'q':return FILE_LEQUAD;
                        case 'Q':return FILE_BEQUAD;
                        default:
                            throw std::runtime_error(
                                    std::string("Invalid offset deref type: ").append(std::string() + c));
                    }
                }

                inline
                std::shared_ptr< val_sign_typ_t > sign_type(char const sign, char const c) {
                    return std::make_shared< val_sign_typ_t >(
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
        template< unsigned Fmt >
        struct formal_typ_ {
            template< class ParseInput >
            static bool match(ParseInput &in) {
                if (!in.empty()) {
                    for (auto const &str_typ_fmt : map_type()) {
                        auto const &str = std::get< 0 >(str_typ_fmt);
                        auto const &fmt = std::get< 2 >(str_typ_fmt);
                        if (is_invalid_fmt(fmt) || in.size() < str.size()) continue;
                        if ((std::string_view) str == std::string_view(in.current(), str.size())) {
                            in.bump_in_this_line(str.size());
                            return true;
                        }

                        if (in.peek_char() != 'u' && in.peek_char() != 'U') continue;
                        if (!is_number_fmt(fmt) || in.size() < str.size() + 1) continue;
                        if ((std::string_view) str == std::string_view(in.current() + 1, str.size())) {
                            in.bump_in_this_line(str.size() + 1);
                            return true;
                        }
                    }
                }
                return false;
            }

            static bool is_invalid_fmt(val_fmt_t const fmt) {
                return 0 == ((unsigned) fmt & Fmt);
            }

        };

        template< unsigned Fmt >
        struct formal_typ
                : seq< formal_typ_< Fmt > > {
        };

        struct formal_str_typ
                : seq< formal_typ< (unsigned) val_fmt_t::FILE_FMT_STR > > {
        };

        struct formal_num_typ
                : seq< formal_typ<
                        (unsigned) val_fmt_t::FILE_FMT_INT |
                        (unsigned) val_fmt_t::FILE_FMT_QUAD |
                        (unsigned) val_fmt_t::FILE_FMT_FLOAT |
                        (unsigned) val_fmt_t::FILE_FMT_DOUBLE
                > > {
        };

        struct formal_non_typ
                : seq< formal_typ< (unsigned) val_fmt_t::FILE_FMT_NONE > > {
        };

        namespace action
        {
            using np_type::action::state_to_deref_typ;

            struct action_to_typ {
                template< class ActionInput >
                static void apply(ActionInput &in, state_to_deref_typ &st) {
                    st.typ = parse_sign_typ(in.string());
                }
            };

            template< class Rule >
            struct action_to_deref_typ
                    : maybe_nothing {
            };

            template< unsigned Fmt >
            struct action_to_deref_typ< formal_typ_< Fmt > >
                    : action_to_typ {
            };

            template<>
            struct action_to_deref_typ< np_indirect_type::abbrev_sign > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.is_unsigned =
                            np_indirect_type::action::internal::offset_indirect_unsigned(in.peek_char());
                }

            };

            template<>
            struct action_to_deref_typ< np_indirect_type::abbrev_typ > {
                template< typename ActionInput >
                static void apply(const ActionInput &in, state_to_deref_typ &st) {
                    st.typ.typ =
                            np_indirect_type::action::internal::abbrev_sign_typ(in.peek_char());
                }

            };
        }

        using to_typ_switcher = change_action_and_states_in_place<
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

//#define BIT(O) (1u << (O##u))

    enum class str_flag_t : unsigned {
        INDIRECT_RELATIVE = BIT(0),
        STRING_COMPACT_WHITESPACE = BIT(0),
        STRING_COMPACT_OPTIONAL_WHITESPACE = BIT(1),
        STRING_IGNORE_LOWERCASE = BIT(2),
        STRING_IGNORE_UPPERCASE = BIT(3),
        REGEX_OFFSET_START = BIT(4),
        STRING_TEXT_TEST = BIT(5),
        STRING_BIN_TEST = BIT(6),
        PSTRING_1_BE = BIT(7),
        PSTRING_1_LE = BIT(7),
        PSTRING_2_BE = BIT(8),
        PSTRING_2_LE = BIT(9),
        PSTRING_4_BE = BIT(10),
        PSTRING_4_LE = BIT(11),
        REGEX_LINE_COUNT = BIT(11),
        PSTRING_LENGTH_INCLUDES_ITSELF = BIT(12),
        STRING_TRIM = BIT(13),
    };

#define PSTRING_LEN         (PSTRING_1_BE|PSTRING_2_LE|PSTRING_2_BE|PSTRING_4_LE|PSTRING_4_BE)
#define STRING_IGNORE_CASE  (STRING_IGNORE_LOWERCASE|STRING_IGNORE_UPPERCASE)

#define STRING_DEFAULT_RANGE        100

    inline
    auto const &map_flag() {
        static auto const m = std::map< char, str_flag_t >{
                {r, str_flag_t::INDIRECT_RELATIVE},
                {W, str_flag_t::STRING_COMPACT_WHITESPACE},
                {w, str_flag_t::STRING_COMPACT_OPTIONAL_WHITESPACE},
                {c, str_flag_t::STRING_IGNORE_LOWERCASE},
                {C, str_flag_t::STRING_IGNORE_UPPERCASE},
                {s, str_flag_t::REGEX_OFFSET_START},
                {T, str_flag_t::STRING_TEXT_TEST},
                {b, str_flag_t::STRING_BIN_TEST},
                {B, str_flag_t::PSTRING_1_BE},
                {B, str_flag_t::PSTRING_1_LE},
                {H, str_flag_t::PSTRING_2_BE},
                {h, str_flag_t::PSTRING_2_LE},
                {L, str_flag_t::PSTRING_4_BE},
                {l, str_flag_t::PSTRING_4_LE},
                {J, str_flag_t::PSTRING_LENGTH_INCLUDES_ITSELF},
                {T, str_flag_t::STRING_TRIM},
        };
        return m;
    }

    inline
    auto convert_flag(char const flag) {
        return map_flag().at(flag);
    }

    inline
    unsigned convert_flags(std::string const &flag_string) {
        unsigned flags = 0;
        for (auto c : flag_string) {
            if (c == '/') continue;
            flags |= (unsigned) convert_flag(c);
        }
        return flags;
    }

}

#endif //FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
