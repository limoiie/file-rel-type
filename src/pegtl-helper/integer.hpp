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

}

#endif //FILE_REL_TYPE_INTEGER_HPP
