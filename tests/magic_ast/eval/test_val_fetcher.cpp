//
// Created by ligen on 11/20/2020.
//

#include <gtest/gtest.h>

#include <sstream>

#include "magic_ast/eval/val_fetcher.hpp"

using magic::ast::val;
using magic::ast::var;

namespace testing_internal
{
    template< class Int >
    std::pair< std::tuple< val_sign_typ_t, std::string >, val >
    create_case(std::string const &typ_string, std::string const &mem, Int const v) {
        auto typ = parse_sign_typ(typ_string);
        auto out_typ = val_sign_typ_t{erase_endian(typ.typ), typ.is_unsigned};
        return {{typ, mem}, val{out_typ, var::builder::make((make_uint_t< sizeof(Int) >) v)}};
    }

    template< class Int >
    std::pair< std::tuple< val_sign_typ_t, std::string, int >, val >
    create_case(int const offset, std::string const &typ_string, std::string const &mem, Int const v) {
        auto typ = parse_sign_typ(typ_string);
        auto out_typ = val_sign_typ_t{erase_endian(typ.typ), typ.is_unsigned};
        auto dump_mem = std::string(offset, 'c') + mem;
        return {{typ, dump_mem, offset}, val{out_typ, var::builder::make((make_uint_t< sizeof(Int) >) v)}};
    }
}

TEST(TestValFetcher, test_val_fetcher) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::tuple< val_sign_typ_t, std::string >, val>>{
            testing_internal::create_case< uint8_t >("ubyte", "\x01", 0x01),
            testing_internal::create_case< uint16_t >("ushort", "\x01\x02", 0x0201),
            testing_internal::create_case< uint16_t >("uleshort", "\x01\x02", 0x0201),
            testing_internal::create_case< uint16_t >("ubeshort", "\x01\x02", 0x0102),
            testing_internal::create_case< int32_t >("belong", "\x01\x02\x03\x04", 0x01020304),
            testing_internal::create_case< int32_t >("lelong", "\x01\x02\x03\x04", 0x04030201),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.second.to_string() << " from " << std::get< 1 >(pair.first) << std::endl;

        auto mem = std::istringstream(std::get< 1 >(pair.first));
        auto in = random_istream_input< 32 >(mem, 128);
        auto fetcher = val_fetcher< 32 >(in);

        auto out = fetcher.fetch(std::get< 0 >(pair.first));

        std::cout << "    output: " << out->to_string() << std::endl;
        std::cout << "    expect: " << pair.second.to_string() << std::endl;
        ASSERT_EQ(*out, pair.second);
    }
}

TEST(TestValFetcher, test_val_fetcher_with_offset) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::tuple< val_sign_typ_t, std::string, int >, val>>{
            testing_internal::create_case< uint8_t >(10, "ubyte", "\x01", 0x01),
            testing_internal::create_case< uint16_t >(0, "ushort", "\x01\x02", 0x0201),
            testing_internal::create_case< uint16_t >(12, "uleshort", "\x01\x02", 0x0201),
            testing_internal::create_case< uint16_t >(32, "ubeshort", "\x01\x02", 0x0102),
            testing_internal::create_case< int32_t >(28, "belong", "\x01\x02\x03\x04", 0x01020304),
            testing_internal::create_case< int32_t >(240, "lelong", "\x01\x02\x03\x04", 0x04030201),
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << pair.second.to_string() << " from " << std::get< 1 >(pair.first) << std::endl;

        auto mem = std::istringstream(std::get< 1 >(pair.first));
        auto in = random_istream_input< 32 >(mem, 128);
        auto fetcher = val_fetcher< 32 >(in);

        fetcher.in.seek(std::get< 2 >(pair.first));
        auto out = fetcher.fetch(std::get< 0 >(pair.first));

        std::cout << "    output: " << out->to_string() << std::endl;
        std::cout << "    expect: " << pair.second.to_string() << std::endl;
        ASSERT_EQ(*out, pair.second);
    }
}
