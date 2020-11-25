//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_H
#define FILE_REL_TYPE_MAGIC_PEG_H

#include <tao/pegtl.hpp>

#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include "magic_peg_op_typ.h"

#include "utils/tao/pegtl/ascii.hpp"
#include "utils/tao/pegtl/integer.hpp"
#include "utils/tao/pegtl/line.hpp"
#include "utils/tao/pegtl/switcher.hpp"

using namespace tao::pegtl;

struct number_ : helper::integer::signed_integer {};
struct string_ : word_with_hex_oct {};

struct number : seq< number_ > {};
struct string : seq< string_ > {};

struct continue_level
        : star< one< '>' > > {
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

    struct offset_bin
            : seq<
                    np_operator::mask_operator,
                    offset_general
            > {
    };

    struct offset_ind : seq< np_operator::unop_ind, offset_general, np_operator::unop_ind_end > {};
    struct offset_rel : seq< np_operator::unop_rel, offset_general > {};

    struct offset_num_or_bin
            : seq<
                    offset_num,
                    opt< offset_bin >
            > {
    };

    struct offset_general
            : sor<
                    offset_ind,
                    offset_rel,
                    offset_num_or_bin
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

    struct deref_mask_str
            : plus< deref_mask_item > {
    };

    struct deref_num_mask : seq< np_operator::mask_operator, deref_mask_num > {};
    struct deref_str_mask : seq< np_operator::mask_operator, deref_mask_str > {};

}

namespace np_typ_relation
{
    using namespace np_deref_mask;
    using namespace np_type::np_deref_type;

    struct relation_default_exp : seq< one< 'x' >, at< blank > > {};
    struct relation_default_opt : success {};

    template< class Rule >
    struct relation_exp
            : seq< sor< np_operator::compare_operator, relation_default_opt >, Rule > {
    };

    struct relation_str_val : sor< relation_default_exp, relation_exp< ::string > > {};
    struct relation_num_val : sor< relation_default_exp, relation_exp< ::number > > {};

    template< class Rule >
    struct relation_mask
            : sor< relation_default_exp, Rule > {
    };

    struct typ_relation
            : tao::pegtl::switcher<
                    formal_str_typ, seq< opt< deref_str_mask >, ___, relation_mask< relation_str_val > >,
                    formal_non_typ, seq< opt< /* success  */ >, ___, relation_mask< relation_str_val > >,
                    formal_num_typ, seq< opt< deref_num_mask >, ___, relation_mask< relation_num_val > >
            > {
    };
}

namespace np_description
{
    struct splitter : one< '|' > {};

    struct description_end
            : sor< splitter, tao::pegtl::eolf > {
    };

    struct description
            : internal::until< at< description_end > > {
    };

}

namespace np_type_code
{
    struct type_code
            : helper::integer::unsigned_decimal {
    };

}

/// Empty line for helping organizing rule blocks
struct empty_line : until< at< tao::pegtl::eolf >, blank > {};

/// Comment line for description
struct comment_line : seq< one< '#' >, until< at< tao::pegtl::eolf > > > {};

// todo: support strength
/// Annotation line for annotating the strength of the following magic line
struct strength_line : seq< one< '!' >, until< at< tao::pegtl::eolf > > > {};

/// The rule line that defines the step matching mechanism
struct magic_line
        : seq<
                continue_level,
                __,
                np_offset::offset_general,
                ___,
                np_typ_relation::typ_relation,
                __,
                opt< np_description::description >,
                if_then_else<
                        np_description::splitter,
                        np_type_code::type_code,
                        success
                >
        > {
};

struct line
        : sor<
                comment_line,
                strength_line,
                magic_line,
                empty_line
        > {
};

struct magic_file
        : list< ::line, tao::pegtl::eol > {
};

#endif //FILE_REL_TYPE_MAGIC_PEG_H
