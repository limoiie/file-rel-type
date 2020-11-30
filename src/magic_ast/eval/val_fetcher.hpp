//
// Created by ligen on 11/18/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_

#include <stdexcept>
#include <memory>

#include "../elem/val.h"
#include "../elem/var.h"
#include "../exp_num.h"
#include "../exp_bin.h"
#include "../exp_un.h"

#include "../../input/random_istream_input.hpp"
#include "../../utils/type_traits/make_int_type.hpp"
#include "../elem/val_typ_endian.h"
#include "../elem/val_typ_name.h"

#include "read_number.hpp"
#include "type_dispatcher.hpp"

template< size_t S >
struct [[maybe_unused]] num_fetcher {
    template< class Input >
    static void on_dispatch(Input &in, magic::ast::var &v, val_endian_t const endian) {
        if (!in.require(S)) {
            in.discard();
            if (!in.require(S)) {
                throw std::domain_error("Failed to fetch value: type size is bigger than the buffer!");
            }
        }
        auto *p_var = (magic::ast::var *) in.current();
        switch (endian) {
            case NORMAL_ENDIAN: return v.set(read_normal_endian< make_uint_t< S >>(p_var));
            case BIGGER_ENDIAN: return v.set(read_bigger_endian< make_uint_t< S >>(p_var));
            case MIDDLE_ENDIAN: return v.set(read_middle_endian< make_uint_t< S >>(p_var));
            case LITTLE_ENDIAN: return v.set(read_little_endian< make_uint_t< S >>(p_var));
        }
        throw std::domain_error("Failed to fetch value: illegal value endian!");
    }

};

template< std::size_t Chunk = 64 >
struct val_fetcher {
    explicit val_fetcher(random_istream_input< Chunk > &in)
            : in(in) {
    }

    std::shared_ptr< magic::ast::val > fetch(val_sign_typ_t const typ) {
        // after parsing, the endian info will be ignored
        auto const flipped_typ = erase_endian(typ.typ);
        auto v = magic::ast::var::builder::make();
        if (is_number_typ(typ.typ)) {
            fetch_num(v, typ.typ);
        } else {
            if (is_string_typ(typ.typ)) {
                // todo: fetch string type
            }
            throw std::logic_error("NonImplemented: fetching string value is not implemented yet!");
        }

        return std::make_shared< magic::ast::val >(val_sign_typ_t{flipped_typ, typ.is_unsigned}, v);
    }

    void fetch_num(magic::ast::var &v, val_typ_t const typ) const {
        dispatcher_by_size::dispatch< num_fetcher >(size_of_typ(typ), in, v, endian_of_typ(typ));

        // type id3 need one more step
        if (typ == FILE_LEID3 || typ == FILE_BEID3) {
            to_id3_(v.l);
        }
    }

    random_istream_input< Chunk > &in;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_
