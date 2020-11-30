//
// Created by ligen on 11/18/2020.
//

#include <gtest/gtest.h>

#include "magic_ast/eval/eval_binop.h"
#include "magic_ast/elem/val_sign_typ.h"

using namespace magic::ast;

using exp_t = std::tuple< char, p_val_t, p_val_t >;

template< class Int >
auto create(val_typ_t typ, bool is_unsigned, Int v) {
    return std::make_shared< val >(
            val_sign_typ_t{typ, is_unsigned}, var::builder::make((std::make_unsigned_t< Int >) v)
    );
}

template< class Int >
std::pair< exp_t, p_val_t > create(char op, val_typ_t typ, Int lhs, Int rhs) {
    Int res = 0;
    switch (op) {
        case '&': res = lhs & rhs;
            break;
        case '|': res = lhs | rhs;
            break;
        case '^': res = lhs ^ rhs;
            break;
        case '+': res = lhs + rhs;
            break;
        case '-': res = lhs - rhs;
            break;
        case '*': res = lhs * rhs;
            break;
        case '/': res = lhs / rhs;
            break;
        case '%': res = lhs % rhs;
            break;
        case '<': res = lhs < rhs;
            break;
        case '>': res = lhs > rhs;
            break;
        case '=': res = lhs == rhs;
            break;
        case '!': res = lhs != rhs;
            break;
        default: break;
    }
    auto const is_unsigned = std::is_unsigned_v< Int >;
    return {
            {op, create< Int >(typ, is_unsigned, lhs), create< Int >(typ, is_unsigned, rhs)},
            create< Int >(typ, is_unsigned, res)
    };
}

TEST(TestEvalBinOp, test_eval_binop) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< exp_t, p_val_t>>{
            create< uint32_t >('+', FILE_LONG, 10, 20),
            create< uint32_t >('&', FILE_LONG, 10, 20),
            create< uint32_t >('=', FILE_QUAD, 10, 20),
            create< uint32_t >('=', FILE_LONG, 20, 20),
            create< int32_t >('+', FILE_LONG, 10, 20),
            create< int32_t >('-', FILE_LONG, INT32_MIN, INT32_MIN),
            create< int16_t >('-', FILE_SHORT, INT16_MAX, 20),
    };

    for (auto &pair : cases) {
        std::cout << "  Case: "
                  << std::get< 1 >(pair.first)->to_string() << std::get< 0 >(pair.first)
                  << std::get< 2 >(pair.first)->to_string() << std::endl;

        auto out = compute_binop(
                std::get< 0 >(pair.first),
                std::get< 1 >(pair.first),
                std::get< 2 >(pair.first)
        );
        ASSERT_EQ(*out, *pair.second);
    }
}
