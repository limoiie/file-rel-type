//
// Created by ligen on 11/21/2020.
//

#include <gtest/gtest.h>

#include "magic_peg/magic_peg_action.hpp"

using namespace magic::peg::action;

namespace testing_internal
{
    struct desc_type_code
            : seq<
                    np_desc::desc,
                    if_then_else<
                            np_desc::_,
                            np_code::code,
                            success
                    >
            > {

    };

    std::pair< std::string, std::pair< std::string, unsigned>>
    create_case(std::string const& desc, unsigned const type_code) {
        if (type_code == 0) {
            return {desc, {desc, type_code}};
        }
        return {desc + "|" + std::to_string(type_code), {desc, type_code}};
    }
}

TEST(TestMagicPeg, test_desc_type_code) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::pair< std::string, unsigned>> >{
            testing_internal::create_case("this is a description", 10),
            testing_internal::create_case("this is a description", 0),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        magic::peg::action::state_magic_build st;
        memory_input in(pair.first, __FUNCTION__);

        parse< contrib::exact< testing_internal::desc_type_code >, action_magic >(in, st);
        ASSERT_EQ(st.description, pair.second.first);
        ASSERT_EQ(st.type_code, pair.second.second);
    }
}