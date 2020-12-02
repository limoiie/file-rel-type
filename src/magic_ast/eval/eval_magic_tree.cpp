//
// Created by ligen on 11/30/2020.
//

#include "eval_magic_tree.h"

#include "eval_exp.h"

eval_magic_tree::eval_magic_tree(std::istream &ss)
        : ctx_(std::make_shared< magic::ast::ctx_exp_t >(ss)) {
}

std::shared_ptr< eval_magic_tree::result_t >
eval_magic_tree::eval(p_magic_tree_t const &tree) {
    if (tree == nullptr) return nullptr;
    auto res = tree->val->exp->compute(ctx_);

    return nullptr;
}
