//
// Created by ligen on 11/11/2020.
//

#include <gtest/gtest.h>

#include "pegtl-helper/change_action_and_states_in_place.hpp"

using namespace tao::pegtl;

namespace testing_internal
{
    struct rule
            : one< 'a' > {

    };

    struct state {
        int x;
    };

    template< class Rule >
    struct act : maybe_nothing {
    };

    template<>
    struct act< rule > {
        static void apply0(state &st) {
            st.x = 0x666;
        }
    };

    struct rule_double
            : seq< rule, rule > {
    };

    template< class Rule >
    struct act_two
            : maybe_nothing {
    };

    template<>
    struct act_two< rule_double >
            : change_action_and_states_in_place<act, state> {

        template<class ParseInput>
        static void success(ParseInput& in, state &new_st, int& st) {
            st = new_st.x;
        }

        static void apply0(int& x) {
            std::cout << "oh, year~" << std::endl;
        }
    };

}

TEST(TestPegtlHelper, test_change_action_and_states_in_place) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_change_action_and_states_in_place ..." << std::endl;

    int x = 0;
    memory_input in("aa", __FUNCTION__ );
    if (!parse<testing_internal::rule_double, testing_internal::act_two>(in, x)) {
        std::cout << "oh no, failed!" << std::endl;
    }

    ASSERT_EQ(x, 0x666);
}