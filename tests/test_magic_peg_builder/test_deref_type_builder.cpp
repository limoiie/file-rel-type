//
// Created by ligen on 11/5/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg_predefine.h>
#include <magic_peg_builder.hpp>

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;

#define PAIR(NUM) { #NUM, NUM }

#define CASE(TYP, OP, NUM, FLAGS) { TYP#OP#NUM#FLAGS,   {testing_internal::make_exp(TYP, #OP, NUM), np_flag::convert_flags(#FLAGS)}}

static
auto ph_exp() {
    auto const default_val = magic::ast::var::builder::make(0u);
    return magic::ast::num::builder::make_ptr(val_typ_t::default_(), default_val);
}

template< class Rule >
peg::magic::action::state_magic_build parse_magic(std::string const &stmt) {
    auto st = peg::magic::action::state_magic_build{};
    tao::pegtl::memory_input in(stmt, __FUNCTION__);

    st.stk.push(ph_exp());

    parse< exact< Rule >,
            peg::magic::action::action_magic >(in, st);
    return st;
}

namespace testing_internal
{
    using np_flag::str_flag_t;
    using ::magic::ast::exp;
    using ::magic::ast::var;
    using ::magic::ast::num;
    using ::magic::ast::unop;
    using ::magic::ast::binop;

    std::shared_ptr< exp > make_exp(std::string const &typ, std::string const &op, long long int num) {
        auto left_inner = ph_exp();  // make a placeholder for the offset
        auto left = unop::builder::make_ptr('*', left_inner, parse_sign_type(typ));
        auto right = num::builder::make_ptr(val_typ_t::default_(), var::builder::make((uint64_t) num));
        auto inner = binop::builder::make_ptr(op.back(), left, right);
        if (op.length() == 2) {
            return unop::builder::make_ptr('~', inner);
        }
        return inner;
    }

}

TEST(TestMagicPegBuilder, test_build_deref) { // NOLINT(cert-err58-cpp)
    using testing_internal::make_exp;

    std::cout << "Testing test_build_deref ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::shared_ptr< magic::ast::exp >, unsigned>> >{
            CASE("short", /, 20,),
            CASE("long", +, 20,),
            CASE("long", ~&, 20,),
            CASE("ulong", +, 20,),
            CASE("string", /, 20,),
            CASE("string", /, 20, wl),
            CASE("string", /, 20, /w/l),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic< seq<
                np_deref_type::deref_sign_typ,
                opt< np_deref_mask::deref_mask >
        > >(pair.first);
        ASSERT_EQ(*out.stk.top(), *pair.second.first);
        ASSERT_EQ(out.flag, pair.second.second);
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
                formal_str_typ, opt< deref_str_mask >
        >>(pair.first);
        ASSERT_EQ(*out.stk.top(), *pair.second.first);
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
                formal_num_typ, opt< deref_num_mask >
        >>(pair.first);
        ASSERT_EQ(*out.stk.top(), *pair.second.first);
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

        auto out = parse_magic< np_relation::relation_value >(pair.first);
        auto str = std::dynamic_pointer_cast<magic::ast::num>(out.stk.top());

        ASSERT_EQ(std::string_view(str->inner->data.s), pair.second);
    }
}