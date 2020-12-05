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

#include "../utils/log.h"
#include "../utils/tree.hpp"
#include "../utils/stl_container_helper.h"

#include "../utils/tao/pegtl/integer.hpp"
#include "../utils/tao/pegtl/ascii.hpp"

#include "magic_peg_op_typ_action.h"

#include "magic_peg.h"
#include "magic_entry.h"
#include "magic_tree.h"

#include "magic_ast/magic_ast.h"
#include "magic_ast/eval/type_lift_val.h"
#include "magic_ast/elem/str_flag_t.h"
#include "magic_ast/elem/val_sign_typ.h"

namespace magic::peg::action
{
    using namespace tao::pegtl::contrib::integer;
    using namespace tao::pegtl::contrib::integer::action;

    using namespace ::magic::ast;
    using ::magic::ast::exp;

    struct state_magic_build {
        state_magic_build()
                : flag(0), has_range(false), level(0), type_code(0) {
            reset_line_status();
        }

        void reset_line_status() {
            flag = 0u;
            has_range = false;
            level = 0;

            stk_opt.push('*');
            stk_typ.push(nullptr);
            typ = nullptr;

            e_off = nullptr;
            e_val = nullptr;

            description.clear();
            type_code = 0;
        }

        /// file status -----------------------------------------------------

        // one file may contain several magic trees
        std::vector< p_magic_tree_t > magic_trees;

        /// tree status -----------------------------------------------------

        // a series of lines that starts with a level-0 line represents one magic tree
        // one line corresponds to one entry
        p_magic_tree_t current_entry;

        /// line statues -----------------------------------------------------

        std::stack< std::shared_ptr< exp > > stk_exp;
        std::stack< std::shared_ptr< val_sign_typ_t > > stk_typ;
        std::stack< char > stk_opt;
        std::shared_ptr< val_sign_typ_t > typ;

        magic::ast::p_exp_t e_off;
        magic::ast::p_exp_t e_val;

        unsigned flag;
        bool has_range;
        size_t level;

        std::string description;
        unsigned type_code;

    };

    namespace internal
    {
        struct [[maybe_unused]] push_operator {
            template< typename ActionInput >
            static void apply(const ActionInput &in, state_magic_build &st) {
                auto const op = in.peek_char() != '(' ? in.peek_char() : '*';
                st.stk_opt.push(op);
                st.stk_typ.push(nullptr);
            }
        };

        template< unsigned char Op >
        struct [[maybe_unused]] push_operator_ {
            static void apply0(state_magic_build &st) {
                st.stk_opt.push(Op);
                st.stk_typ.push(nullptr);
            }
        };

        struct [[maybe_unused]] fresh_typ
                : np_type::action::formal::to_typ_switcher {
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

        struct [[maybe_unused]] push_un_exp {
            static void apply0(state_magic_build &st) {
                auto inner = std_::pop(st.stk_exp);
                auto typ = std_::pop(st.stk_typ);
                auto op = std_::pop(st.stk_opt);

                inner = unop::builder::make_ptr(op, inner, typ ? *typ : inner->typ);
                st.stk_exp.push(inner);
            }
        };

        struct [[maybe_unused]] push_bin_exp {
            static void apply0(state_magic_build &st) {
                auto right = std_::pop(st.stk_exp);
                auto left = std_::pop(st.stk_exp);
                auto typ = std_::pop(st.stk_typ);
                auto opt = std_::pop(st.stk_opt);

                auto typ_ = typ ? *typ : lift_type(left->typ, right->typ);
                auto inner = binop::builder::make_ptr(opt, left, right, typ_);
                st.stk_exp.push(inner);

                if (!st.stk_opt.empty() && st.stk_opt.top() == '~') {
                    push_un_exp::apply0(st);
                }
            }
        };

        struct [[maybe_unused]] push_bin_exp_with_flag {
            static void apply0(state_magic_build &st) {
                auto right = std_::pop(st.stk_exp);
                auto left = std_::pop(st.stk_exp);
                auto typ = std_::pop(st.stk_typ);
                auto opt = std_::pop(st.stk_opt);

                auto typ_ = typ ? *typ : lift_type(left->typ, right->typ);
                auto inner = binop::builder::make_ptr(opt, left, right, typ_, st.flag);
                st.stk_exp.push(inner);
            }
        };
    }

    template< class Rule >
    struct [[maybe_unused]] action_magic : tao::pegtl::nothing< Rule > {};

