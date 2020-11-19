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
#include "type_dispatcher.h"

template< size_t S, std::size_t Chunk >
struct [[maybe_unused]] num_fetcher {
    using in_t = random_istream_input< Chunk >;

    void operator()(in_t &in, magic::ast::var &v, num_endian_t const endian) {
        if (in.require(S)) {
            auto *p_var = (magic::ast::var *) in.current();
            switch (endian) {
                case NORMAL_ENDIAN: v.set(read_normal_endian< make_uint_t< S >>(p_var)); return;
                case BIGGER_ENDIAN: v.set(read_bigger_endian< make_uint_t< S >>(p_var)); return;
                case MIDDLE_ENDIAN: v.set(read_middle_endian< make_uint_t< S >>(p_var)); return;
                case LITTLE_ENDIAN: v.set(read_little_endian< make_uint_t< S >>(p_var)); return;
            }
        }
        throw std::domain_error("Failed to fetch value: illegal value endian!");
    }

};

template< std::size_t Chunk = 64 >
struct fetcher {
    explicit fetcher(random_istream_input< Chunk > &in)
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
        dispatcher_by_size::dispatch< num_fetcher >(size_of_typ(typ), in, v, endian_of_typ(typ));

        // type id3 need one more step
        if (typ == FILE_LEID3 || typ == FILE_BEID3) {
            to_id3_(v.l);
        }
        throw std::domain_error("Failed to fetch value: illegal type size!");
    }

    random_istream_input< Chunk > &in;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_CPP_FETCHER_H_
