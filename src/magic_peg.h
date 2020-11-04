//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_H
#define FILE_REL_TYPE_MAGIC_PEG_H

#include <tao/pegtl.hpp>

#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include "magic_type.h"
#include "magic_peg_predefine.h"

#include "pegtl-helper/ascii.hpp"
#include "pegtl-helper/integer.hpp"
#include "pegtl-helper/exact.hpp"

using namespace tao::pegtl;

///////////////////////////////////////////
/// region continue level
///////////////////////////////////////////

struct continue_level
        : star< one< '>' > > {
};

/// region-end continue level

struct number_
        : helper::integer::signed_integer {
};

/**
 * Wrap `number_` in `seq` to let the compiler see the specialization of `action` on `number_`
 */
struct number
        : seq< number_ > {
};

namespace np_offset
{
    namespace np_indirect
    {
        namespace np_indirect_mask
        {
            struct offset_indirect_mask_operator
                    : np_operator::mask_operator {
            };

            struct offset_indirect_mask_absolute_num
                    : number {
            };

            struct offset_indirect_mask_indirect_num
                    : seq<
                            one< '(' >,
                            number,
                            one< ')' >
                    > {
            };

            struct offset_indirect_mask
                    : seq<
                            offset_indirect_mask_operator,          // [&|^+/-*%]
                            sor<
                                    offset_indirect_mask_absolute_num,  //     [-+]?digit+
                                    offset_indirect_mask_indirect_num   // "(" [-+]?digit+ ")"
                            >
                    > {
            };
        }

        struct offset_indirect_absolute_num : number {
        };

        struct offset_indirect_relative_num : number {
        };

        struct offset_indirect_num
                : if_then_else<
                        one< '&' >,
                        offset_indirect_relative_num,
                        offset_indirect_absolute_num
                > {
        };

        struct offset_indirect_type
                : np_type::np_indirect_type::offset_indirect_type {
        };

        struct offset_indirect
                : seq<
                        one< '(' >,
                        offset_indirect_num,
                        opt< offset_indirect_type >,
                        opt< np_indirect_mask::offset_indirect_mask >,
                        one< ')' >
                > {
        };

    }

    struct offset_absolute : number {
    };

    struct offset_
            : sor<
                    offset_absolute,
                    np_indirect::offset_indirect
            > {
    };

    struct offset_relative_
            : offset_ {
    };

    struct offset_absolute_
            : offset_ {
    };

    struct offset
            : if_then_else<
                    one< '&' >,
                    offset_relative_,
                    offset_absolute_
            > {
    };
}

namespace np_deref_type
{
    struct deref_type
            : sor<
                    np_type::np_deref_type::deref_special_type,
                    np_type::np_deref_type::deref_normal_type
            > {
    };
}

namespace np_deref_mask
{   /// region de-reference mask (additional computation)
    struct deref_mask_num
            : number {
    };

    struct deref_str_mask_sep
            : one< '/' > {
    };

    struct deref_mask_item
            : seq<
                    opt< deref_str_mask_sep >,
                    sor<
                            deref_mask_num,
                            np_flag::deref_mask_flag
                    >
            > {
    };

    struct deref_mask
            : seq<
                    np_operator::mask_operator,
                    plus< deref_mask_item >
            > {
    };

}

namespace np_relation
{
    struct relation_escaped
            : sor<
                    escaped_one,
                    seq< one< 'x' >, escaped_hex_char >,
                    escaped_oct_char
            > {
    };

    struct relation_plain
            : internal::rematch< print, not_at< word_edge > > {
    };

    struct relation_character
            : if_then_else< one< '\\' >, relation_escaped, relation_plain > {
    };

    struct relation_value
            : internal::plus< relation_character > {
    };

    struct relation
            : seq<
                    opt< np_operator::compare_operator >,
                    relation_value
            > {
    };

}

namespace np_type_code
{
    struct type_code_start
            : one< '|' > {
    };

    struct type_code
            : helper::integer::unsigned_decimal {
    };

}

namespace np_description
{
    struct description_edge
            : sor< np_type_code::type_code_start, tao::pegtl::eof > {
    };

    struct description
            : internal::until< at< description_edge > > {
    };

}


struct magic_line
        : contrib::exact<
                continue_level,
                __,
                np_offset::offset,
                ___,
                np_deref_type::deref_type,
                opt< np_deref_mask::deref_mask >,
                ___,
                np_relation::relation,
                __,
                opt< np_description::description >,
                if_then_else<
                        np_type_code::type_code_start,
                        np_type_code::type_code,
                        success
                >
        > {
};


#endif //FILE_REL_TYPE_MAGIC_PEG_H
