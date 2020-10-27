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
#include <magic_type.h>
#include <pegtl-helper/ascii.hpp>

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

    namespace np_indirect_type
    {
        struct offset_indirect_type_sign_symbol_
                : one< '.' , ',' > {
        };
        struct offset_indirect_type_
                : one< l, L, m, h, s, H, S, c, b, C, B, e, f, g, E, F, G, i, I, q, Q > {
        };
        struct offset_indirect_type
                : seq<
                        offset_indirect_type_sign_symbol_,  // [.,]
                        offset_indirect_type_               // [lLmhHsS...]
                > {
        };
    }

    namespace np_deref_type
    {
        struct deref_type_
                : seq<
                        plus< alpha >,
                        opt< plus< digit > >
                > {
        };
        struct deref_unsigned_type
                : deref_type_ {
        };
        struct deref_signed_type
                : deref_type_ {
        };
        struct deref_type_sign_symbol
                : one< u, U > {
        };
        struct deref_normal_type
                : if_then_else<
                        deref_type_sign_symbol,
                        deref_unsigned_type,
                        deref_signed_type
                > {
        };
        struct deref_special_type
                : sor<
                        string< u, s, e >,
                        string< n, a, m, e >,
                        string< d, e, r >
                > {
        };
    }

}

#endif //FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
