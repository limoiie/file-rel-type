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

TEST(TestMagicPegBuilder, test_build_number) { // NOLINT(cert-err58-cpp)
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

        auto st = peg::magic::action::offset_state{ INT_MIN };
        tao::pegtl::memory_input in(pair.first, __FUNCTION__);
        parse< number, peg::magic::action::action_magic >(in, st);
//        ASSERT_EQ(st.num, pair.second);
    }
}
