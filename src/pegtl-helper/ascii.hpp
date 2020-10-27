#ifndef FILE_REL_TYPE_PEGTL_HELPER_ASCII
#define FILE_REL_TYPE_PEGTL_HELPER_ASCII

#include <tao/pegtl.hpp>

#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include <magic_type.h>

using namespace tao::pegtl;

struct ___
        : plus< space > {
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
        : internal::rep_min_max<1, 3, odigit > {
};

struct escaped_hex_char
        : internal::rep_min_max<1, 2, xdigit > {
};

#endif //FILE_REL_TYPE_PEGTL_HELPER_ASCII