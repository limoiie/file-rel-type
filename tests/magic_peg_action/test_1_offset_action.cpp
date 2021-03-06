//
// Created by ligen on 10/27/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg/magic_peg.h>
#include <magic_peg/magic_peg_action.hpp>

#include "../test_pegtl_helper.hpp"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;

#define PAIR(NUM) { #NUM, NUM }

namespace testing_internal
{
    using magic::ast::var;
    using magic::ast::exp;
    using magic::ast::num;
    using magic::ast::unop;
    using magic::ast::binop;

    //std::shared_ptr< exp > make_num(int64_t const n) {
    //    return num::builder::make_ptr(
    //            {FILE_QUAD, false},
    //            var::builder::make((uint64_t) n)
    //    );
    //}

    std::shared_ptr< exp > make_num_core(int const l, char const op, int const r,
                                         bool const inverse, bool const indir_op = false) {
        std::shared_ptr< exp > right = make_num< int64_t >(r);
        std::shared_ptr< exp > left = make_num< int64_t >(l);
        if (indir_op) {
            right = unop::builder::make_ptr('*', right, right->typ);
        }
        auto inner_typ = lift_type(left->typ, right->typ);
        std::shared_ptr< exp > inner = binop::builder::make_ptr(op, left, right, inner_typ);
        if (inverse)
            inner = unop::builder::make_ptr('~', inner, inner->typ);
        return inner;
    }

    std::shared_ptr< unop > make_unop_rel(int64_t const n) {
        auto inner = make_num< int64_t >(n);
        return unop::builder::make_ptr('&', inner, inner->typ);
    }

    std::shared_ptr< unop > make_unop_rel(std::shared_ptr< exp > const &inner) {
        return unop::builder::make_ptr('&', inner, inner->typ);
    }

    std::shared_ptr< unop > make_unop_def(int64_t const n) {
        auto inner = make_num< int64_t >(n);
        return unop::builder::make_ptr('*', inner, inner->typ);
    }

    std::shared_ptr< unop >
    make_unop_def(std::shared_ptr< exp > const &inner, std::shared_ptr< val_sign_typ_t > const &typ) {
        return unop::builder::make_ptr('*', inner, typ ? *typ : val_sign_typ_t::default_());
    }

}

namespace testing_internal
{
    inline
    std::list< std::pair< std::string, std::shared_ptr< magic::peg::action::exp>> >
    make_offset_indirect_exp() {
        using np_type::action::abbrev::internal::sign_type;
        return {
                {"(123)",                testing_internal::make_unop_def(123)},
                {"(-123)",               testing_internal::make_unop_def(-123)},
                {"(0x123)",              testing_internal::make_unop_def(0x123)},
                {"(&+23)",               testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(+23), nullptr
                )},
                {"(&-0x123)",            testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(-0x123), nullptr
                )},
                {"(&-0x123.l)",          testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(-0x123), sign_type('.', 'l')
                )},
                {"(&-0x123.l+123)",      testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(
                                testing_internal::make_num_core(-0x123, '+', 123, false)
                        ),
                        sign_type('.', 'l')
                )},
                {"(&-0x123.l~+123)",     testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(
                                testing_internal::make_num_core(-0x123, '+', 123, true)
                        ),
                        sign_type('.', 'l')
                )},
                {"(-0x123.L/(123))",     testing_internal::make_unop_def(
                        testing_internal::make_num_core(-0x123, '/', 123, false, true),
                        sign_type('.', 'L')
                )},
                {"(-0x123.L~/(123))",    testing_internal::make_unop_def(
                        testing_internal::make_num_core(-0x123, '/', 123, true, true),
                        sign_type('.', 'L')
                )},
                {"(&-0x123.l+(123))",    testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(
                                testing_internal::make_num_core(-0x123, '+', 123, false, true)
                        ),
                        sign_type('.', 'l')
                )},
                {"(&-0x123.l+(-0x123))", testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(
                                testing_internal::make_num_core(-0x123, '+', -0x123, false, true)
                        ),
                        sign_type('.', 'l')
                )},
                {"(&-0x123+(-0x123))",   testing_internal::make_unop_def(
                        testing_internal::make_unop_rel(
                                testing_internal::make_num_core(-0x123, '+', -0x123, false, true)
                        ),
                        nullptr
                )},
        };
    }

    inline
    std::list< std::pair< std::string, std::shared_ptr< magic::peg::action::exp>> >
    make_offset_relative_indirect_exp() {
        using np_type::action::abbrev::internal::sign_type;

        auto cases = make_offset_indirect_exp();
        for (auto &pair : cases) {
            pair.first = "&" + pair.first;
            pair.second = make_unop_rel(pair.second);
        }
        return cases;
    }
}

TEST(TestMagicPegAction, test_build_offset_general) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_offset_general ..." << std::endl;
    auto cases = testing_internal::make_offset_indirect_exp();

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::exp >(pair.first);
        auto const &left = *st.stk_exp.top();
        auto const &right = *pair.second;
        std::cout << "    l: " << left.to_string() << std::endl;
        std::cout << "    r: " << right.to_string() << std::endl;
        ASSERT_EQ(*st.stk_exp.top(), *pair.second);
    }
}

TEST(TestMagicPegAction, test_build_offset) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_build_offset ..." << std::endl;
    auto cases = testing_internal::make_offset_indirect_exp();
    cases.splice(cases.end(), testing_internal::make_offset_relative_indirect_exp());

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto st = parse_magic< np_offset::exp >(pair.first);
        std::cout << "    Expect: " << pair.second->to_string() << std::endl;
        std::cout << "    Output: " << st.stk_exp.top()->to_string() << std::endl;
        ASSERT_EQ(*st.stk_exp.top(), *pair.second);
    }
}