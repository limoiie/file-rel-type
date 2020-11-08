//
// Created by ligen on 10/27/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg.h>
#include <magic_peg_predefine.h>
#include <magic_peg_builder.hpp>

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;

#define PAIR(NUM) { #NUM, NUM }

template< class Rule >
peg::magic::action::state_magic_build parse_magic(std::string const &stmt) {
    auto st = peg::magic::action::state_magic_build{};
    tao::pegtl::memory_input in(stmt, __FUNCTION__);

    parse< exact< Rule >,
            peg::magic::action::action_magic >(in, st);
    return st;
}

TEST(TestMagicPegBuilder, test_build_offset_indirect_absolute_num) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_number ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int>>{
            PAIR(0),
            PAIR(1),
            PAIR(-1),
            PAIR(-0),
            PAIR(123),
            PAIR(0x123),
            PAIR(0x0),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::np_indirect::offset_indirect_absolute_num >(pair.first);
        auto num_exp = std::dynamic_pointer_cast< peg::magic::action::num >(st.stk.top());
        ASSERT_EQ(num_exp->inner->data.l, pair.second);
    }
}

TEST(TestMagicPegBuilder, test_build_offset_indirect_relative_num) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_offset_indirect_relative_num ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int > >{
            PAIR(0),
            PAIR(1),
            PAIR(-1),
            PAIR(-0),
            PAIR(123),
            PAIR(0x123),
            PAIR(0x0),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::np_indirect::offset_indirect_relative_num >(pair.first);

        auto unop_exp = std::dynamic_pointer_cast< peg::magic::action::unop >(st.stk.top());
        ASSERT_NE(unop_exp, nullptr);
        auto num_exp = std::dynamic_pointer_cast< peg::magic::action::num >(unop_exp->inner);
        ASSERT_EQ(num_exp->inner->data.l, pair.second);
    }
}

namespace testing_internal
{
    using peg::magic::action::var;
    using peg::magic::action::exp;
    using peg::magic::action::num;
    using peg::magic::action::unop;
    using peg::magic::action::binop;
    using peg::magic::action::unop_relative;
    using peg::magic::action::unop_deference;

    std::shared_ptr< exp > make_num(int const n) {
        return num::builder::make_ptr(
                {FILE_LONG, false},
                var::builder::make((uint32_t) n)
        );
    }

    std::shared_ptr< unop > make_unop_rel(int const n) {
        return unop::builder::make_ptr('&', make_num((uint32_t) n));
    }

    std::shared_ptr< unop > make_unop_rel(std::shared_ptr< exp > const &inner) {
        return unop::builder::make_ptr('&', inner);
    }

    std::shared_ptr< unop > make_unop_def(int const n) {
        return unop::builder::make_ptr('*', make_num((uint32_t) n));
    }

    std::shared_ptr< unop >
    make_unop_def(std::shared_ptr< exp > const &inner, std::shared_ptr< val_sign_typ_t > const &typ) {
        return typ ? unop_deference::builder::make_ptr('*', inner, *typ)
                   : unop_deference::builder::make_ptr('*', inner);
    }

    std::shared_ptr< exp >
    make_unop_def_with_direct_mask(std::shared_ptr< exp > const &left, std::shared_ptr< val_sign_typ_t > const &typ,
                                   char const mask_op, int const mask_num, bool const inverse = false) {
        auto right = make_num(mask_num);
        auto inner = binop::builder::make_ptr(mask_op, left, right);
        return inverse ? make_unop_def(unop::builder::make_ptr('~', inner), typ)
                       : make_unop_def(inner, typ);
    }

    std::shared_ptr< exp >
    make_unop_def_with_indirect_mask(std::shared_ptr< exp > const &left, std::shared_ptr< val_sign_typ_t > const &typ,
                                     char const mask_op, int const mask_num, bool const inverse = false) {
        auto right_inner = make_num(mask_num);
        auto right = make_unop_def(right_inner, typ);
        auto inner = binop::builder::make_ptr(mask_op, left, right);
        return inverse ? make_unop_def(unop::builder::make_ptr('~', inner), typ)
                       : make_unop_def(inner, typ);
    }
}

TEST(TestMagicPegBuilder, test_build_offset_indirect_num) { // NOLINT(cert-err58-cpp)
    using peg::magic::action::var;

    std::cout << "Testing test_build_offset_indirect_num ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::shared_ptr< peg::magic::action::exp>> >{
            {"123",   testing_internal::make_num(123)},
            {"+1",    testing_internal::make_num(+1)},
            {"&1",    testing_internal::make_unop_rel(1)},
            {"&123",  testing_internal::make_unop_rel(123)},
            {"&-123", testing_internal::make_unop_rel(-123)},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::np_indirect::offset_indirect_num >(pair.first);

        ASSERT_EQ(*st.stk.top(), *pair.second);
    }
}

