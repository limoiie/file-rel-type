//
// Created by ligen on 10/30/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg_predefine.h>

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace tao::pegtl::helper::integer;
using namespace tao::pegtl::helper::integer::action;

#define PAIR(NUM) { #NUM, NUM }

TEST(TestIntegerAction, test_to_decimal_unsigned_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_decimal_unsigned_decimal ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int>>{
            PAIR(123),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        state_to_decimal< unsigned > st;

        parse< unsigned_decimal, trait_action_to_decimal< unsigned >::action_to_decimal >(in, st);
        ASSERT_EQ(st.val, pair.second);
    }
}

TEST(TestIntegerAction, test_to_decimal_signed_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_decimal_signed_decimal ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int>>{
            PAIR(-123)
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        state_to_decimal< signed > st;

        parse< signed_decimal, trait_action_to_decimal< signed >::action_to_decimal >(in, st);
        ASSERT_EQ(st.val, pair.second);
    }
}

TEST(TestIntegerAction, test_to_decimal_unsigned_0x_hex) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_decimal_unsigned_0x_hex ..." << std::endl;
    auto cases = std::list< std::pair< std::string, unsigned>>{
            PAIR(0x123),
            PAIR(0xa),
            PAIR(0xf),
            PAIR(0xdeadbeef),
            PAIR(0xDEADBEEF),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        state_to_decimal< unsigned > st;

        parse< unsigned_0x_hex, trait_action_to_decimal< unsigned >::action_to_decimal >(in, st);
        ASSERT_EQ(st.val, pair.second);
    }
}

TEST(TestIntegerAction, test_decimal_signed_0x_hex) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_decimal_signed_0x_hex ..." << std::endl;
    auto cases = std::list< std::pair< std::string, signed>>{
            PAIR(0x123),
            PAIR(0xabc),
            PAIR(0x1ab),
            PAIR(0x3ff),
            PAIR(+0x123),
            PAIR(-0x123afcd),
            PAIR(-0xfcd123),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        state_to_decimal< signed > st;

        parse< signed_0x_hex, trait_action_to_decimal< signed >::action_to_decimal >(in, st);
        ASSERT_EQ(st.val, pair.second);
    }
}
