//
// Created by ligen on 10/26/2020.
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

namespace type_whole
{
    bool is_unsigned(std::string const &str) {
        using namespace np_type::formal;
        np_type::action::formal::state_to_deref_typ st;
        memory_input in(str, __FUNCTION__);
        parse< exact< sor<
                formal_str_typ,
                formal_num_typ,
                formal_non_typ
        > > >(in, st);
        return st.typ.is_unsigned;
    }

    TEST(TestMagicPeg, test_rough_type) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_rough_type ..." << std::endl;
        auto cases = std::vector< std::pair< std::string, std::tuple< bool, bool>> >{
                {"bestring16",  {true,  false}},
                {"bestring",    {false, false}},
                {"16bestring",  {false, false}},
                {"bestring16t", {false, false}},
                {"ubestring16", {false, false}},
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

            ASSERT_EQ(is_valid, std::get< 0 >(pair.second));
            ASSERT_EQ(is_unsigned, std::get< 1 >(pair.second));
        }
    }

}

namespace test_type_mask
{
    TEST(TestMagicPeg, test_str_type_mask) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_str_type_mask ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {"/100wc",  true},
                {"/100w/c", true},
        };

        for (auto const &pair : cases) {
            auto const out = match_with< exact< ::np_relation::str_mask>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

    TEST(TestMagicPeg, test_num_type_mask) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_num_type_mask ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {"&100", true},
                {"+100", true},
        };

        for (auto const &pair : cases) {
            auto const out = match_with< exact< ::np_relation::num_mask>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_offset
{

    TEST(TestMagicPeg, test_magic_offset_new) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_offset_new ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
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
                {"&&10",            true},
                {"(9.b+19)",        true},
                {"(9b+19)",         false},
                {"(&-8.l)",         true}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto const out = match_with< exact< np_offset::exp > >(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_typ_relation
{
    TEST(TestMagicPeg, test_magic_relation_str) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_relation_str ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {R"(\xae\xaf)",     true},
                {R"(\0\1\2\7)",     true},
                {R"(\01\12\2\1)",   true},
                {R"(\0\1\013\17)",  true},
                {R"(A\ Text)",      true},
                {R"(A\ Text\\)",    true},
                {R"(\x1be\ \xaf)",  true},
                {R"(\0\1\2013\17)", true},
                {R"(zz Text)",      false},
                {R"(a\hzText)",     false},
                {R"(\hzText)",      false},
                {R"(\a zText)",     false},
                {R"(Text\)",        false},
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto out = match_with< exact< _exp_str>>(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

    TEST(TestMagicPeg, test_magic_typ_relation) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_typ_relation ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {"string this-is-a-test",         true},
                {"string this-is\\ a\\ test",     true},
                {"string/r/W this-is\\ra-test",   true},
                {"string/rW this-is-a-test",      true},
                {"string/600/r/W this-is-a-test", true},
                {"long/600 100",                  true},
                {"ulong+600 100",                 true},
                {"ulong~-600 100",                true},
                {"ulong~--600 20",                true},
                {"long/600/r/W this-is-a-test",   false},
                {"long/600 this-is-a-test",       false},
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto out = match_with< exact< contrib::switcher<
                    np_deref::nan_typ, seq< opt< np_deref::str_mask >, ___, np_relation::str_mask >,
                    np_deref::num_typ, seq< opt< np_deref::num_mask >, ___, np_relation::num_mask >
            > > >(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }
}

namespace test_description_and_type_code
{
    struct full_desc_and_type_code
            : must<
                    np_desc::desc,
                    opt< np_desc::_, np_code::code >,
                    tao::pegtl::eof
            > {
    };

    TEST(TestMagicPeg, test_magic_description_and_type_code) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_description_and_type_code ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {"this is a description",    true},
                {"x|0",                      true},
                {"this is a description|10", true},
                {"|10",                      true},
                {"",                         true}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto const out = match_with< full_desc_and_type_code >(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }

}

namespace test_lines
{
    TEST(TestMagicPeg, test_lines) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {"# this is a test",     true},
                {"! this is a strength", true},
                {"",                     true},
                {">>0 string x desc",    true},
                {">>",                   false},
                {"?",                    false},
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            memory_input in(pair.first, __FUNCTION__);
            auto out = parse< seq< ::line, tao::pegtl::eof > >(in);
            ASSERT_EQ(out, pair.second);
        }
    }
}

namespace test_magic_line
{
    TEST(TestMagicPeg, test_magic_line) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing test_magic_line ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {">3\tuleshort\tx\t\t\\b, version 0x%x|3031",                    true},
                {">6\tubyte\t\t>0",                                              true},
                {">0x24\t\tstring\t\t>\\0\tmusician: \"%s\"",                    true},
                {">>>>0x4D\tbeshort\t\t0x000\t(2GDM v",                          true},
                {">>>(16.s)\tulelong\t\t>0\t\\b, at 0x%x",                       true},
                {">>>>(16.s+4)\tulelong\t\t>0\t%u bytes",                        true},
                {">>>>>(&-8.l)\tstring\t\tRIFF",                                 true},
                {">>>>(0x3c.l+0xf7)\tbyte\t\tx",                                 true},
                {"0\tstring\t4OP\\x1a\t\tIBK instrument data, 4 operators",      true},
                {">18\tlelong\t\t^02\n>>18\tlelong\t\t&01\t\tstatic object,|30", false}
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;

            auto out = match_with< exact< magic_line > >(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }
}

namespace test_magic_file
{
    TEST(TestMagicPeg, test_magic_file) { // NOLINT(cert-err58-cpp)
        std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
        auto cases = std::list< std::pair< std::string, bool>>{
                {
                        "0\tstring/b\tKCF\t\tFreeDOS KEYBoard Layout collection|3031\n"
                        "# only version=0x100 found\n"
                        ">3\tuleshort\tx\t\t\\b, version 0x%x|3031\n"
                        "# length of string containing author,info and special characters\n"
                        ">6\tubyte\t\t>0",
                        true
                },
                {
                        "#----\n"
                        "\n"
                        "\n"
                        " ",
                        true
                },
                {
                        "#----\n"
                        "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                        "!2345678901234567890123456789012",
                        true
                },
                {
                        "#--------------------------------------------\n"
                        "# $File$\n"
                        "# adi: file(1) magic for ADi's objects\n"
                        "# From Gregory McGarry <g.mcgarry@ieee.org>\n"
                        "#\n"
                        "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                        ">18\tlelong\t\t&02\t\texecutable,|29\n"
                        ">18\tlelong\t\t^02\n"
                        ">>18\tlelong\t\t&01\t\tstatic object,|30\n"
                        ">>18\tlelong\t\t^01\t\trelocatable object,|31\n"
                        ">18\tlelong\t\t&010\t\tstripped\n"
                        ">18\tlelong\t\t^010\t\tnot stripped\n"
                        "#----",
                        true
                },
                {
                        "#--------\n"
                        "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                        "fuck you\n",
                        false
                }
        };

        for (auto const &pair : cases) {
            std::cout << "  Case: " << std::endl << pair.first << std::endl;

            auto out = match_with< contrib::exact< magic_file > >(pair.first);
            ASSERT_EQ(out, pair.second);
        }
    }
}