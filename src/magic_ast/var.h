//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAR_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAR_H_

#include <memory>
#include <stack>
#include <utility>
#include <string_view>

constexpr unsigned MAX_STRING_LEN = 96;

namespace magic::ast
{
    union var {
        uint8_t b;
        uint16_t h;
        uint32_t l;
        uint64_t q;

        float_t f;
        double_t d;

        char s[MAX_STRING_LEN];

        uint8_t hs[2];
        uint8_t hl[4];
        uint8_t hq[8];

        struct builder {

            static var make(uint8_t val, var v = {});

            static var make(uint16_t val, var v = {});

            static var make(uint32_t val, var v = {});

            static var make(uint64_t val, var v = {});

            static var make(float val, var v = {});

            static var make(double val, var v = {});

            static var make(std::string_view val, var v = {});

            template< class T >
            static std::shared_ptr< var > make_ptr(T v) {
                return std::make_shared< var >(make(v));
            }

        };

    private:
        var() = default;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_VAR_H_
