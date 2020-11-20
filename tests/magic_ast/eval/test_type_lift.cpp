//
// Created by ligen on 11/20/2020.
//

#include <gtest/gtest.h>

#include "magic_ast/eval/type_lift_val.h"
#include "val_sign_typ.h"

TEST(TestTypeLift, test_lift_type) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" <<  __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list<std::pair<std::pair<std::string, std::string>, std::string>>{
            {{"ushort", "long"}, "long"},
            {{"short", "ulong"}, "long"},
            {{"ushort", "ulong"}, "ulong"},
            {{"long", "ushort"}, "long"},
            {{"ulong", "short"}, "long"},
            {{"ulong", "ushort"}, "ulong"},
            {{"uquad", "quad"}, "quad"},
            {{"uquad", "uquad"}, "uquad"},
    };

    for (auto const& pair : cases) {
        std::cout << "  Case: " << pair.first.first << " <-?-> " << pair.first.second << std::endl;

        auto l = parse_sign_typ(pair.first.first);
        auto r = parse_sign_typ(pair.first.second);
        auto expect = parse_sign_typ(pair.second);

        auto out = lift_type(l, r);
        ASSERT_EQ(out, expect);
    }
}
