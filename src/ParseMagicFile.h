//
// Created by ligen on 10/24/2020.
//

#ifndef FILE_REL_TYPE_PARSEMAGICFILE_H
#define FILE_REL_TYPE_PARSEMAGICFILE_H


#include <filesystem>

enum class err_parse_t {
    SUCCESS,
};

class ParseMagicFile {
public:
    err_parse_t parse_file(std::filesystem::path const& file);

};


#endif //FILE_REL_TYPE_PARSEMAGICFILE_H
