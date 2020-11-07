//
// Created by ligen on 11/3/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg_predefine.h>

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;

using np_type::action::state_to_deref_typ;
using np_type::np_indirect_type::abbrev_sign_typ;
using np_type::np_indirect_type::action::action_to_deref_typ;

TEST(TestMagicPegPredefineAction, test_to_deref_typ) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_deref_typ ..." << std::endl;
    auto cases = std::list< std::pair< std::string, val_typ_t>>{
            {".l", {FILE_LELONG, true}},
            {".L", {FILE_BELONG, true}},
            {",m", {FILE_MELONG, false}},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        np_type::action::state_to_deref_typ st;

        parse< abbrev_sign_typ, action_to_deref_typ >(in, st);
        ASSERT_EQ(st.typ, pair.second);
    }

}

namespace testing_internal
{
    struct rule_dump
            : seq<
                    one< '{' >,
                    abbrev_sign_typ,
                    one< '}' >
            > {
    };

    template< class Rule >
    struct [[maybe_unused]] action_dump
            : maybe_nothing {
    };

    template<>
    struct [[maybe_unused]] action_dump< rule_dump >
            : np_type::np_indirect_type::to_typ_switcher {

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_deref_typ &s, val_typ_t &st) {
            st = s.typ;
        }

    };

}

TEST(TestMagicPegPredefineAction, test_to_typ_switcher) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_typ_switcher ..." << std::endl;
    auto cases = std::list< std::pair< std::string, val_typ_t>>{
            {"{.l}", {FILE_LELONG, true}},
            {"{.L}", {FILE_BELONG, true}},
            {"{,m}", {FILE_MELONG, false}},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        val_typ_t st = val_typ_t::default_();

        parse< testing_internal::rule_dump, testing_internal::action_dump >(in, st);
        ASSERT_EQ(st, pair.second);
    }
}

namespace testing_internal
{
    using np_type::np_deref_type::formal_str_typ;
    using np_type::np_deref_type::formal_num_typ;

    struct rule_formal_dump
            : seq<
                    one< '{' >,
                    sor<
                            formal_str_typ,
                            formal_num_typ
                    >,
                    one< '}' >
            > {
    };

    template< class Rule >
    struct [[maybe_unused]] action_formal_dump
            : maybe_nothing {
    };

    template<>
    struct [[maybe_unused]] action_formal_dump< rule_formal_dump >
            : np_type::np_deref_type::to_typ_switcher {

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_deref_typ &s, val_typ_t &st) {
            st = s.typ;
        }

    };

}

TEST(TestMagicPegPredefineAction, test_formal_to_typ_switcher) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_formal_to_typ_switcher ..." << std::endl;
    auto cases = std::list< std::pair< std::string, val_typ_t>>{
            {"{bestring16}", {FILE_BESTRING16, false}},
            {"{bestring16}", {FILE_BESTRING16, false}},
            {"{quad}",       {FILE_QUAD,       false}},
            {"{ulong}",      {FILE_LONG,       true}},
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        val_typ_t st = val_typ_t::default_();

        parse< testing_internal::rule_formal_dump, testing_internal::action_formal_dump >(in, st);
        ASSERT_EQ(st, pair.second);
    }
}
