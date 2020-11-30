//
// Created by ligen on 11/6/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg/magic_peg.h>

#include "test_pegtl_helper.hpp"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace np_relation;

TEST(TestMagicPegPredefine, test_format_str_typ) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_format_str_typ ..." << std::endl;
    auto cases = std::list< std::pair< std::string, bool>>{
            {"string",  true},
            {"ustring", false},
            {"long",    false}
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with< np_type::formal::formal_str_typ >(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestMagicPegPredefine, test_format_num_typ) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_format_num_typ ..." << std::endl;
    auto cases = std::list< std::pair< std::string, bool>>{
            {"long",   true},
            {"ulong",  true},
            {"use",    false},
            {"string", false}
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with< np_type::formal::formal_num_typ >(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}