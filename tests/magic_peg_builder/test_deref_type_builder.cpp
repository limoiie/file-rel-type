//
// Created by ligen on 11/5/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg/magic_peg_op_typ.h>
#include <magic_peg/magic_peg_action.hpp>

#include "magic_ast/elem/val_sign_typ.h"
#include "magic_ast/elem/str_flag_t.h"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace np_relation;

#define PAIR(NUM) { #NUM, NUM }

#define CASE(TYP, OP, NUM, FLAGS) { TYP#OP#NUM#FLAGS,   {testing_internal::make_exp(TYP, #OP, NUM), convert_flags(#FLAGS)}}

static
auto ph_exp() {
    auto const default_val = magic::ast::var::builder::make(0u);
    return magic::ast::num::builder::make_ptr(val_sign_typ_t::default_(), default_val);
}

template< class Rule >
magic::peg::action::state_magic_build parse_magic(std::string const &stmt) {
    auto st = magic::peg::action::state_magic_build{};
    tao::pegtl::memory_input in(stmt, __FUNCTION__);

    st.stk_exp.push(ph_exp());

    parse< exact< Rule >,
           magic::peg::action::action_magic >(in, st);
    return st;
}

namespace testing_internal
{
    using ::magic::ast::exp;
    using ::magic::ast::var;
    using ::magic::ast::num;
    using ::magic::ast::unop;
    using ::magic::ast::binop;

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

}

TEST(TestMagicPegBuilder, test_build_typ_str_mask) { // NOLINT(cert-err58-cpp)
    using testing_internal::make_exp;

    std::cout << "Testing test_build_typ_str_mask ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::shared_ptr< magic::ast::exp >, unsigned>> >{
            CASE("string", /, 20,),
            CASE("string", /, 20, wl),
            CASE("string", /, 20, /w/l),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic< seq<
                np_type::formal::formal_str_typ, opt< np_deref::str_mask >
        >>(pair.first);
        ASSERT_EQ(*out.stk_exp.top(), *pair.second.first);
        ASSERT_EQ(out.flag, pair.second.second);
    }
}

TEST(TestMagicPegBuilder, test_build_typ_num_mask) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_typ_num_mask ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::shared_ptr< magic::ast::exp >, unsigned>> >{
            CASE("short", /, 20,),
            CASE("long", +, 20,),
            CASE("long", ~&, 20,),
            CASE("ulong", +, 20,),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic< seq<
                np_type::formal::formal_num_typ, opt< np_deref::num_mask >
        >>(pair.first);
        ASSERT_EQ(*out.stk_exp.top(), *pair.second.first);
        ASSERT_EQ(out.flag, pair.second.second);
    }
}

TEST(TestMagicPegBuilder, test_build_relation_str) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_relation_str ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::string> >{
            {R"(a\ relation\ string)", "a relation string"},
            {R"(a\r\ relation\t\ string)", "a\r relation\t string"},
            {R"(a\b\ relation\n\ string)", "a\b relation\n string"},
            {R"(a\ \xAB\ relation\t\ string)", "a \xAB relation\t string"},
            {R"(a\ \10\ relation\t\ string)", "a \x08 relation\t string"},
            {R"(a\ \17\ relation\t\ string)", "a \x0F relation\t string"},
            {R"(\xAB\xAC\xDF\x1D\x12)", "\xAB\xAC\xDF\x1D\x12"},
            {R"(\001\002\010\020\007)", "\x01\x02\x08\x10\x07"},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic< ::string >(pair.first);
        auto str = std::dynamic_pointer_cast<magic::ast::num>(out.stk_exp.top());

        ASSERT_EQ(std::string_view(str->inner->data.s), pair.second);
    }
}