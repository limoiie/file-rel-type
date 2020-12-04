//
// Created by ligen on 11/30/2020.
//

#include "eval_magic_tree.h"

#include <iostream>

#include "eval_exp.h"

eval_magic_tree::eval_magic_tree(std::istream &ss)
        : ctx_(std::make_shared< magic::ast::ctx_exp_t >(ss)) {
}

/**
 * Eval each node in the given tree from the root to the leaves, from the left to
 * the right. If one node is evaluated as false, all of its children will be skipped.
 */
bool eval_magic_tree::eval(p_magic_tree_t const &tree) { // NOLINT(misc-no-recursion)
    if (tree == nullptr) return true;

    auto success = false;
    auto const &entry = tree->val;
    std::cout << "    computing " << entry->to_string() << "..." << std::endl;

    auto res = entry->exp->compute(ctx_);
    std::cout << "      offset: " << entry->e_off->cached_result()->to_string() << std::endl;
    std::cout << "      value: " << entry->e_val->cached_result()->to_string() << std::endl;

    if (is_val_true(res)) {
        result_chain_.emplace_back(std::make_shared< entry_result_t >(
                entry->e_off->cached_result(),
                entry->e_val->cached_result(),
                entry->description,
                entry->type_code));

        if (tree->children.empty()) {
            success = true;
        } else {
            for (auto &child : tree->children) {
                if (eval(child)) {
                    success = true;
                }
            }
        }
    }
    return success;
}
