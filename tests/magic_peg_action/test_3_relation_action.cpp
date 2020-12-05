//
// Created by ligen on 12/2/2020.
//

#include <gtest/gtest.h>
#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg/magic_peg_op_typ.h>
#include <magic_peg/magic_peg_action.hpp>

#include "../test_pegtl_helper.hpp"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace np_relation;

TEST(TestMagicPegAction, test_build_relation_str) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::string, std::string > >{
            {R"(a\ relation\ string)",         "a relation string"},
            {R"(a\r\ relation\t\ string)",     "a\r relation\t string"},
            {R"(a\b\ relation\n\ string)",     "a\b relation\n string"},
            {R"(a\ \xAB\ relation\t\ string)", "a \xAB relation\t string"},
            {R"(a\ \10\ relation\t\ string)",  "a \x08 relation\t string"},
            {R"(a\ \17\ relation\t\ string)",  "a \x0F relation\t string"},
            {R"(\xAB\xAC\xDF\x1D\x12)",        "\xAB\xAC\xDF\x1D\x12"},
            {R"(\001\002\010\020\007)",        "\x01\x02\x08\x10\x07"},
            {R"(\001\0\0\0\0)",                std::string("\x01\x00\x00\x00\x00", 5)},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = parse_magic_init_with_default_offset< ::string >(pair.first);
        auto str = std::dynamic_pointer_cast< magic::ast::num >(out.stk_exp.top());

        ASSERT_EQ(str->inner->data.s.string_view(), pair.second);
    }
}
