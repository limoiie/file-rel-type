//
// Created by ligen on 12/2/2020.
//

#ifndef FILE_REL_TYPE_TESTS_PRINT_MEMORY_H_
#define FILE_REL_TYPE_TESTS_PRINT_MEMORY_H_

#include <string>
#include <stdexcept>

inline
char to_hex_char(int const v) {
    if (v < 10) {
        return '0' + v;
    }
    if (v < 16) {
        return 'A' + v - 10;
    }
    throw std::runtime_error("Failed to call to_hex: Invalid char!");
}

inline
std::string to_hex_char2(int const c) {
    auto s = std::string();
    s.push_back(to_hex_char(((unsigned ) c >> 4u) & 0xFu));
    s.push_back(to_hex_char(((unsigned ) c >> 0u) & 0xFu));
    return s;
}

inline
std::string memory_to(std::string const& mem) {
    std::string s;
    for (auto c : mem) {
        s.append(to_hex_char2(c));
        s.push_back(' ');
    }
    return s;
}

inline
std::string memory_to_human_friendly(std::string const& mem) {
    std::string s;
    for (unsigned char c : mem) {
        if (c == '\\') {
            s.append(R"(\\)");
        } else if (isprint(c)) {
            s.push_back(c);
        } else {
            s.append(R"(\)");
            s.append(to_hex_char2(c));
        }
    }
    return s;
}

#endif //FILE_REL_TYPE_TESTS_PRINT_MEMORY_H_
