//
// Created by ligen on 10/26/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg.h>

using namespace tao::pegtl;

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

namespace type_whole {
    struct whole_type :
            must< deref_type, tao::pegtl::eof > {
    };

    template< typename Rule >
    struct [[maybe_unused]] my_action
            : nothing< Rule > {
    };

    template<>
    struct [[maybe_unused]] my_action<deref_signed_type> {
        // Implement an apply() function that will be called by
        // the PEGTL every time tao::pegtl::any matches during
        // the parsing run.
        template< typename ActionInput >
        static void apply( const ActionInput& in, bool& out ) {
            // Get the portion of the original input that the
            // rule matched this time as string and append it
            // to the result string.
            out = true;
        }
    };

    bool is_signed(std::string const& str) {
        auto ret = false;
        tao::pegtl::memory_input in( str, __FUNCTION__ );
        tao::pegtl::parse< type_whole::whole_type, my_action >( in, ret );
        return ret;
    }

}

TEST(TestMagicPeg, test_rough_type) { // NOLINT(cert-err58-cpp)
    auto cases = std::vector<std::pair<std::string, std::tuple<bool, bool>>> {
            {"bestring16", {true, true}},
            {"bestring", {true, true}},
            {"16bestring", {false, false}},
            {"bestring16t", {false, false}},
            {"ubestring16", {true, false}},
            {"Ubestring16", {true, false}},
            {"use", {true, false}}
    };

    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto is_valid = true, is_signed = false;
        try {
            is_signed = type_whole::is_signed(pair.first);
        } catch (std::exception&) {
            is_valid = false;
        }

        ASSERT_EQ(is_valid, std::get<0>(pair.second));
        ASSERT_EQ(is_signed, std::get<1>(pair.second));
    }
}

namespace test_type_mask {
    struct full_type_mask
            : must< deref_mask, tao::pegtl::eof > {
    };

}

TEST(TestMagicPeg, test_type_mask) { // NOLINT(cert-err58-cpp)
    auto cases = std::list<std::pair<std::string, bool>> {
            {"&100", true},
            {"/100wc", true},
            {"/100w/c", true},
    };

    for (auto const& pair : cases) {
        tao::pegtl::memory_input in( pair.first, __FUNCTION__ );
        tao::pegtl::parse<test_type_mask::full_type_mask>( in );
    }
}

namespace test_offset {
    struct full_offset
            : must< offset, tao::pegtl::eof > {
    };
}

TEST(TestMagicPeg, test_magic_offset) { // NOLINT(cert-err58-cpp)
    auto cases = std::list<std::pair<std::string, bool>>{
            {"&10", true},
            {"&(10)", true},
            {"&(10.l-10)", true},
            {"&(&10.l-10)", true},
            {"&(&10.l-(10))", true},
            {"&&10", false},
            {"(9.b+19)", true},
            {"(9b+19)", false},
    };

    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        tao::pegtl::memory_input in( pair.first, __FUNCTION__ );
        bool ret;
        try {
            ret = tao::pegtl::parse<test_offset::full_offset>(in);
        } catch (std::exception&) {
            ret = false;
        }
        ASSERT_EQ(ret, pair.second);
    }
}

namespace test_relation {
    struct full_relation
            : seq< relation, tao::pegtl::eof > {
    };
}

TEST(TestMagicPeg, test_magic_relation) { // NOLINT(cert-err58-cpp)
    auto cases = std::list<std::pair<std::string, bool>>{
            {R"(Text)", true},
            {R"(\xae\xaf)", true},
            {R"(\0\1\2\7)", true},
            {R"(A\ Text)", true},
            {R"(zz Text)", false},
            {R"(a\hzText)", false},
            {R"(\hzText)", false},
            {R"(\a zText)", false},
            {R"(Text\)", false},
    };

    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        bool out;
        try {
            tao::pegtl::memory_input in(pair.first, __FUNCTION__);
            out = tao::pegtl::parse<test_relation::full_relation>(in);
        } catch (std::exception&) {
            out = false;
        }
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestMagicPeg, test_magic_peg) { // NOLINT(cert-err58-cpp)
    auto line = std::string(">(9.b+19) byte =2 8-bit linear signed");
}
