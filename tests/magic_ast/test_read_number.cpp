//
// Created by ligen on 11/17/2020.
//

#include <gtest/gtest.h>

#include <magic_ast/eval/read_number.hpp>

namespace testing_internal
{
    template< class T >
    void test(std::list< std::pair< std::string, T>> const &cases) {
        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;
            auto out = read_bigger_endian< T >((magic::ast::var const *) pair.first.c_str());
            ASSERT_EQ(out, pair.second);
        }
    }

    template< class T >
    void test_little_endian(std::list< std::pair< std::string, T>> const &cases) {
        for (auto const &pair : cases) {
            std::cout << "  Case: " << pair.first << std::endl;
            auto out = read_little_endian< T >((magic::ast::var const *) pair.first.c_str());
            ASSERT_EQ(out, pair.second);
        }
    }

}

TEST(TestReadNumber, test_read_big_end_uint32_t) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_read_big_end_uint32_t ..." << std::endl;
    auto cases = std::list< std::pair< std::string, uint32_t>>{
            {"\x78\x56\x34\x12", 0x78563412},
    };

    testing_internal::test(cases);
}

TEST(TestReadNumber, test_read_big_end_int32_t) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_read_big_end_int32_t ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int32_t>>{
            {"\xEA\xE9\xE8\xE7", 0xEAE9E8E7},
    };

    testing_internal::test(cases);
}

TEST(TestReadNumber, test_read_little_end_uint32_t) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_read_little_end_uint32_t ..." << std::endl;
    auto cases = std::list< std::pair< std::string, uint32_t>>{
            {"\x78\x56\x34\x12", 0x12345678},
    };

    testing_internal::test_little_endian(cases);
}

TEST(TestReadNumber, test_read_little_end_int32_t) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_read_little_end_int32_t ..." << std::endl;
    auto cases = std::list< std::pair< std::string, int32_t>>{
            {"\x78\x56\x34\x12", 0x12345678},
    };

    testing_internal::test_little_endian(cases);
}
