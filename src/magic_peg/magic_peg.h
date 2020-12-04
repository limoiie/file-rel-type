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

#include "../utils/tao/pegtl/ascii.hpp"
#include "../utils/tao/pegtl/integer.hpp"
#include "../utils/tao/pegtl/line.hpp"
#include "../utils/tao/pegtl/switcher.hpp"

struct number_ : contrib::integer::signed_integer {};
struct string_ : word_with_hex_oct {};

struct number : seq< number_ > {};
struct string : seq< string_ > {};

struct continue_level : star< one< '>' > > {};

namespace np_offset
{
    struct _sign_typ : np_type::abbrev::sign_typ {};

    struct exp;

    struct _exp_num : seq< number, opt< _sign_typ > > {};
    struct _exp_bin : seq< np_opt::bin_aux, exp > {};

    struct _exp_indirect : seq< np_opt::un_ind, exp, np_opt::un_ind_ > {};
    struct _exp_relative : seq< np_opt::un_rel, exp > {};

    struct exp
            : sor<
                    _exp_indirect,
                    _exp_relative,
                    seq< _exp_num, opt< _exp_bin > >
            > {
    };
}

namespace np_deref
{   /// region de-reference mask (additional computation)
    struct _typ_end : success {};

    struct nan_typ : seq< np_type::formal::formal_nan_typ, _typ_end > {};
    struct num_typ : seq< np_type::formal::formal_num_typ, _typ_end > {};

    struct _number : number {};

    struct _str_flag : seq< opt< one< '/' > >, sor< _number, np_flag::str > > {};

    struct _str_flags : plus< _str_flag > {};

    struct num_mask : seq< np_opt::bin_aux, _number > {};
    struct str_mask : seq< np_opt::bin_aux, _str_flags > {};
}

namespace np_relation
{
    struct _default_opt : success {};
    struct _default_exp : seq< one< 'x' >, at< sor< blank, eolf > > > {};

    template< class Rule >
    struct _exp : seq< sor< np_opt::bin_cmpr, _default_opt >, __, Rule > {};

    struct _exp_str : sor< _default_exp, _exp< ::string > > {};
    struct _exp_num : sor< _default_exp, _exp< ::number > > {};

    template< class Rule >
    struct _mask : sor< _default_exp, Rule > {};

    struct str_mask : _mask< _exp_str > {};
    struct num_mask : _mask< _exp_num > {};
}

namespace np_desc
{
    struct _ : one< '|' > {};

    struct _desc_end : sor< _, eolf > {};

    struct desc : internal::until< at< _desc_end > > {};
}

namespace np_code
{
    struct code : contrib::integer::unsigned_decimal {};
}

/// Empty line for helping organizing rule blocks
struct empty_line : until< at< eolf >, blank > {};

/// Comment line for description
struct comment_line : seq< one< '#' >, until< at< eolf > > > {};

// todo: support strength
/// Annotation line for annotating the strength of the following magic line
struct strength_line : seq< one< '!' >, until< at< eolf > > > {};

/// The rule line that defines the step matching mechanism
struct magic_line
        : seq<
                continue_level,
                __,
                np_offset::exp,
                ___,
                contrib::switcher<
                        np_deref::nan_typ, seq< opt< np_deref::str_mask >, ___, np_relation::str_mask >,
                        np_deref::num_typ, seq< opt< np_deref::num_mask >, ___, np_relation::num_mask >
                >,
                __,
                np_desc::desc,
                opt< np_desc::_, np_code::code >
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

struct magic_file : list< ::line, eol > {};

#endif //FILE_REL_TYPE_MAGIC_PEG_H
