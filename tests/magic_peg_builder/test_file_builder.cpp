//
// Created by ligen on 11/21/2020.
//

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>

#include <magic_peg_action.hpp>

namespace testing_internal
{
    void print_tree_node(std::shared_ptr< tree_node< magic_entry > > const &node) { // NOLINT(misc-no-recursion)
        if (node == nullptr) return;
        std::cout << "  " << node->val->to_string() << std::endl;
        for (auto const &child : node->children) {
            print_tree_node(child);
        }
    }
}

TEST(TestMagicPeg, test_file_builder_only_matching) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::string, bool > >{
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
                    ">18\tlelong\t\t^010\t\tnot stripped",
                    true
            }
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        auto st = magic::peg::action::state_magic_build();
        auto out = parse< contrib::exact< magic_file >, magic::peg::action::action_magic >(in, st);

        testing_internal::print_tree_node(st.current_entry->root());
        ASSERT_EQ(out, pair.second);
    }
}