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
using np_type::np_indirect_type::offset_indirect_type;
using np_type::np_indirect_type::action::action_to_deref_typ;

TEST(TestMagicPegPredefineAction, test_to_deref_typ) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_deref_typ ..." << std::endl;
    auto cases = std::list<std::pair<std::string , val_typ_t>>{
            {".l", {FILE_LELONG, true}},
            {".L", {FILE_BELONG, true}},
            {",m", {FILE_MELONG, false}},
    };
    
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        np_type::action::state_to_deref_typ st;

        parse< offset_indirect_type, action_to_deref_typ >(in, st);
        ASSERT_EQ(st.typ, pair.second);
    }

}

namespace testing_internal
{
    struct rule_dump
            : seq<
                    one< '{' >,
                    offset_indirect_type,
                    one< '}' >
            > {
    };

    template< class Rule >
    struct action_dump
            : maybe_nothing {
    };

    template<>
    struct action_dump<rule_dump>
            : np_type::np_indirect_type::to_typ_switcher {

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_deref_typ &s, val_typ_t &st) {
            st = s.typ;
        }

    };

}

TEST(TestMagicPegPredefineAction, test_to_typ_switcher) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_to_typ_switcher ..." << std::endl;
    auto cases = std::list<std::pair<std::string , val_typ_t>>{
            {"{.l}", {FILE_LELONG, true}},
            {"{.L}", {FILE_BELONG, true}},
            {"{,m}", {FILE_MELONG, false}},
    };
    
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        val_typ_t st = val_typ_t::default_();

        parse< testing_internal::rule_dump, testing_internal::action_dump >(in, st);
        ASSERT_EQ(st, pair.second);
    }
}