//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
#define FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP

#include <memory>
#include <stack>
#include <utility>

#include <tao/pegtl.hpp>

#include <pegtl-helper/integer.hpp>

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
    };

    template< class Rule >
    struct action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct action_magic< number_ >
            : to_integer_switcher< long long int > {
        using int_t = long long int;

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_integer< int_t > &s, state_magic_build &st) {
            st.stk.push(num::builder::make_ptr(
                    {FILE_LONG, false},
                    var::builder::make((uint64_t) s.val)
            ));
        }

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
        static void success(const ParseInput & /*unused*/, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
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

    template<>
    struct action_magic< np_offset::np_indirect::np_indirect_mask::offset_indirect_mask > {
        template< typename ActionInput >
        static void apply(const ActionInput & /*unused*/, state_magic_build &st) {
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
    struct action_magic<np_type::np_deref_type::formal_special_typ> {
    };

    template<>
    struct action_magic<np_type::np_deref_type::formal_sign_normal_typ> {
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
