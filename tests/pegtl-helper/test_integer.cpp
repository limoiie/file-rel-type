//
// Created by ligen on 10/27/2020.
//

#include <iostream>

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/unescape.hpp>

#include <magic_peg.h>
#include <magic_peg_predefine.h>

#include <pegtl-helper/exact.hpp>

#include "../test_pegtl_helper.hpp"

using namespace tao::pegtl;
using namespace tao::pegtl::contrib;
using namespace tao::pegtl::helper::integer;

auto make_good_unsigned_decimal_cases() {
    return std::list<std::pair<std::string, bool>>{
            {"1", true},
            {"0", true},
            {"123", true},
            {"0123", true},
    };
}

auto make_good_signed_decimal_cases() {
    return std::list<std::pair<std::string, bool>>{
            {"+0", true},
            {"-1", true},
            {"-123435", true},
            {"+12390", true},
    };
}

auto make_good_unsigned_hex_cases() {
    return std::list<std::pair<std::string, bool>> {
            {"0x0", true},
            {"0xa", true},
            {"0xf", true},
            {"0xF", true},
            {"0x123", true},
            {"0x1abcdef", true},
            {"0x1ABCDEF", true},
            {"0xABCDEF1", true},
            {"0xaBcDeF123", true},
    };
}

auto make_good_signed_hex_cases() {
    return std::list<std::pair<std::string, bool>> {
            {"+0x0", true},
            {"-0xa", true},
            {"-0x1abcdef", true},
            {"+0x1ABCDEF", true},
            {"-0xABCDEF1", true},
            {"+0xaBcDeF123", true},
    };
}

auto make_good_unsigned_integer_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_decimal_cases());
    cases.splice(cases.end(), make_good_unsigned_hex_cases());
    return cases;
}

auto make_good_signed_integer_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_integer_cases());
    cases.splice(cases.end(), make_good_signed_decimal_cases());
    cases.splice(cases.end(), make_good_signed_hex_cases());
    return cases;
}

auto make_unsigned_decimal_cases() {
    auto cases = make_good_unsigned_decimal_cases();
    auto new_cases = std::list<std::pair<std::string, bool>>{
            {"0x123", false},
            {"1EF23", false},
            {"-123", false},
            {"+123", false},
    };
    cases.splice(cases.end(), new_cases);
    return cases;
}

auto make_signed_decimal_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_decimal_cases());
    cases.splice(cases.end(), make_good_signed_decimal_cases());
    cases.splice(cases.end(), {
            {"+0x123", false},
            {"-0b123", false},
            {"0x123", false},
            {"0b123", false},
            {"123x", false},
            {"123b", false},
    });
    return cases;
}

auto make_bad_hex_cases() {
    return std::list<std::pair<std::string, bool>>{
            {"123", false},
            {"0", false},
            {"0x123g", false},
            {"0b123", false},
            {"b123", false},
            {"123b", false},
            {"x123", false},
            {"x123 ", false}
    };
}

auto make_unsigned_hex_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_hex_cases());
    cases.splice(cases.end(), make_bad_hex_cases());
    cases.splice(cases.end(), {
            {"-123", false},
            {"-0x123", false},
            {"+0x123", false},
            {"0x123 ", false}
    });
    return cases;
}

auto make_signed_hex_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_hex_cases());
    cases.splice(cases.end(), make_good_signed_hex_cases());
    cases.splice(cases.end(), make_bad_hex_cases());
    cases.splice(cases.end(), {
            {"-1", false},
            {"+1", false},
            {"+0b123", false},
            {"-0b123", false},
            {"-0x123g", false},
            {"0x123 ", false}
    });
    return cases;
}

auto make_unsigned_integer_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_unsigned_integer_cases());
    cases.splice(cases.end(), {
            {"+1", false},
            {"-1", false},
            {"+0x123", false},
            {"-0x123", false},
            {"0b123", false},
            {"123ef", false},
            {"ef123", false},
            {"0ef123", false},
            {"123 ", false}
    });
    return cases;
}

auto make_signed_integer_cases() {
    auto cases = std::list<std::pair<std::string, bool>>();
    cases.splice(cases.end(), make_good_signed_integer_cases());
    cases.splice(cases.end(), {
            {"0b123", false},
            {"0x123 ", false},
    });
    return cases;
}

TEST(TestInteger, test_unsigned_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_unsigned_decimal ..." << std::endl;
    auto cases = make_unsigned_decimal_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;
    
        auto out = match_with<exact<unsigned_decimal>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestInteger, test_signed_decimal) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_signed_decimal ..." << std::endl;
    auto cases = make_signed_decimal_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with<exact<signed_decimal>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestInteger, test_unsigned_hex) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_unsigned_hex ..." << std::endl;
    auto cases = make_unsigned_hex_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with<exact<unsigned_hex_0x>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestInteger, test_signed_hex) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_signed_hex ..." << std::endl;
    auto cases = make_signed_hex_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with<exact<signed_hex_0x>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestInteger, test_unsigned_integer) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_unsigned_integer ..." << std::endl;
    auto cases = make_unsigned_integer_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with<exact<unsigned_integer>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}

TEST(TestInteger, test_signed_integer) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing test_signed_integer ..." << std::endl;
    auto cases = make_signed_integer_cases();
    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first << std::endl;

        auto out = match_with<exact<signed_integer>>(pair.first);
        ASSERT_EQ(out, pair.second);
    }
}