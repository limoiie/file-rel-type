//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_

#include <stdexcept>
#include <memory>

#include "val.h"
#include "eval/val_fetcher.hpp"
#include "../input/random_istream_input.hpp"

namespace magic::ast
{
    struct ctx_exp_t;

    using p_ctx_t = std::shared_ptr< ctx_exp_t >;

    struct ctx_exp_t {
        explicit ctx_exp_t(std::istream &stream, std::size_t maximum_buffer = 1024)
                : in(stream, maximum_buffer)
                , fetcher(in) {
        }

        p_val_t current_offset;
        std::stack< std::shared_ptr< val>> offset_history;
        random_istream_input< 64 > in;
        val_fetcher< 64 > fetcher;

    };

    p_val_t compute_num(std::shared_ptr< ctx_exp_t > const &ctx, num *e);

    p_val_t compute_unop(std::shared_ptr< ctx_exp_t > const &ctx, unop *e);

    p_val_t compute_binop(std::shared_ptr< ctx_exp_t > const &ctx, binop *e);

    p_val_t compute_binop_str(std::shared_ptr< ctx_exp_t > const &ctx, binop_str *e);

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
