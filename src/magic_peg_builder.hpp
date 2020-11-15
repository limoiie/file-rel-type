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
#include <pegtl-helper/ascii.hpp>
#include <utils/stl_container_helper.h>
#include <magic_peg.h>
#include <magic_ast/magic_ast.h>

namespace peg::magic::action
{
    using namespace tao::pegtl::helper::integer;
    using namespace tao::pegtl::helper::integer::action;

    using namespace ::magic::ast;
    using ::magic::ast::exp;

    struct state_magic_build {
        state_magic_build()
                : flag(0), has_range(false) {
            stk_opt.push('*');
            stk_typ.push(nullptr);
        }

        std::stack< std::shared_ptr< exp > > stk_exp;
        std::stack< std::shared_ptr< val_sign_typ_t > > stk_typ;
        std::stack< char > stk_opt;
        std::shared_ptr< val_sign_typ_t > typ;

        unsigned flag;
        bool has_range;
    };

    struct action_push_operator {
        template< typename ActionInput >
        static void apply(const ActionInput &in, state_magic_build &st) {
            auto const op = in.peek_char() != '(' ? in.peek_char() : '*';
            st.stk_opt.push(op);
            st.stk_typ.push(nullptr);
        }
    };

    struct [[maybe_unused]] action_fresh_typ
            : np_type::np_deref_type::to_typ_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, np_type::action::state_to_deref_typ &s, state_magic_build &st) {
            st.typ = std::make_shared< val_sign_typ_t >(s.typ);
            auto tmp_stk_opt = std::stack< char >();
            auto tmp_stk_typ = std::stack< std::shared_ptr< val_sign_typ_t>>();
            while (!st.stk_opt.empty() && st.stk_opt.top() != '*') {
                tmp_stk_opt.push(std_::pop(st.stk_opt));
                tmp_stk_typ.push(std_::pop(st.stk_typ));
            }
            if (!st.stk_typ.empty()) {
                st.stk_typ.top() = st.typ;
            }
            while (!tmp_stk_opt.empty()) {
                st.stk_opt.push(std_::pop(tmp_stk_opt));
                st.stk_typ.push(std_::pop(tmp_stk_typ));
            }
        }
    };

    struct [[maybe_unused]] action_push_un_exp {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto inner = std_::pop(st.stk_exp);
            auto typ = std_::pop(st.stk_typ);
            auto op = std_::pop(st.stk_opt);

            inner = unop::builder::make_ptr(op, inner, typ ? *typ : inner->typ);
            st.stk_exp.push(inner);
        }
    };

    struct [[maybe_unused]] action_push_bin_exp {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto right = std_::pop(st.stk_exp);
            auto left = std_::pop(st.stk_exp);
            auto typ = std_::pop(st.stk_typ);
            auto opt = std_::pop(st.stk_opt);

            auto typ_ = typ ? *typ : lift_type(left->typ, right->typ);
            auto inner = binop::builder::make_ptr(opt, left, right, typ_);
            st.stk_exp.push(inner);

            if (!st.stk_opt.empty() && st.stk_opt.top() == '~') {
                action_push_un_exp::apply0(st);
            }
        }
    };

    struct [[maybe_unused]] action_push_bin_exp_with_flag {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            auto right = std_::pop(st.stk_exp);
            auto left = std_::pop(st.stk_exp);
            auto typ = std_::pop(st.stk_typ);
            auto opt = std_::pop(st.stk_opt);

            auto typ_ = typ ? *typ : lift_type(left->typ, right->typ);
            auto inner = binop::builder::make_ptr(opt, left, right, typ_, st.flag);
            st.stk_exp.push(inner);
        }
    };

    template< class Rule >
    struct [[maybe_unused]] action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct [[maybe_unused]] action_magic< number_ >
            : to_integer_switcher< int64_t > {
        template< class ParseInput >
        static void success(const ParseInput &, state_to_integer< int64_t > &s, state_magic_build &st) {
            st.stk_exp.push(num::builder::make_ptr(
                    {FILE_LONG, false},
                    var::builder::make((uint64_t) s.val)
            ));
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< string_ >
            : ::action::to_string_switcher {
        template< class ParseInput >
        static void success(ParseInput &in, std::string &s, state_magic_build &st) {
            st.stk_exp.push(num::builder::make_ptr(
                    {FILE_STRING, false},
                    var::builder::make((std::string_view) s)
            ));
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::abbrev_sign_typ >
            : action_fresh_typ {
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
    struct [[maybe_unused]] action_magic< np_operator::unop_rel >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_operator::unop_ind >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_bin >
            : action_push_bin_exp {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_ind >
            : action_push_un_exp {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::offset_rel >
            : action_push_un_exp {
    };

    template< unsigned Fmt >
    struct [[maybe_unused]] action_magic< np_type::np_deref_type::formal_typ< Fmt > >
            : action_fresh_typ, action_push_un_exp {
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
            st.flag |= (unsigned) np_flag::convert_flag(in.peek_char());
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_mask_str > {
        [[maybe_unused]] static void apply0(state_magic_build &st) {
            if (!st.has_range) {  // push the default range exp if no range specified
                st.stk_exp.push(default_range());
            }
        }

        static std::shared_ptr< exp > default_range() {
            auto range = var::builder::make((uint32_t) STRING_DEFAULT_RANGE);
            auto range_typ = val_sign_typ_t::default_();
            auto range_exp = num::builder::make_ptr(range_typ, range);
            return range_exp;
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_num_mask >
            : action_push_bin_exp {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref_mask::deref_str_mask >
            : action_push_bin_exp {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_operator::compare_operator >
            : action_push_operator {
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_typ_relation::relation_str_val >
            : action_push_bin_exp_with_flag {
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_typ_relation::relation_num_val >
            : action_push_bin_exp {
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
