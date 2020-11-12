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

#include "pegtl-helper/ascii.hpp"

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
        std::stack< val_sign_typ_t > stk_typ;
        std::stack< char > stk_op;
        std::shared_ptr< val_sign_typ_t > typ;

        unsigned flag;
        bool has_range;
    };

    struct action_push_operator {
        template< typename ActionInput >
        static void apply(const ActionInput &in, state_magic_build &st) {
            st.stk_op.push(in.peek_char());
        }
    };

    template< char Op >
    struct [[maybe_unused]] action_push_unop {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto inner = std_::pop(st.stk);
            auto typ = std_::pop(st.stk_typ);
            inner = unop::builder::make_ptr(Op, inner, typ);
            st.stk.push(inner);
            st.stk_typ.push(typ);
        }
    };

    struct [[maybe_unused]] action_push_binop {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto right = std_::pop(st.stk);
            auto left = std_::pop(st.stk);
            auto opt = std_::pop(st.stk_op);

            // fixme: remove the empty check
            if (!st.stk_typ.empty()) st.stk_typ.pop();
            // st.stk_typ.pop();
            // st.stk_typ.push();

            st.stk.push(binop::builder::make_ptr(opt, left, right));
            if (!st.stk_op.empty() && st.stk_op.top() == '~') {
                st.stk_op.pop();
                auto inner = std_::pop(st.stk);
                st.stk.push(unop::builder::make_ptr('~', inner));
            }
        }
    };

    struct [[maybe_unused]] action_push_binop_with_flag {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto right = std_::pop(st.stk);
            auto left = std_::pop(st.stk);
            auto op = std_::pop(st.stk_op);
            auto inner = binop::builder::make_ptr(op, left, right, st.flag);
            st.stk.push(inner);
        }
    };

    struct [[maybe_unused]] action_push_typ
            : np_type::np_deref_type::to_typ_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
            st.typ = std::make_shared< val_sign_typ_t >(s.typ);
            st.stk_typ.push(s.typ);
        }
    };

    struct [[maybe_unused]] action_push_deref
            : action_push_typ
            , action_push_unop<'*'> {
    };

    template< class Rule >
    struct [[maybe_unused]] action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct [[maybe_unused]] action_magic< number_ >
            : to_integer_switcher< long long int > {
        template< class ParseInput >
        static void success(const ParseInput &, state_to_integer< long long int > &s, state_magic_build &st) {
            st.stk.push(num::builder::make_ptr(
                    {FILE_LONG, false},
                    var::builder::make((uint64_t)s.val)
            ));
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< ::string >
            : ::action::to_string_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, std::string &s, state_magic_build &st) {
            st.stk.push(num::builder::make_ptr(
                    {FILE_STRING, false},
                    var::builder::make((std::string_view)s)
            ));
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::abbrev_sign_typ >
            : np_type::np_indirect_type::to_typ_switcher {
        template< typename ParseInput >
        static void
        success(const ParseInput & /*unused*/, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
            st.typ = std::make_shared< val_sign_typ_t >(s.typ);
        }

    };

    template<>
    struct [[maybe_unused]] action_magic< np_operator::mask_base_operator >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_operator::mask_aux_operator >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_num > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            if (isdigit(in.string_view().back())) {
                st.stk_typ.push(val_sign_typ_t::default_());
            } else {
                st.stk_typ.push(*st.typ);
            }
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_binop >
            : action_push_binop {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_ind >
            : action_push_unop< '*' > {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_rel >
            : action_push_unop< '&' > {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_typ_relation::formal_str_typ >
            : action_push_deref {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_typ_relation::formal_num_typ >
            : action_push_deref {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_typ_relation::formal_non_typ >
            : action_push_deref {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_num_mask >
            : action_push_binop {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_str_mask > {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            if (!st.has_range) {
                auto range = var::builder::make((uint32_t)STRING_DEFAULT_RANGE);
                auto range_exp = num::builder::make_ptr(val_sign_typ_t::default_(), range);
                st.stk.push(range_exp);
            }
            action_push_binop::apply0(st);
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_mask_num > {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            st.has_range = true;
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_flag::deref_mask_flag > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            assert(st.typ->is_string());
            st.flag |= (unsigned)np_flag::convert_flag(in.peek_char());
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_operator::compare_operator >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_typ_relation::relation_str_val >
            : action_push_binop_with_flag {
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_typ_relation::relation_num_val >
            : action_push_binop {
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
