//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
#define FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP

#include <memory>
#include <stack>
#include <utility>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <pegtl-helper/integer.hpp>

#include "utils/stl_container_helper.h"

#include "magic_peg.h"
#include "magic_ast/magic_ast.h"

namespace peg::magic::action
{
    using namespace tao::pegtl::helper::integer;
    using namespace tao::pegtl::helper::integer::action;

    using namespace ::magic::ast;
    using ::magic::ast::exp;

    struct state_magic_build {
        std::stack< std::shared_ptr< exp>> stk;
        std::stack< char > stk_op;
        std::shared_ptr< val_typ_t > typ;

        unsigned flag;
        bool has_range;
        bool has_compare_opt;
    };

    template< class Rule >
    struct action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template< class Int >
    struct action_push_num
            : to_integer_switcher< Int > {
        template< class ParseInput >
        static void success(const ParseInput &, state_to_integer< Int > &s, state_magic_build &st) {
            st.stk.push(num::builder::make_ptr(
                    {FILE_LONG, false},
                    var::builder::make((uint64_t) s.val)
            ));
        }
    };

    template<>
    struct action_magic< number_ >
            : action_push_num< long long int > {
    };

/*
    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect_absolute_num >
            : maybe_nothing {  // follow action<number_>
    };
*/

    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect_relative_num > {
        using int_t = long long int;

        template< typename ActionInput >
        static void apply(const ActionInput & /*unused*/, state_magic_build &st) {
            auto inner = st.stk.top();
            st.stk.pop();
            st.stk.push(unop::builder::make_ptr('&', inner));
        }

    };

/*
    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect_num >
            : maybe_nothing {  // delegate to action<offset_indirect_[absolute/relative]_num>
    };
*/

    template<>
    struct action_magic< np_offset::np_indirect::abbrev_sign_typ >
            : np_type::np_indirect_type::to_typ_switcher {
        template< typename ParseInput >
        static void
        success(const ParseInput & /*unused*/, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
            st.typ = std::make_shared< val_typ_t >(s.typ);
        }

    };

    struct action_push_operator {
        template< typename ActionInput >
        static void apply(const ActionInput &in, state_magic_build &st) {
            st.stk_op.push(in.peek_char());
        }
    };

    template<>
    struct action_magic< np_operator::mask_base_operator >
            : action_push_operator {
    };

    template<>
    struct action_magic< np_operator::mask_aux_operator >
            : action_push_operator {
    };

/*
    template<>
    struct action_magic< np_offset::np_indirect::np_indirect_mask::offset_indirect_mask_absolute_num >
            : maybe_nothing { // follow action<number_>
    };
*/

    template<>
    struct action_magic< np_offset::np_indirect::np_indirect_mask::offset_indirect_mask_indirect_num > {
        template< typename ActionInput >
        static void apply(const ActionInput & /*unused*/, state_magic_build &st) {
            auto inner = st.stk.top();
            st.stk.pop();
            inner = st.typ ? unop::builder::make_ptr('*', inner, *st.typ)
                           : unop::builder::make_ptr('*', inner);
            st.stk.push(inner);
        }
    };

    struct action_mask {
        static void apply0(state_magic_build &st) {
            auto right = st.stk.top();
            st.stk.pop();
            auto left = st.stk.top();
            st.stk.pop();
            auto opt = st.stk_op.top();
            st.stk_op.pop();

            st.stk.push(binop::builder::make_ptr(opt, left, right));
            if (!st.stk_op.empty() && st.stk_op.top() == '~') {
                st.stk_op.pop();
                auto inner = st.stk.top();
                st.stk.pop();
                st.stk.push(unop::builder::make_ptr('~', inner));
            }
        }
    };