namespace testing_internal
{
    inline
    std::list< std::pair< std::string, std::shared_ptr< peg::magic::action::exp>> >
    make_offset_indirect_exp() {
        using np_type::np_indirect_type::action::internal::sign_type;
        return {
                {"(123)",                testing_internal::make_unop_def(123)},
                {"(-123)",               testing_internal::make_unop_def(-123)},
                {"(0x123)",              testing_internal::make_unop_def(0x123)},
                {"(&+23)",               testing_internal::make_unop_def(testing_internal::make_unop_rel(+23),
                                                                         nullptr)},
                {"(&-0x123)",            testing_internal::make_unop_def(testing_internal::make_unop_rel(-0x123),
                                                                         nullptr)},
                {"(&-0x123.l)",          testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'))},
                {"(&-0x123.l+123)",      testing_internal::make_unop_def_with_direct_mask(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', 123)},
                {"(&-0x123.l~+123)",     testing_internal::make_unop_def_with_direct_mask(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', 123, true)},
                {"(-0x123.L/(123))",     testing_internal::make_unop_def_with_indirect_mask(
                        testing_internal::make_num(-0x123), sign_type('.', 'L'), '/', 123)},
                {"(-0x123.L~/(123))",    testing_internal::make_unop_def_with_indirect_mask(
                        testing_internal::make_num(-0x123), sign_type('.', 'L'), '/', 123, true)},
                {"(&-0x123.l+(123))",    testing_internal::make_unop_def_with_indirect_mask(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', 123)},
                {"(&-0x123.l+(-0x123))", testing_internal::make_unop_def_with_indirect_mask(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', -0x123)},
                {"(&-0x123+(-0x123))",   testing_internal::make_unop_def_with_indirect_mask(
                        testing_internal::make_unop_rel(-0x123), nullptr, '+', -0x123)},
        };
    }

    inline
    std::list< std::pair< std::string, std::shared_ptr< peg::magic::action::exp>> >
    make_offset_relative_indirect_exp() {
        using np_type::np_indirect_type::action::internal::sign_type;

        auto cases = make_offset_indirect_exp();
        for (auto &pair : cases) {
            pair.first = "&" + pair.first;
            pair.second = make_unop_rel(pair.second);
        }
        return cases;
    }
}

TEST(TestMagicPegBuilder, test_build_offset_indirect) { // NOLINT(cert-err58-cpp)
    using peg::magic::action::unop;
    using peg::magic::action::var;
    using np_type::np_indirect_type::action::internal::sign_type;

    std::cout << "Testing test_build_offset_indirect ..." << std::endl;
    auto cases = testing_internal::make_offset_indirect_exp();

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::np_indirect::offset_indirect >(pair.first);
        ASSERT_EQ(*st.stk.top(), *pair.second);
    }
}

TEST(TestMagicPegBuilder, test_build_offset_indirect_false) { // NOLINT(cert-err58-cpp)
    using peg::magic::action::unop;
    using peg::magic::action::var;
    using np_type::np_indirect_type::action::internal::sign_type;

    std::cout << "Testing test_build_offset_indirect_false ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::shared_ptr< peg::magic::action::exp>> >{
            {"(123)",             testing_internal::make_unop_rel(123)},
            {"(-123)",            testing_internal::make_unop_def(123)},
            {"(0x123)",           testing_internal::make_unop_def(testing_internal::make_unop_rel(0x123), nullptr)},
            {"(&+23)",            testing_internal::make_unop_def(+23)},
            {"(&-0x123)",         testing_internal::make_unop_def(testing_internal::make_unop_rel(0x123), nullptr)},
            {"(&-0x123,L)",       testing_internal::make_unop_def(
                    testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'))},
            {"(&-0x123.l+321)",   testing_internal::make_unop_def_with_direct_mask(
                    testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', 123)},
            {"(-0x123.L*(123))",  testing_internal::make_unop_def_with_indirect_mask(
                    testing_internal::make_num(-0x123), sign_type('.', 'L'), '/', 123)},
            {"(-0x123.l+(123))",  testing_internal::make_unop_def_with_indirect_mask(
                    testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', 123)},
            {"(&-0x123.l-0x123)", testing_internal::make_unop_def_with_indirect_mask(
                    testing_internal::make_unop_rel(-0x123), sign_type('.', 'l'), '+', -0x123)},
            {"(&-0x123-0x123)",   testing_internal::make_unop_def_with_indirect_mask(
                    testing_internal::make_unop_rel(-0x123), nullptr, '+', -0x123)},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::np_indirect::offset_indirect >(pair.first);
        ASSERT_NE(*st.stk.top(), *pair.second);
    }
}

TEST(TestMagicPegBuilder, test_build_offset) { // NOLINT(cert-err58-cpp)
    using peg::magic::action::exp;
    using peg::magic::action::unop;
    using peg::magic::action::var;
    using np_type::np_indirect_type::action::internal::sign_type;

    std::cout << "Testing test_build_offset ..." << std::endl;
    auto cases = testing_internal::make_offset_indirect_exp();
    cases.splice(cases.end(), testing_internal::make_offset_relative_indirect_exp());

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::offset >(pair.first);
        ASSERT_EQ(*st.stk.top(), *pair.second);
    }
}