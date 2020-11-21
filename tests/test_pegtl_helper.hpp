//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP
#define FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP

#include <string>
#include <iostream>
#include <exception>

#include <tao/pegtl.hpp>

template< class Pattern >
bool match_with(std::string const &content) {
    bool out;
    try {
        tao::pegtl::memory_input in(content, __FUNCTION__);
        out = tao::pegtl::parse< Pattern >(in);
    } catch (std::exception &e) {
        std::cout << "  -- Captured Exception: " << e.what() << std::endl;
        out = false;
    }
    return out;
}

#endif //FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP
