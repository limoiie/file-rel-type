//
// Created by ligen on 12/2/2020.
//

#ifndef FILE_REL_TYPE_TESTS_DOMAIN_PATH_H_
#define FILE_REL_TYPE_TESTS_DOMAIN_PATH_H_

#include <filesystem>

constexpr auto PROJ_NAME = "file-rel-type";

inline
std::filesystem::path project_path() {
    auto curr_path = std::filesystem::current_path();
    auto curr_path_s = curr_path.u8string();
    auto const i = curr_path_s.find(PROJ_NAME);
    auto const start = 0;
    auto const end = i + std::string_view(PROJ_NAME).size();
    return curr_path_s.substr(start, end);
}

inline
std::filesystem::path test_resource_path() {
    return project_path() / "tests" / "resources";
}

#endif //FILE_REL_TYPE_TESTS_DOMAIN_PATH_H_