    template<>
    struct action_magic< np_offset::np_indirect::np_indirect_mask::offset_indirect_mask >
            : action_mask {
    };

/*
    template<>
    struct action_magic<np_offset::offset_absolute>
            : maybe_nothing { // follow action<number_>
    };
*/

    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect > {
        template< typename ActionInput >
        static void apply(const ActionInput & /*unused*/, state_magic_build &st) {
            auto inner = st.stk.top();
            st.stk.pop();
            inner = st.typ ? unop::builder::make_ptr('*', inner, *st.typ)
                           : unop::builder::make_ptr('*', inner);
            st.stk.push(inner);
        }
    };

/*
    template<>
    struct action_magic< np_offset::offset_ >
            : maybe_nothing { // follow action<offset_[absolute/indirect]>
    };
*/

/*
    template<>
    struct action_magic< np_offset::offset_absolute_ >
            : maybe_nothing { // follow action<offset_>
    };
*/

    template<>
    struct action_magic< np_offset::offset_relative_ > {
        template< typename ActionInput >
        static void apply(const ActionInput & /*unused*/, state_magic_build &st) {
            auto inner = st.stk.top();
            st.stk.pop();
            st.stk.push(unop::builder::make_ptr('&', inner));
        }
    };

/*
    template<>
    struct action_magic< offset >
            :maybe_nothing { // follow action<offset_[relative/absolute]_>
    };
*/

    template<>
    struct action_magic< np_deref_type::deref_sign_typ >
            : np_type::np_deref_type::to_typ_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
            auto offset_exp = st.stk.top();
            st.stk.pop();
            st.typ = std::make_shared< val_typ_t >(s.typ);
            auto deref_exp = unop::builder::make_ptr('*', offset_exp, s.typ);
            st.stk.push(deref_exp);
        }
    };

    template<>
    struct action_magic< np_deref_mask::deref_mask_num > {
        static void apply0(state_magic_build &st) {
            st.has_range = true;
        }
    };

    template<>
    struct action_magic< np_flag::deref_mask_flag > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            assert(st.typ->is_string());
            st.flag |= (unsigned) np_flag::convert_flag(in.peek_char());
        }
    };

    template<>
    struct action_magic< np_deref_mask::deref_mask > {
        static void apply0(state_magic_build &st) {
            // I do not process the str_flag here since the str_flag is used to control
            // the comparison operation, which is defined in the relation part. so, I
            // choose to handle the flag when processing the relation operator

            // if no range is defined for a string type, then push the default range
            if (st.typ->is_string() && !st.has_range) {
                auto range = var::builder::make((uint32_t) STRING_DEFAULT_RANGE);
                auto range_exp = num::builder::make_ptr(val_typ_t::default_(), range);
                st.stk.push(range_exp);
            }
            action_mask::apply0(st);
        }
    };

    namespace internal
    {
        using tao::pegtl::helper::integer::action::internal::accumulate_digits;

        template< class Rule >
        struct action_relation_string
                : maybe_nothing {
        };

        template<>
        struct action_relation_string< escaped_one >
                : ::action::unescape_one {
        };

        template<>
        struct action_relation_string< escaped_oct_char >
                : ::action::unescape_oct_char {
        };

        template<>
        struct action_relation_string< escaped_hex_char >
                : ::action::unescape_hex_char {
        };

        template<>
        struct action_relation_string< np_relation::relation_plain >
                : ::action::plain {
        };

        struct to_relation_string_switcher
                : change_action_and_states< action_relation_string, std::string > {
        };
    }

    template<>
    struct action_magic< np_operator::compare_operator > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            st.has_compare_opt = true;
            st.stk_op.push(in.peek_char());
        }
    };

    template<>
    struct action_magic< np_relation::relation_value >
            : internal::to_relation_string_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, std::string &s, state_magic_build &st) {
            // now this is only about string value
            auto str = var::builder::make((std::string_view) s);
            auto typ = val_typ_t{ref_type_t::FILE_STRING, false};
            auto right = num::builder::make_ptr(typ, str);
            auto left = std_::pop(st.stk);
            auto op = std_::pop(st.stk_op);
            auto inner = binop::builder::make_ptr(op, left, right, st.flag);
            st.stk.push(inner);
        }
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
