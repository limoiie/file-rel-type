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

#include <magic_type.h>

using namespace tao::pegtl;

namespace tao::pegtl::helper::integer
{

    struct sign
            : one< '+', '-' > {
    };

    struct unsigned_decimal
            : plus< digit > {
    };

    struct signed_decimal
            : seq<
                    opt< sign >,
                    unsigned_decimal
            > {
    };

    struct hex
            : plus< xdigit > {
    };

    struct unsigned_hex_0x
            : seq<
                    string< '0', 'x' >,
                    hex
            > {
    };

    struct signed_hex_0x
            : seq<
                    opt< sign >,
                    unsigned_hex_0x
            > {
    };

    struct unsigned_integer
            : sor<
                    unsigned_hex_0x,
                    unsigned_decimal
            > {
    };

    struct signed_integer
            : seq<
                    opt< sign >,
                    unsigned_integer
            > {
    };

    namespace action
    {
        namespace internal
        {
            [[nodiscard]] constexpr bool is_digit(const char c) noexcept {
                return tao::pegtl::internal::is_digit(c);
            }

            template< typename Integer, Integer Maximum = (std::numeric_limits< Integer >::max)() >
            [[nodiscard]] constexpr bool accumulate_digit(Integer &result, const char digit) noexcept {
                return tao::pegtl::internal::accumulate_digit(result, digit);
            }

            template< typename Integer, Integer Maximum = (std::numeric_limits< Integer >::max)() >
            [[nodiscard]] constexpr bool accumulate_digits(Integer &result, const std::string_view input) noexcept {
                return tao::pegtl::internal::accumulate_digits(result, input);
            }

            template< typename Integer, Integer Maximum = (std::numeric_limits< Integer >::max)() >
            [[nodiscard]] constexpr bool convert_positive(Integer &result, const std::string_view input) noexcept {
                return tao::pegtl::internal::convert_positive(result, input);
            }

            template< typename Signed >
            [[nodiscard]] constexpr bool convert_negative(Signed &result, const std::string_view input) noexcept {
                return tao::pegtl::internal::convert_negative(result, input);
            }

            template< typename Unsigned, Unsigned Maximum = (std::numeric_limits< Unsigned >::max)() >
            [[nodiscard]] constexpr bool convert_unsigned(Unsigned &result, const std::string_view input) noexcept {
                return tao::pegtl::internal::convert_unsigned(result, input);
            }

            template< typename Signed >
            [[nodiscard]] constexpr bool convert_signed(Signed &result, const std::string_view input) noexcept {
                return tao::pegtl::internal::convert_signed(result, input);
            }
        }

        template< class Int >
        struct to_decimal {
            template< class ActionInput >
            static void apply(ActionInput const &in, Int &val) {

            }
        };

        struct to_hex {

        };

        struct to_integer {

        };

    }

}

#endif //FILE_REL_TYPE_INTEGER_HPP
