//
// Created by ligen on 11/6/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg/magic_peg.h>
#include <magic_peg/magic_peg_op_typ.h>
#include <magic_peg/magic_peg_action.hpp>

#include <utils/tao/pegtl/switcher.hpp>

#include "../../../test_pegtl_helper.hpp"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;

TEST(TestPegtlContribSwitcher, test_switcher) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_switcher ..." << std::endl;
    auto cases = std::list< std::pair< std::string, bool>>{
            {"abc", true},
            {"def", true},
            {"ghi", true},
            {"acd", false},
            {"adg", false},
            {"abd", false},
            {"",    false},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with< exact< switcher<
                one< 'a' >, seq< one< 'b' >, one< 'c' > >,
                one< 'd' >, seq< one< 'e' >, one< 'f' > >,
                one< 'g' >, seq< one< 'h' >, one< 'i' > >
        >> >(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}