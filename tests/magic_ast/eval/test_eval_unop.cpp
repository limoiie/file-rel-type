//
// Created by ligen on 11/20/2020.
//

#include <gtest/gtest.h>

#include "magic_ast/eval/eval_unop.h"
#include "make_int_type.hpp"

using magic::ast::val;
using magic::ast::var;

namespace testing_internal
{
    template< class Int >
    std::pair< std::tuple< val, val_sign_typ_t, std::string >, val >
    create_case_for_def(std::string const &typ_string, std::string const &mem, Int const offset, Int const v) {
        auto typ = parse_sign_typ(typ_string);

        auto inner_typ = val_sign_typ_t{FILE_LONG, typ.is_unsigned};
        auto inner = val(inner_typ, var::builder::make((make_uint_t< sizeof(Int) >) offset));

        auto out_typ = val_sign_typ_t{erase_endian(typ.typ), typ.is_unsigned};
        auto out = val(out_typ, var::builder::make((make_uint_t< sizeof(Int) >) v));

        return {{inner, typ, std::string(offset, 'x') + mem}, out};
    }

    template< class Int1, class Int2 >
    std::pair< std::tuple< val, p_ctx_t >, val >
    create_case_for_rel(Int1 prev_v, std::string const &prev_typ_s,
                        Int2 delta_v, std::string const &delta_typ_s,
                        std::string const &sum_typ_s) {
        auto out_val = prev_v + delta_v;

        auto prev_typ = parse_sign_typ(prev_typ_s);
        auto delta_typ = parse_sign_typ(delta_typ_s);
        auto out_typ = parse_sign_typ(sum_typ_s);

        auto prev = std::make_shared< val >(prev_typ, var::builder::make((make_uint_t< sizeof(Int1) >) prev_v));
        auto delta = val(delta_typ, var::builder::make((make_uint_t< sizeof(Int2) >) delta_v));
        auto out = val(out_typ, var::builder::make((std::make_unsigned_t< decltype(out_val) >) out_val));

        auto stream = std::istringstream("");
        auto ctx = std::make_shared< ctx_exp_t >(stream);

        ctx->offset_history.push(prev);
        return {{delta, ctx}, out};
    }

    template< class Int >
    std::pair< val, val >
    create_case_for_inv(Int const v, std::string const& typ_str) {
        auto typ = parse_sign_typ(typ_str);
        return {
                val{typ, var::builder::make((std::make_unsigned_t< Int >) v)},
                val{typ, var::builder::make((std::make_unsigned_t< Int >) ~v)}
        };
    }
}

TEST(TestEvalUnOp, test_eval_unop_def) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::tuple< val, val_sign_typ_t, std::string >, val>>{
            testing_internal::create_case_for_def("short", "\x02\x01", 0, 0x0102),
            testing_internal::create_case_for_def("short", "\x02\x01", 10, 0x0102),
            testing_internal::create_case_for_def("beshort", "\x01\x02", 20, 0x0102),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << std::get< 0 >(pair.first).to_string() << std::endl;

        auto offset = std::get< 0 >(pair.first);
        auto stream = std::istringstream(std::get< 2 >(pair.first));
        auto ctx = std::make_shared< ctx_exp_t >(stream);
        auto out = compute_unop('*', offset, std::get< 1 >(pair.first), ctx);

        ASSERT_EQ(*out, pair.second);

        // after dereference, the offset should be recorded into the field current_offset
        ASSERT_EQ(*ctx->current_offset, offset);
    }
}

TEST(TestEvalUnOp, test_eval_unop_rel) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::tuple< val, p_ctx_t >, val>>{
            testing_internal::create_case_for_rel< int16_t, int32_t >(0, "short", 1, "long", "long"),
            testing_internal::create_case_for_rel< uint16_t, int32_t >(12, "ushort", -2, "long", "long"),
            testing_internal::create_case_for_rel< int16_t, uint64_t >(-10, "short", 2, "uquad", "quad"),
    };

    for (auto const &pair : cases) {
        auto v = std::get< 0 >(pair.first);
        auto const &ctx = std::get< 1 >(pair.first);
        auto expect = pair.second;

        std::cout << "  Case: &(" << ctx->offset_history.top()->to_string() << ")"
                  << v.to_string() << " -> " << expect.to_string() << std::endl;

        auto out = compute_unop('&', v, v.typ, ctx);
        ASSERT_EQ(*out, expect);
    }
}

TEST(TestEvalUnOp, test_eval_unop_inv) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< val, val>>{
            testing_internal::create_case_for_inv<int16_t>(20, "short"),
            testing_internal::create_case_for_inv<int32_t>(INT32_MIN, "long"),
            testing_internal::create_case_for_inv<uint32_t>(10, "ulong"),
            testing_internal::create_case_for_inv<int64_t>(20, "quad"),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: ~" << pair.first.to_string() << " -> " << pair.second.to_string() << std::endl;

        auto out = compute_unop('~', pair.first, pair.first.typ, nullptr);
        ASSERT_EQ(*out, pair.second);
    }
}