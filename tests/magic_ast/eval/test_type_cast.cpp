//
// Created by ligen on 11/18/2020.
//

#include <gtest/gtest.h>

#include <magic_ast/eval/type_cast.hpp>

#define CASE(FTyp, FVal, TTyp, TVal) { \
    {var::builder::make((std::make_unsigned_t<FTyp>) (FVal)), sizeof(FTyp), std::is_unsigned_v<FTyp>, #FTyp}, \
    {var::builder::make((std::make_unsigned_t<TTyp>) (TVal)), sizeof(TTyp), std::is_unsigned_v<TTyp>, #TTyp}, \
}

namespace testing_internal
{
    std::string to_str(var &v, std::size_t s, bool is_unsigned) {
        if (is_unsigned) {
            switch (s) {
                case 1: return std::to_string(caster_int< 1 >::get(v));
                case 2: return std::to_string(caster_int< 2 >::get(v));
                case 4: return std::to_string(caster_int< 4 >::get(v));
                case 8: return std::to_string(caster_int< 8 >::get(v));
                default: break;
            }
        } else {
            switch (s) {
                case 1: return std::to_string(caster_int< 1 >::get_<false>(v));
                case 2: return std::to_string(caster_int< 2 >::get_<false>(v));
                case 4: return std::to_string(caster_int< 4 >::get_<false>(v));
                case 8: return std::to_string(caster_int< 8 >::get_<false>(v));
                default: break;
            }
        }
        return "";
    }

    uint64_t get(var &v, std::size_t s) {
        switch (s) {
            case 1: return caster_int< 1 >::get(v);
            case 2: return caster_int< 2 >::get(v);
            case 4: return caster_int< 4 >::get(v);
            case 8: return caster_int< 8 >::get(v);
            default: break;
        }
        return 0;
    }

};

TEST(TestTypeCast, test_cast_from_low_to_hign) { // NOLINT(cert-err58-cpp)
    using var_s = std::tuple< var, std::size_t, bool, std::string >;
    using namespace testing_internal;

    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< var_s, var_s>>{
            CASE(uint8_t, 0, uint32_t, 0),
            CASE(uint8_t, UINT8_MAX, uint32_t, UINT8_MAX),
            CASE(uint32_t, 0, uint64_t, 0),
            CASE(uint32_t, UINT32_MAX, uint64_t, UINT32_MAX),

            CASE(int8_t, INT8_MIN, int64_t, INT8_MIN),
            CASE(int8_t, INT8_MAX, int64_t, INT8_MAX),

            CASE(int8_t, INT8_MIN, uint32_t, INT8_MIN),
            CASE(int8_t, INT8_MAX, uint32_t, INT8_MAX),
            CASE(int32_t, INT32_MIN, uint64_t, INT32_MIN),
            CASE(int32_t, INT32_MAX, uint64_t, INT32_MAX),

            CASE(uint8_t, 0, int32_t, 0),
            CASE(uint8_t, UINT8_MAX, int32_t, UINT8_MAX),
            CASE(uint32_t, 0, int64_t, 0),
            CASE(uint32_t, UINT32_MAX, int64_t, UINT32_MAX),
    };

    for (auto &pair : cases) {
        auto &from_var = std::get< 0 >(pair.first);
        auto &to_var = std::get< 0 >(pair.second);
        auto &from_size = std::get< 1 >(pair.first);
        auto &to_size = std::get< 1 >(pair.second);
        auto &from_sign = std::get< 2 >(pair.first);
        auto &to_sign = std::get< 2 >(pair.second);

        std::cout << "  Case: "
                  << std::get< 3 >(pair.first) << " " << to_str(from_var, from_size, from_sign) << " -> "
                  << std::get< 3 >(pair.second) << " " << to_str(from_var, from_size, from_sign) << std::endl;

        cast_int(from_var, from_size, to_size, from_sign, to_sign);

        ASSERT_EQ(get(from_var, to_size), get(to_var, to_size));
    }
}

TEST(TestTypeCast, test_cast_from_high_to_low) { // NOLINT(cert-err58-cpp)
    using var_s = std::tuple< var, std::size_t, bool, std::string >;
    using namespace testing_internal;

    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< var_s, var_s>>{
            CASE(uint32_t, 0, uint8_t, 0),
            CASE(uint32_t, UINT8_MAX, uint8_t, UINT8_MAX),
            CASE(uint64_t, 0, uint32_t, 0),
            CASE(uint64_t, UINT32_MAX, uint32_t, UINT32_MAX),

            CASE(int64_t, INT8_MIN, int8_t, INT8_MIN),
            CASE(int64_t, INT8_MAX, int8_t, INT8_MAX),

            CASE(uint32_t, INT8_MIN, int8_t, INT8_MIN),
            CASE(uint32_t, INT8_MAX, int8_t, INT8_MAX),
            CASE(uint64_t, INT32_MIN, int32_t, INT32_MIN),
            CASE(uint64_t, INT32_MAX, int32_t, INT32_MAX),

            CASE(int32_t, 0, uint8_t, 0),
            CASE(int32_t, UINT8_MAX, uint8_t, UINT8_MAX),
            CASE(int64_t, 0, uint32_t, 0),
            CASE(int64_t, UINT32_MAX, uint32_t, UINT32_MAX),

            CASE(int64_t, INT64_MAX, int32_t, INT64_MAX)
    };

    for (auto &pair : cases) {
        auto &from_var = std::get< 0 >(pair.first);
        auto &to_var = std::get< 0 >(pair.second);
        auto &from_size = std::get< 1 >(pair.first);
        auto &to_size = std::get< 1 >(pair.second);
        auto &from_sign = std::get< 2 >(pair.first);
        auto &to_sign = std::get< 2 >(pair.second);

        std::cout << "  Case: "
                  << std::get< 3 >(pair.first) << " " << to_str(from_var, from_size, from_sign) << " -> "
                  << std::get< 3 >(pair.second) << " " << to_str(from_var, from_size, from_sign) << std::endl;

        cast_int(from_var, from_size, to_size, from_sign, to_sign);

        ASSERT_EQ(get(from_var, to_size), get(to_var, to_size));
    }
}
