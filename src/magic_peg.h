//
// Created by ligen on 10/26/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_H
#define FILE_REL_TYPE_MAGIC_PEG_H

#include <tao/pegtl.hpp>

#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>

#include <magic_type.h>

using namespace tao::pegtl;

struct edge
        : sor< blank, tao::pegtl::eof > {
};

struct mask_aux_operator
        : one<'~'> {
};

struct mask_base_operator
        : sor<
                one<'&'>,
                one<'|'>,
                one<'^'>,
                one<'+'>,
                one<'-'>,
                one<'*'>,
                one<'/'>,
                one<'%'>
        > {
};

struct mask_operator
        : seq<
                opt< mask_aux_operator >,
                mask_base_operator
        > {
};


///////////////////////////////////////////
/// region string
///////////////////////////////////////////

struct plain
        : alpha {
};

struct escaped_one
        : one< '\'', '"', '?', '\\', 'a', 'b', 'f', 'n', 'r', 't', 'v', ' ' > {
};

struct odigit
        : internal::range< internal::result_on_found::success, internal::peek_char, '0', '7' > {
};

struct escaped_oct_char
        : rep_min_max<1, 3, odigit > {
};

struct escaped_hex_char
        : rep_min_max<1, 2, xdigit > {
};

struct escaped
        : sor<
                escaped_one,
                seq< one< 'x' >, escaped_hex_char >,
                escaped_oct_char
        > {
};

struct text
        : if_then_else<
                one< '\\' >,
                escaped,
                plain
        > {
};

/// region-end string


///////////////////////////////////////////
/// region offset
///////////////////////////////////////////

namespace np_offset_indirect_mask {
    struct offset_indirect_mask_type_sign_symbol
            : sor< one< '.' >, one< ',' > > {
    };

    struct offset_indirect_mask_type
            : sor<
                    one<'l'>,
                    one<'L'>,
                    one<'m'>,
                    one<'h'>,
                    one<'s'>,
                    one<'H'>,
                    one<'S'>,
                    one<'c'>,
                    one<'b'>,
                    one<'C'>,
                    one<'B'>,
                    one<'e'>,
                    one<'f'>,
                    one<'g'>,
                    one<'E'>,
                    one<'F'>,
                    one<'G'>,
                    one<'i'>,
                    one<'I'>,
                    one<'q'>,
                    one<'Q'>
            > {
    };

    struct offset_indirect_mask_operator
            : mask_operator {
    };

    struct offset_indirect_mask_num
            : signed_rule_new {
    };

    struct offset_indirect_mask_indirect_num
            : seq<
                    one< '(' >,
                    offset_indirect_mask_num,
                    one< ')' >
            > {

    };

    struct offset_indirect_mask_item
            : sor<
                    offset_indirect_mask_num,
                    offset_indirect_mask_indirect_num
            > {
    };

    /**
     * [.,][lLmhs...][&|^+/-*%](digits|"("digits")")
     */
    struct offset_indirect_mask
            : seq<
                    offset_indirect_mask_type_sign_symbol,
                    offset_indirect_mask_type,
                    offset_indirect_mask_operator,
                    offset_indirect_mask_item
            > {
    };
}

struct offset_base_num
        : signed_rule_new {
};

struct offset_absolute_num
        : offset_base_num {
};

struct offset_relative_num
        : offset_base_num {
};

struct offset_indirect_num
        : if_then_else<
                one< '&' >,
                offset_relative_num,
                offset_absolute_num
        > {
};

struct offset_indirect
        : seq<
                one< '(' >,
                offset_indirect_num,
                opt< np_offset_indirect_mask::offset_indirect_mask >,
                one< ')' >
        > {
};

struct offset_
        : sor<
                offset_base_num,
                offset_indirect
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

/// region-end offset


///////////////////////////////////////////
/// region de-reference type
///////////////////////////////////////////

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
        : sor< one< 'u' >, one< 'U' > > {
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
                string<'u', 's', 'e'>,
                string<'n', 'a', 'm', 'e'>,
                string<'d', 'e', 'r'>
        > {
};

struct deref_type
        : sor<
                deref_special_type,
                deref_normal_type
        > {
};

/// region-end de-reference type


///////////////////////////////////////////
/// region de-reference mask (additional computation)
///////////////////////////////////////////

struct deref_mask_num
        : plus< digit > {
};

struct deref_mask_flag
        : sor<
                one<'W'>,
                one<'w'>,
                one<'C'>,
                one<'c'>,
                one<'T'>,
                one<'t'>,
                one<'B'>,
                one<'b'>,
                one<'H'>,
                one<'h'>,
                one<'L'>,
                one<'l'>,
                one<'J'>,
                one<'s'>,
                one<'r'>
        > {
};

struct deref_str_mask_sep
        : one< '/' > {
};

struct deref_mask_item
        : seq<
                opt<deref_str_mask_sep>,
                sor<
                        deref_mask_num,
                        deref_mask_flag
                >
        > {
};

struct deref_mask
        : seq<
                mask_operator,
                plus< deref_mask_item >
        > {
};

/// region-end de-reference mask (additional computation)


///////////////////////////////////////////
/// region relation
///////////////////////////////////////////

struct relation_operator
        : sor<
                one<'&'>,
                one<'^'>,
                one<'='>,
                one<'<'>,
                one<'>'>,
                one<'!'>
        > {
};

struct relation_plain
        : rematch< print, not_at< edge > > {
};

struct relation_character
        : if_then_else< one< '\\' >, escaped, relation_plain > {
};

struct relation_val
        : plus< relation_character > {
};

struct relation
        : seq<
                opt< relation_operator >,
                relation_val
        > {
};

///////////////////////////////////////////


///////////////////////////////////////////
/// region description
///////////////////////////////////////////

struct description_character {
};

struct description
        : star< description_character > {
};

/// region-end description

struct integer
        : seq<
                opt<one<'+', '-'>>,
                plus<digit>
        > {

};


#endif //FILE_REL_TYPE_MAGIC_PEG_H
