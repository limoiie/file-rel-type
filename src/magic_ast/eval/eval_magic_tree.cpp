//
// Created by ligen on 11/30/2020.
//

#include "eval_magic_tree.h"

#include <iostream>

#include "eval_exp.h"
#include "../../utils/log.h"

eval_magic_tree::eval_magic_tree(std::istream &ss)
        : ctx_(std::make_shared< magic::ast::ctx_exp_t >(ss)) {
}

/**
 * Eval each node in the given tree from the root to the leaves, from the left to
 * the right. If one node is evaluated as false, all of its children will be skipped.
 */
bool eval_magic_tree::eval(p_magic_tree_t const &tree) { // NOLINT(misc-no-recursion)
    if (tree == nullptr) {
        return true;
    }

    auto const &entry = tree->val;
    logs::debug("\tcomputing {}...", entry->to_string());

    magic::ast::p_val_t res = nullptr;
    try {
        res = entry->exp->compute(ctx_);
        logs::debug("\t off: {}", entry->e_off->cached_result()->to_string());
        logs::debug("\t val: {}", entry->e_val->cached_result()->to_string());
    } catch (std::exception &e) {
        logs::debug("Failed to compute while evaluating: {}", e.what());
    }

    if (!is_val_true(res)) {
        return false;
    }

    // we say 'matched' if the entry evaluated as true has info-payload, such as
    // description or type code
    auto matched = !entry->description.empty() || !entry->type_code;
    result_chain_.emplace_back(std::make_shared< entry_result_t >(
            entry->e_off->cached_result(),
            entry->e_val->cached_result(),
            entry->description,
            entry->type_code));
    //std::cout << "    -> results size: " << result_chain_.size() << std::endl;

    for (auto &child : tree->children) {
        if (eval(child)) {
            matched = true;
        }
    }
    return matched;
}
