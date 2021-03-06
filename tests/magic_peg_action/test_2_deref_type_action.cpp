//
// Created by ligen on 11/5/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>

#include <magic_peg/magic_peg_op_typ.h>
#include <magic_peg/magic_peg_action.hpp>
#include <magic_ast/eval/eval_exp.h>

#include "../test_pegtl_helper.hpp"
#include "utils/print_memory.h"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace np_relation;

#define PAIR(NUM) { #NUM, NUM }

#define CASE1(TYP, OP, NUM, FLAGS) { #TYP#OP#NUM#FLAGS,   {testing_internal::make_exp(#TYP, #OP, NUM), convert_flags(#FLAGS)}}
#define CASE2(OFF, TYP) { #OFF " " TYP, testing_internal::create_case(OFF, TYP)}

namespace testing_internal
{
    using ::magic::ast::exp;
    using ::magic::ast::var;
    using ::magic::ast::num;
    using ::magic::ast::unop;
    using ::magic::ast::binop;

    std::vector< std::shared_ptr< magic::ast::exp > >
    create_case(uint32_t offset, std::string const &typ) {
        auto sign_typ = parse_sign_typ(typ);
        auto off_exp = make_num< int64_t >(offset);
        return {off_exp, magic::ast::unop::builder::make_ptr('*', off_exp, sign_typ)};
    }

    std::shared_ptr< exp > make_exp(std::string const &typ, std::string const &op, long long int num) {
        auto left_inner = ph_exp();  // make a placeholder for the offset
        auto left_typ = parse_sign_typ(typ);
        auto left = unop::builder::make_ptr('*', left_inner, left_typ);
        auto right_typ = val_sign_typ_t::default_();
        auto right = num::builder::make_ptr(right_typ, var::builder::make((uint64_t) num));
        auto inner_typ = lift_type(left_typ, right_typ);
        auto inner = binop::builder::make_ptr(op.back(), left, right, inner_typ);
        if (op.length() == 2) {
            return unop::builder::make_ptr('~', inner, inner_typ);
        }
        return inner;
    }

    std::pair< std::pair< std::string, std::string >, std::pair< val, val > >
    create_case_for_cache_eval(int64_t offset, int64_t value) {
        auto rule_str = std::to_string(offset) + std::string(" quad");
        auto mem_str = std::string((size_t) offset, '0') + std::string((char const *) (void *) &value, sizeof(value));
        auto val_off = val{val_sign_typ_t::default_(), magic::ast::var::builder::make((uint32_t) offset)};
        auto val_val = val{val_sign_typ_t::default_(), magic::ast::var::builder::make((uint32_t) value)};
        return {
                {rule_str, mem_str},
                {val_off,  val_val}
        };
    }

}

TEST(TestMagicPegAction, test_build_typ_str_mask) { // NOLINT(cert-err58-cpp)
    using testing_internal::make_exp;

    std::cout << "Testing test_build_typ_str_mask ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::shared_ptr< magic::ast::exp >, unsigned>> >{
            CASE1(string, /, 20,),
            CASE1(string, /, 20, wl),
            CASE1(string, /, 20, /w/l),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic_init_with_default_offset< seq<
                np_type::formal::formal_str_typ, opt< np_deref::str_mask >
        > >(pair.first);
        ASSERT_EQ(*out.stk_exp.top(), *pair.second.first);
        ASSERT_EQ(out.flag, pair.second.second);
    }
}

TEST(TestMagicPegAction, test_build_typ_num_mask) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_typ_num_mask ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::shared_ptr< magic::ast::exp >, unsigned>> >{
            CASE1(short, /, 20,),
            CASE1(long, +, 20,),
            CASE1(long, ~&, 20,),
            CASE1(ulong, +, 20,),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic_init_with_default_offset< seq<
                np_type::formal::formal_num_typ, opt< np_deref::num_mask >
        > >(pair.first);
        ASSERT_EQ(*out.stk_exp.top(), *pair.second.first);
        ASSERT_EQ(out.flag, pair.second.second);
    }
}

TEST(TestMagicPegAction, test_deref_val_off) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::vector< std::shared_ptr< magic::ast::exp > > > >{
            CASE2(20, "short"),
            CASE2(30, "quad"),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic< seq<
                np_offset::exp, ___, sor< np_deref::nan_typ, np_deref::num_typ > > >(pair.first);
        std::cout << "    - Expect - OFF: " << out.e_off->to_string() << std::endl;
        std::cout << "    - Output - OFF: " << pair.second[0]->to_string() << std::endl;
        std::cout << "    - Expect - VAL: " << out.e_val->to_string() << std::endl;
        std::cout << "    - Output - VAL: " << pair.second[1]->to_string() << std::endl;

        ASSERT_EQ(*out.e_off, *pair.second[0]);
        ASSERT_EQ(*out.e_val, *pair.second[1]);
    }
}

TEST(TestMagicPegAction, test_deref_val_off_cache_eval) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::pair< std::string, std::string >,
                                       std::pair< val, val > > >{
            testing_internal::create_case_for_cache_eval(2, 10),
    };

    for (auto const &pair : cases) {
        auto const &rule_str = pair.first.first;
        auto const &mem_str = pair.first.second;

        std::cout << "  Case: offset - " << rule_str << ", memory - " << memory_to(mem_str) << std::endl;

        auto st = parse_magic< seq<
                np_offset::exp, ___, sor< np_deref::nan_typ, np_deref::num_typ > > >(rule_str);
        std::stringstream ss(mem_str);
        auto ctx = std::make_shared< magic::ast::ctx_exp_t >(ss);

        st.stk_exp.top()->compute(ctx);

        std::cout << "    Expect - Off: " << st.e_off->cached_result()->to_string() << std::endl;
        std::cout << "    Output - Off: " << pair.second.first.to_string() << std::endl;
        ASSERT_EQ(*st.e_off->cached_result(), pair.second.first);

        std::cout << "    Expect - Val: " << st.e_val->cached_result()->to_string() << std::endl;
        std::cout << "    Output - Val: " << pair.second.second.to_string() << std::endl;
        ASSERT_EQ(*st.e_val->cached_result(), pair.second.second);
    }
}