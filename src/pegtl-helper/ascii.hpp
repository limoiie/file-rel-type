#ifndef FILE_REL_TYPE_PEGTL_HELPER_ASCII
#define FILE_REL_TYPE_PEGTL_HELPER_ASCII

#include <tao/pegtl.hpp>

#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include <magic_type.h>

#include "pegtl-helper/integer.hpp"

using namespace tao::pegtl;

struct __
        : star< blank > {
};

struct ___
        : plus< blank > {
};

struct odigit
        : range< '0', '7' > {
};

struct word_edge
        : sor< space, tao::pegtl::eof > {
};

struct escaped_one
        : one< '\'', '"', '?', '\\', 'a', 'b', 'f', 'n', 'r', 't', 'v', ' ' > {
};

struct escaped_oct_char
        : internal::rep_min_max< 1, 3, odigit > {
};

struct escaped_hex_char
        : internal::rep_min_max< 1, 2, xdigit > {
};

struct escaped_with_hex_oct
        : sor<
                escaped_one,
                seq< one< 'x' >, escaped_hex_char >,
                escaped_oct_char
        > {
};

struct plain_in_word
        : internal::rematch< print, not_at< word_edge > > {
};

struct char_in_word_with_hex_oct
        : if_then_else< one< '\\' >, escaped_with_hex_oct, plain_in_word > {
};

struct word_with_hex_oct
        : internal::plus< char_in_word_with_hex_oct > {
};

namespace action
{
    using tao::pegtl::helper::integer::action::internal::accumulate_digits;

    struct plain {
        template< class ActionInput >
        static void apply(ActionInput &in, std::string &st) {
            st.push_back(in.peek_char());
        }
    };

    struct unescape_one
            : tao::pegtl::unescape::unescape_c<
                    escaped_one, '\'', '"', '?', '\\', '\a', '\b', '\f', '\n', '\r', '\t', '\v', ' ' > {
    };

    struct unescape_oct_char {
        template< class ActionInput >
        static void apply(ActionInput &in, std::string &st) {
            auto byte = 0;
            if (!accumulate_digits< int, 8 >(byte, in.string_view())) {
                throw parse_error("Invalid oct digits!", in);
            }
            st.push_back(byte);
        }
    };

    struct unescape_hex_char {
        template< class ActionInput >
        static void apply(ActionInput &in, std::string &st) {
            auto byte = 0;
            if (!accumulate_digits< int, 16 >(byte, in.string_view())) {
                throw parse_error("Invalid hex digits!", in);
            }
            st.push_back(byte);
        }
    };

    template< class Rule >
    struct action_to_string
            : maybe_nothing {
    };

    template<>
    struct action_to_string< escaped_one >
            : unescape_one {
    };

    template<>
    struct action_to_string< escaped_oct_char >
            : unescape_oct_char {
    };

    template<>
    struct action_to_string< escaped_hex_char >
            : unescape_hex_char {
    };

    template<>
    struct action_to_string< plain_in_word >
            : plain {
    };

    struct to_string_switcher
            : change_action_and_states< action_to_string, std::string > {
    };

}

#endif //FILE_REL_TYPE_PEGTL_HELPER_ASCII