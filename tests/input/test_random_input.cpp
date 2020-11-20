//
// Created by ligen on 11/16/2020.
//

#include <iostream>
#include <string>

#include <gtest/gtest.h>

#include <input/random_buffer_input.hpp>
#include <input/random_istream_input.hpp>

namespace testing_internal
{
    std::string create_raw_input() {
        auto const n = 256;
        auto s = std::string(n, '\0');
        for (auto i = 0; i < n; ++i) {
            s[i] = i;
        }
        return s;
    }

    template< class buf_in >
    void test_case(buf_in &in, std::pair< int, bool > const &pair) {
        auto const ori_st = typename buf_in::input_state(in);
        auto const ret = pair.first >= 0 ? in.seek(pair.first) : in.seek(pair.first, std::ios_base::end);

        auto ensure_state = [&]() {
            // if failed to seek, then the state should be unchanged
            auto const cur_st = typename buf_in::input_state(in);
            ASSERT_EQ(ori_st, cur_st);
        };
        if (!ret) {
            ensure_state();
            return;
        }
        try {
            auto const res = in.require(1);
            ASSERT_EQ(res, pair.second);
            if (!res) {
                ensure_state();
            }
        } catch (std::overflow_error &err) {
            ensure_state();

            in.discard();
            auto const res = in.require(1);
            ASSERT_EQ(res, pair.second);
        }

        if (pair.second) {
            auto const expect = pair.first >= 0 ? pair.first : (256 + pair.first);
            ASSERT_EQ(*in.current(), (char) expect);
        }
    }

    std::list< std::pair< int, bool>> make_cases() {
        return std::list< std::pair< int, bool>>{
                {0,   true},
                {1,   true},
                {7,   true},
                {8,   true},
                {9,   true},
                {63,  true},
                {64,  true},
                {65,  true},
                {99,  true},
                {100, true},
                {101, true},
                {255, true},
                {256, false},
                {0,   true},
                {1,   true},
                {7,   true},
                {8,   true},
                {9,   true},
                {63,  true},
                {64,  true},
                {65,  true},
                {99,  true},
                {100, true},
                {101, true},
                {255, true},
                {256, false},
        };
    }

    std::list< std::pair< int, bool>> make_cases_off() {
        return std::list< std::pair< int, bool>>{
                {-1,   true},
                {-7,   true},
                {-8,   true},
                {-180, true},
                {-254, true},
                {-255, true},
                {-256, true},
                {-257, false},
                {-256, true},
                {-255, true},
        };
    }

    std::list< std::pair< int, bool>> make_cases_hybrid() {
        return std::list< std::pair< int, bool>>{
                {0,    true},
                {1,    true},
                {7,    true},
                {-7,   true},
                {8,    true},
                {9,    true},
                {-180, true},
                {63,   true},
                {64,   true},
                {65,   true},
                {99,   true},
                {100,  true},
                {101,  true},
                {255,  true},
                {256,  false},
        };
    }

    void test_cases(std::list< std::pair< int, bool>> const &cases) {
        using namespace testing_internal;
        using buf_in = random_buffer_input< random_istream_reader, 8 >;

        std::istringstream iss(create_raw_input());
        buf_in in(100, iss);

        for (auto &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;
            test_case(in, pair);
        }

    }
}

TEST(TestInput, test_random_buffer_input) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    testing_internal::test_cases(testing_internal::make_cases());
}

TEST(TestInput, test_random_buffer_input_off) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    testing_internal::test_cases(testing_internal::make_cases_off());
}

TEST(TestInput, test_random_buffer_input_hybrid) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    testing_internal::test_cases(testing_internal::make_cases_hybrid());
}

TEST(TestInput, test_random_buffer_input_rewind) { // NOLINT(cert-err58-cpp)
    using namespace testing_internal;
    std::istringstream iss(create_raw_input());
    random_buffer_input< random_istream_reader, 8 > in(100, iss);

    std::list< std::pair< int, bool>> cases = {
            {254, true},
            {255, true},
            {256, false},
            {257, false},
            {256, false},
            {255, true},
            {254, true},
    };

    for (auto pair : cases) {
        std::cout << "  testing " << pair.first << "..." << std::endl;
        test_case(in, pair);
    }

}

TEST(TestInput, test_random_istream_input_rewind) { // NOLINT(cert-err58-cpp)
    using namespace testing_internal;
    std::istringstream iss(create_raw_input());
    random_istream_input< 8 > in(iss, 100);

    std::list< std::pair< int, bool>> cases = {
            {254, true},
            {255, true},
            {256, false},
            {257, false},
            {256, false},
            {255, true},
            {254, true},
    };

    for (auto pair : cases) {
        std::cout << "  testing " << pair.first << "..." << std::endl;
        test_case(in, pair);
    }

}
