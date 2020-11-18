//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_

#include <stdexcept>
#include <memory>

#include "../val.h"
#include "../var.h"
#include "../exp_num.h"
#include "../exp_bin.h"
#include "../exp_un.h"
#include "../../input/random_istream_input.hpp"
#include "../../make_int_type.hpp"

#include "read_number.hpp"

template< std::size_t Chunk >
struct fetcher {
    explicit fetcher(random_istream_input< 64 > &in)
            : in(in) {
    }

    std::shared_ptr< magic::ast::val > fetch(val_sign_typ_t const typ) {
        auto const flipped_typ = erase_endian(typ.typ);
        auto v = magic::ast::var::builder::make();
        if (is_number_typ(typ.typ)) {
            fetch_num(v, typ.typ);
        } else {
            if (is_string_typ(typ.typ)) {
                // todo
            }
            throw std::logic_error("not implemented yet!");
        }

        return std::make_shared< magic::ast::val >(val_sign_typ_t{flipped_typ, typ.is_unsigned}, v);
    }

    std::shared_ptr< magic::ast::var > fetch_num(magic::ast::var &v, val_typ_t const typ) const {
        auto const endian = endian_of_typ(typ);
        switch (size_of_typ(typ)) {
            case 1:
                return fetch_num < 1 > (endian);
            case 2:
                return fetch_num < 2 > (endian);
            case 4:
                return fetch_num < 4 > (endian);
            case 8:
                return fetch_num < 8 > (endian);
        }

        // type id3 need one more step
        if (typ == FILE_LEID3 || typ == FILE_BEID3) {
            to_id3_(v.l);
        }
        throw std::domain_error("Failed to fetch value: illegal type size!");
    }

    template< size_t S >
    std::shared_ptr< magic::ast::var > fetch_num(num_endian_t const endian) {
        if (in.require(S)) {
            auto *p_var = (magic::ast::var *) in.current();
            switch (endian) {
                case NORMAL_ENDIAN:
                    return magic::ast::var::builder::make_ptr(
                            read_normal_endian< make_uint_t< S >>(p_var));
                case BIGGER_ENDIAN:
                    return magic::ast::var::builder::make_ptr(
                            read_bigger_endian< make_uint_t< S >>(p_var));
                case MIDDLE_ENDIAN:
                    return magic::ast::var::builder::make_ptr(
                            read_middle_endian< make_uint_t< S >>(p_var));
                case LITTLE_ENDIAN:
                    return magic::ast::var::builder::make_ptr(
                            read_little_endian< make_uint_t< S >>(p_var));
            }
        }
        throw std::domain_error("Failed to fetch value: illegal value endian!");
    }

    random_istream_input< 64 > &in;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_
