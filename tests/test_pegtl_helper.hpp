//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP
#define FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP

#include <string>
#include <iostream>
#include <exception>

#include <tao/pegtl.hpp>
#include <utils/tao/pegtl/exact.hpp>
#include <magic_peg/magic_peg_action.hpp>

namespace testing_internal
{
    template< class Int >
    auto make_num(Int val, val_sign_typ_t typ = val_sign_typ_t::default_()) {
        typ.is_unsigned = val >= 0;
        typ.typ = int_type_of(sizeof(Int));
        return magic::ast::num::builder::make_ptr(
                typ, magic::ast::var::builder::make((std::make_unsigned_t< Int >) val));
    }

    static auto ph_exp() {
        return make_num(0u);
    }
}

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

template< class Rule >
magic::peg::action::state_magic_build
parse_magic(std::string const &stmt) {
    auto st = magic::peg::action::state_magic_build{};
    tao::pegtl::memory_input in(stmt, __FUNCTION__);

    parse< tao::pegtl::contrib::exact< Rule >,
           magic::peg::action::action_magic >(in, st);
    return st;
}

template< class Rule >
magic::peg::action::state_magic_build
parse_magic_init_with_default_offset(std::string const &stmt) {
    auto st = magic::peg::action::state_magic_build{};
    tao::pegtl::memory_input in(stmt, __FUNCTION__);

    st.stk_exp.push(testing_internal::ph_exp());

    parse< tao::pegtl::contrib::exact< Rule >,
           magic::peg::action::action_magic >(in, st);
    return st;
}

#endif //FILE_REL_TYPE_TEST_PEGTL_HELPER_HPP
