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

template< class Int, class Rule >
void test_pattern(std::list<std::pair<std::string, Int>> const& cases) {
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        state_to_decimal< Int > st;

        parse< Rule, trait_action_to_decimal< Int >::template action_to_decimal >(in, st);
        ASSERT_EQ(st.val, pair.second);
    }

}

TEST(TestIntegerAction, test_to_decimal_unsigned_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_decimal_unsigned_decimal ..." << std::endl;
    auto cases = std::list< std::pair< std::string, unsigned>>{
            PAIR(123),
    };

    test_pattern< unsigned, unsigned_decimal >(cases);
}

TEST(TestIntegerAction, test_to_decimal_signed_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_decimal_signed_decimal ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int>>{
            PAIR(-123)
    };

    test_pattern< signed, signed_decimal >(cases);
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

    test_pattern< unsigned, unsigned_0x_hex >(cases);
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

    test_pattern< signed, signed_0x_hex >(cases);
}

TEST(TestIntegerAction, test_decimal_unsigned_integer) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_decimal_unsigned_integer ..." << std::endl;
    auto cases = std::list<std::pair<std::string , unsigned>>{
            PAIR(0x123),
            PAIR(0xDEADBEEF),
            PAIR(123),
            PAIR(1023)
    };

    test_pattern< unsigned, unsigned_integer >(cases);
}

TEST(TestIntegerAction, test_decimal_signed_integer) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_decimal_signed_integer ..." << std::endl;
    auto cases = std::list<std::pair<std::string , signed>>{
            PAIR(+0),
            PAIR(-123),
            PAIR(+123098123),
            PAIR(0x123),
            PAIR(-0x123),
            PAIR(+0x123),
    };

    test_pattern< signed, signed_integer >(cases);
}
