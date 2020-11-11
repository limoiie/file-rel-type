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
#include "pegtl-helper/switcher.hpp"

using namespace tao::pegtl;

struct continue_level
        : star< one< '>' > > {
};

struct number_
        : helper::integer::signed_integer {
};

/**
 * Wrap `number_` in `seq` to let the compiler see the specialization of `action` on `number_`
 */
struct number
        : seq< number_ > {
};

struct string
        : seq< word_with_hex_oct > {
};

namespace np_offset
{
    struct abbrev_sign_typ
            : np_type::np_indirect_type::abbrev_sign_typ {
    };

    struct offset_general;

    struct offset_num
            : seq<
                    number,
                    opt< abbrev_sign_typ >
            > {
    };

    struct offset_binop
            : seq<
                    np_operator::mask_operator,
                    offset_general
            > {
    };

    struct offset_num_or_binop
            : seq<
                    offset_num,
                    opt< offset_binop >
            > {
    };

    struct offset_ind
            : seq< one< '(' >, offset_general, one< ')' > > {
    };

    struct offset_rel
            : seq< one< '&' >, offset_general > {
    };

    struct offset_general
            : sor<
                    offset_ind,
                    offset_rel,
                    offset_num_or_binop
            > {
    };

}

namespace np_deref_mask
{   /// region de-reference mask (additional computation)
    struct deref_mask_num
            : number {
    };

    struct deref_mask_item
            : seq<
                    opt< one< '/' > >,
                    sor<
                            deref_mask_num,
                            np_flag::deref_mask_flag
                    >
            > {
    };

    struct deref_num_mask
            : seq<
                    np_operator::mask_operator,
                    deref_mask_num
            > {
    };

    struct deref_str_mask
            : seq<
                    np_operator::mask_operator,
                    plus< deref_mask_item >
            > {
    };

}

namespace np_typ_relation
{
    using namespace np_type::np_deref_type;
    using namespace np_deref_mask;

    template< class Rule >
    struct relation_exp
            : seq<
                    opt< np_operator::compare_operator >, Rule
            > {
    };

    struct relation_str_val
            : relation_exp< ::string > {
    };

    struct relation_num_val
            : relation_exp< ::number > {
    };

    struct typ_relation
            : tao::pegtl::switcher<
                    formal_str_typ, seq< opt< deref_str_mask >, ___, relation_str_val >,
                    formal_non_typ, seq< opt< /* success  */ >, ___, relation_str_val >,
                    formal_num_typ, seq< opt< deref_num_mask >, ___, relation_num_val >
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
                np_offset::offset_general,
                ___,
                np_typ_relation::typ_relation,
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
