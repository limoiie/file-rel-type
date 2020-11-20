//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_

#include <stdexcept>
#include <memory>

#include "val.h"
#include "var.h"
#include "exp_num.h"
#include "exp_bin.h"
#include "exp_un.h"

#include "../input/random_istream_input.hpp"
#include "../make_int_type.hpp"
#include "eval/val_fetcher.h"

namespace magic::ast
{
    struct ctx_exp_t {
        explicit ctx_exp_t(std::istream &stream, std::size_t maximum_buffer = 1024)
                : in(stream, maximum_buffer)
                , fetcher(in) {
        }

        std::shared_ptr< val > current_offset;
        std::stack< std::shared_ptr< val>> offset_history;
        random_istream_input< 64 > in;
        val_fetcher< 64 > fetcher;

    };

    std::shared_ptr< val > compute_num(std::shared_ptr< ctx_exp_t > const &ctx, num *e);

    std::shared_ptr< val > compute_unop(std::shared_ptr< ctx_exp_t > const &ctx, unop *e);

    std::shared_ptr< val > compute_binop(std::shared_ptr< ctx_exp_t > const &ctx, binop *e);

    std::shared_ptr< val > compute_binop_str(std::shared_ptr< ctx_exp_t > const &ctx, binop_str *e);

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_EVAL_H_