    template<>
    struct [[maybe_unused]] action_magic< number_ >
            : to_integer_switcher< uint64_t > {
        template< class ParseInput >
        static void success(const ParseInput &, state_to_integer< uint64_t > &s, state_magic_build &st) {
            auto const is_unsigned = !s.is_negative;  // unsigned once positive
            st.stk_exp.push(num::builder::make_ptr(
                    {FILE_QUAD, is_unsigned},
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
    struct [[maybe_unused]] action_magic< continue_level > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            st.level = in.string_view().size();
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_offset::_sign_typ > : internal::fresh_typ {};

    template<>
    struct [[maybe_unused]] action_magic< np_opt::bin_calc > : internal::push_operator {};

    template<>
    struct [[maybe_unused]] action_magic< np_opt::un_inv > : internal::push_operator {};

    template<>
    struct [[maybe_unused]] action_magic< np_opt::un_rel > : internal::push_operator {};

    template<>
    struct [[maybe_unused]] action_magic< np_opt::un_ind > : internal::push_operator {};

    template<>
    struct [[maybe_unused]] action_magic< np_offset::_exp_bin > : internal::push_bin_exp {};

    template<>
    struct [[maybe_unused]] action_magic< np_offset::_exp_indirect > : internal::push_un_exp {};

    template<>
    struct [[maybe_unused]] action_magic< np_offset::_exp_relative > : internal::push_un_exp {};

    template< unsigned Fmt >
    struct [[maybe_unused]] action_magic< np_type::formal::formal_typ< Fmt > >
            : internal::fresh_typ, internal::push_un_exp {
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref::_typ_end > {
        // once finish matching the formal type, the top exp should be the de-referenced value
        // and its inner should be the offset
        static void apply0(state_magic_build &st) {
            auto deref_val = std::dynamic_pointer_cast< unop >(st.stk_exp.top());
            st.e_val = deref_val;
            st.e_off = deref_val->inner;
            st.e_val->enable_cache(true);
            st.e_off->enable_cache(true);
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref::_number > {
        static void apply0(state_magic_build &st) {
            st.has_range = true;
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_flag::str > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            assert(st.typ->is_string());
            st.flag |= (unsigned) convert_flag(in.peek_char());
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< np_deref::_str_flags > {
        static void apply0(state_magic_build &st) {
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
    struct [[maybe_unused]] action_magic< np_deref::num_mask > : internal::push_bin_exp {};

    template<>
    struct [[maybe_unused]] action_magic< np_deref::str_mask > : internal::push_bin_exp {};

    template<>
    struct [[maybe_unused]] action_magic< np_opt::bin_cmpr > : internal::push_operator {};

    template<>
    struct [[maybe_unused]] action_magic< ::np_relation::_default_exp > {
        static void apply0(state_magic_build &st) {
            // wrap the exp with unop 'x' which always returns true
            internal::push_operator_< 'x' >::apply0(st);
            internal::push_un_exp::apply0(st);
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_relation::_default_opt > : internal::push_operator_< '=' > {};

    template<>
    struct [[maybe_unused]] action_magic< ::np_relation::_exp_str > : internal::push_bin_exp_with_flag {};

    template<>
    struct [[maybe_unused]] action_magic< ::np_relation::_exp_num > : internal::push_bin_exp {};

    template<>
    struct [[maybe_unused]] action_magic< ::np_desc::desc > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            st.description = in.string_view();
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< ::np_code::code >
            : to_integer_switcher< unsigned > {
        template< class ParseInput >
        static void success(ParseInput const &in, state_to_integer< unsigned > &s, state_magic_build &st) {
            st.type_code = s.val;
        }
    };

    template<>
    struct [[maybe_unused]] action_magic< ::magic_line > {
        template< class ActionInput >
        static void apply(ActionInput &in, state_magic_build &st) {
            logs::trace(" ::: {}", in.string_view());
            auto entry = make_magic_entry(st);
            if (have_prev_entry(st, entry)) {
                bind_with_prev_entry(st, entry);
            }
            st.current_entry = entry;
        }

        static p_magic_tree_t make_magic_entry(state_magic_build &st) {
            assert(st.stk_exp.size() == 1);
            assert(st.stk_opt.empty());
            assert(st.stk_typ.empty());

            auto entry = std::make_shared< magic_tree_t >(
                    std::make_shared< magic_entry >(
                            std_::pop(st.stk_exp), st.level, st.description, st.type_code));

            entry->val->e_off = st.e_off;
            entry->val->e_val = st.e_val;

            st.reset_line_status();
            return entry;
        }

        static bool have_prev_entry(state_magic_build &st, p_magic_tree_t &entry) {
            if (entry->val->level == 0) {  // entry is the first line of a magic tree, so it has no prev entry
                if (st.current_entry != nullptr) {  // push current tree root if there is one
                    st.magic_trees.emplace_back(st.current_entry->root());
                }
                return false;
            }
            return true;
        }

        static void bind_with_prev_entry(state_magic_build &st, p_magic_tree_t &entry) {
            assert(st.current_entry != nullptr);
            // level either continues one by one, or backwards to a higher parent
            assert(st.current_entry->val->level + 1 >= entry->val->level);

            // find the parent entry
            while (st.current_entry->val->level >= entry->val->level) {
                st.current_entry = st.current_entry->parent;
            }
            // bind with the parent entry
            st.current_entry->children.push_back(entry);
            entry->parent = st.current_entry;
        }

    };

    template<>
    struct [[maybe_unused]] action_magic< magic_file > {
        static void apply0(state_magic_build &st) {
            if (st.current_entry != nullptr) {
                st.magic_trees.emplace_back(st.current_entry->root());
            }
        }
    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
