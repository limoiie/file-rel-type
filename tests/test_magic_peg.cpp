//
// Created by ligen on 10/26/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg.h>
#include <magic_peg_predefine.h>

#include "test_pegtl_helper.hpp"

using namespace tao::pegtl;

using namespace tao::pegtl::contrib;

//namespace unescape_act {
//    template< typename Rule >
//    struct [[maybe_unused]] my_action
//            : nothing< Rule > {
//    };
//
//    template<>
//    struct [[maybe_unused]] my_action< plain >
//            : tao::pegtl::unescape::append_all {};
//
//    template<>
//    struct [[maybe_unused]] my_action< escaped >
//            : tao::pegtl::unescape::unescape_c< escaped, '\'', '"', '?', '\\', '\a', '\b', '\f', '\n', '\r', '\t', '\v' > {
//    };
//
//    std::string unescape( const std::string& escaped )
//    {
//        std::string unescaped;
//        tao::pegtl::memory_input in( escaped, __FUNCTION__ );
//        tao::pegtl::parse< text, my_action >( in, unescaped );
//        return unescaped;
//    }
//
//}

//TEST(TestMagicPeg, test_text) { // NOLINT(cert-err58-cpp)
//    auto cases = std::vector<std::pair<std::string, std::string>> {
//            {R"(x\tx\?)", "x\tx\?"}
//    };
//
//    for (auto const& pair : cases) {
//        std::cout << "  Case: " << pair.first << std::endl;
//
//        auto const out = unescape_act::unescape(pair.first);
//        ASSERT_EQ(out, pair.second);
//    }
//}

namespace type_whole
{
    template<typename Rule>
    struct [[maybe_unused]] my_action
            : nothing<Rule> {
    };

    template<>
    struct [[maybe_unused]] my_action<np_type::np_deref_type::formal_sign> {
        template<typename ActionInput>
        static void apply(const ActionInput &in, bool &out) {
            out = true;
        }
    };

    bool is_unsigned(std::string const &str) {
        auto ret = false;
        tao::pegtl::memory_input in(str, __FUNCTION__);
        tao::pegtl::parse<exact<np_deref_type::formal_sign_typ>, my_action>(in, ret);
        return ret;
    }

    TEST(TestMagicPeg, test_rough_type) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_rough_type ..." << std::endl;
        auto cases = std::vector<std::pair<std::string, std::tuple<bool, bool>>>{
                {"bestring16",  {true,  false}},
                {"bestring",    {true,  false}},
                {"16bestring",  {false, false}},
                {"bestring16t", {false, false}},
                {"ubestring16", {true,  true}},
                {"Ubestring16", {true,  true}},
                {"use",         {true,  false}}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto is_valid = true, is_unsigned = false;
            try {
                is_unsigned = type_whole::is_unsigned(pair.first);
            } catch (std::exception &) {
                is_valid = false;
            }

            ASSERT_EQ(is_valid, std::get<0>(pair.second));
            ASSERT_EQ(is_unsigned, std::get<1>(pair.second));
        }
    }

}

namespace test_type_mask
{
    TEST(TestMagicPeg, test_type_mask) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_type_mask ..." << std::endl;
        auto cases = std::list<std::pair<std::string, bool>>{
                {"&100",    true},
                {"/100wc",  true},
                {"/100w/c", true},
        };

        for (auto const &pair : cases) {
            auto const out = match_with<exact<np_deref_mask::deref_mask>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_offset
{
    TEST(TestMagicPeg, test_magic_offset) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_offset ..." << std::endl;
        auto cases = std::list<std::pair<std::string, bool>>{
                {"&10",             true},
                {"&0x10",           true},
                {"&(10)",           true},
                {"&(0x10)",         true},
                {"&(10.l-10)",      true},
                {"&(0x10.l-10)",    true},
                {"&(10.l-0x10)",    true},
                {"&(&10.l-10)",     true},
                {"&(&10.l-(10))",   true},
                {"&(&0x10.l-(10))", true},
                {"&(&10.l-(0x10))", true},
                {"&&10",            false},
                {"(9.b+19)",        true},
                {"(9b+19)",         false},
                {"(&-8.l)",         true}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto const out = match_with<exact<np_offset::offset>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_relation
{
    TEST(TestMagicPeg, test_magic_relation) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_relation ..." << std::endl;
        auto cases = std::list<std::pair<std::string, bool>>{
                {R"(Text)",     true},
                {R"(\xae\xaf)", true},
                {R"(\0\1\2\7)", true},
                {R"(A\ Text)",  true},
                {R"(zz Text)",  false},
                {R"(a\hzText)", false},
                {R"(\hzText)",  false},
                {R"(\a zText)", false},
                {R"(Text\)",    false},
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto const out = match_with<exact<np_relation::relation>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_description_and_type_code
{
    struct full_desc_and_type_code
            : must<
                    np_description::description,
                    if_then_else<
                            np_type_code::type_code_start,
                            np_type_code::type_code,
                            success
                    >,
                    tao::pegtl::eof
            > {
    };

    TEST(TestMagicPeg, test_magic_description_and_type_code) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_description_and_type_code ..." << std::endl;
        auto cases = std::list<std::pair<std::string, bool>>{
                {"this is a description",    true},
                {"x|0",                      true},
                {"this is a description|10", true},
                {"|10",                      true},
                {"",                         true}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto const out = match_with<full_desc_and_type_code>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_magic_line
{
    TEST(TestMagicPeg, test_magic_line) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_line ..." << std::endl;
        auto cases = std::list<std::pair<std::string, bool>>{
                {">0x24\t\tstring\t\t>\\0\tmusician: \"%s\"", true},
                {">>>>0x4D\tbeshort\t\t0x000\t(2GDM v", true},
                {">>>(16.s)\tulelong\t\t>0\t\\b, at 0x%x", true},
                {">>>>(16.s+4)\tulelong\t\t>0\t%u bytes", true},
                {">>>>>(&-8.l)\tstring\t\tRIFF", true},
                {"0\tstring\t4OP\\x1a\t\tIBK instrument data, 4 operators", true},
        };

        for (auto const& pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto out = match_with<magic_line>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }
}
