//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_INTEGER_HPP
#define FILE_REL_TYPE_INTEGER_HPP

#include <tao/pegtl.hpp>

#include <tao/pegtl/ascii.hpp>
#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

namespace TAO_PEGTL_NAMESPACE::contrib::integer
{
    using namespace tao::pegtl;

    struct sign : one< '+', '-' > {};
    struct prefix_0x : string< '0', 'x' > {};

    struct digits : plus< digit > {};
    struct xdigits : plus< xdigit > {};

    struct unsigned_decimal : seq< digits > {};
    struct signed_decimal : seq< opt< sign >, digits > {};

    struct unsigned_0x_hex : seq< prefix_0x, xdigits > {};
    struct signed_0x_hex : seq< opt< sign >, prefix_0x, xdigits > {};

    struct unsigned_integer : sor< unsigned_0x_hex, unsigned_decimal > {};
    struct signed_integer : sor< signed_0x_hex, signed_decimal > {};

    namespace action
    {
        namespace internal
        {
            template< int radix >
            struct radix_trait {
            };

            template<>
            struct radix_trait< 8 > {
                [[maybe_unused]] constexpr static int radix = 8;

                constexpr static int convert(char const digit) {
                    return digit - '0';
                }

                [[nodiscard]] constexpr static bool is_digit(char const c) {
                    return '0' <= c && c <= '7';
                }

            };

            template<>
            struct radix_trait< 10 > {
                [[maybe_unused]] constexpr static int radix = 10;

                constexpr static int convert(char const digit) {
                    return digit - '0';
                }

                [[nodiscard]] constexpr static bool is_digit(char const c) {
                    return '0' <= c && c <= '9';
                }

            };

            template<>
            struct radix_trait< 16 > {
                [[maybe_unused]] constexpr static int radix = 16;

                constexpr static int convert(char const digit) {
                    if (digit >= '0' && digit <= '9') return digit - '0';
                    return tolower(digit) - 'a' + 10;
                }

                [[nodiscard]] constexpr static bool is_digit(char const c) noexcept {
                    return ('a' <= c && c <= 'f') || ('A' <= c && c <= 'F') || radix_trait< 10 >::is_digit(c);
                }

            };

            template< class Integer, int Radix, Integer Maximum = (std::numeric_limits< Integer >::max)() >
            [[nodiscard]] constexpr bool accumulate_digit(Integer &result, char const digit) noexcept {
                // Assumes that digit is a digit as per is_digit(); returns false on overflow.

                static_assert(std::is_integral_v< Integer >);

                using radix_t = radix_trait< Radix >;

                constexpr Integer cut_off = Maximum / Radix;
                constexpr Integer cut_lim = Maximum % Radix;

                const Integer c = radix_t::convert(digit);

                if ((result > cut_off) || ((result == cut_off) && (c > cut_lim))) {
                    return false;
                }
                result *= radix_t::radix;
                result += c;
                return true;
            }

            template< class Integer, int Radix, Integer Maximum = (std::numeric_limits< Integer >::max)() >
            [[nodiscard]] constexpr bool accumulate_digits(Integer &result, const std::string_view input) noexcept {
                for (char const c : input) {
                    if (!accumulate_digit< Integer, Radix, Maximum >(result, c)) {
                        return false;
                    }
                }
                return true;
            }

        }

        template< class Int >
        struct state_to_integer {
            Int val{ 0 };
            bool is_negative{ false };

        };

        template< class Int >
        struct trait_to_integer {
            template< class Rule >
            struct to_integer
                    : maybe_nothing {
            };

            template<>
            struct to_integer< sign > {
                template< class ActionInput >
                static void apply(ActionInput const &in, state_to_integer< Int > &st) {
                    st.is_negative = in.peek_char() == '-';
                }

            };

            template<>
            struct to_integer< digits > {
                template< class ActionInput >
                static void apply(ActionInput const &in, state_to_integer< Int > &st) {
                    if (!internal::accumulate_digits< Int, 10 >(st.val, in.string_view())) {
                        throw parse_error("dec digits has overflow", in);
                    }
                }

            };

            template<>
            struct to_integer< xdigits > {
                template< class ActionInput >
                static void apply(ActionInput const &in, state_to_integer< Int > &st) {
                    if (!internal::accumulate_digits< Int, 16 >(st.val, in.string_view())) {
                        throw parse_error("hex digits has overflow", in);
                    }
                }

            };

            template<>
            struct to_integer< unsigned_decimal > {
                template< class ActionInput >
                static void apply(ActionInput const &in, state_to_integer< Int > &st) {
                    // nothing to do cause the action on `digits` has already converted the value
                    static_assert(std::is_unsigned_v< Int >);
                }

            };

            template<>
            struct to_integer< signed_decimal > {
                template< class ActionInput >
                static void apply(ActionInput const &in, state_to_integer< Int > &st) {
                    //static_assert(std::is_signed_v< Int >);
                    if (st.is_negative) {
                        st.val = ~st.val + 1;
                    }
                }

            };

            template<>
            struct to_integer< unsigned_0x_hex >
                    : to_integer< unsigned_decimal > {
            };

            template<>
            struct to_integer< signed_0x_hex >
                    : to_integer< signed_decimal > {
            };

            template<>
            struct to_integer< unsigned_integer >
                    : maybe_nothing {
            };

            template<>
            struct to_integer< signed_integer >
                    : maybe_nothing {
            };

        };

    }

    template< class Int >
    using to_integer_switcher = change_action_and_states<          // here I choose ..._states instead of ..._state,
            action::trait_to_integer< Int >::template to_integer,  // it because the later requires the constructor of
            action::state_to_integer< Int >                        // lib state
    >;

}

#endif //FILE_REL_TYPE_INTEGER_HPP
