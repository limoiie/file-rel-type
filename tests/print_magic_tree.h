//
// Created by ligen on 12/4/2020.
//

#ifndef FILE_REL_TYPE_TESTS_PRINT_MAGIC_TREE_H_
#define FILE_REL_TYPE_TESTS_PRINT_MAGIC_TREE_H_

#include <iostream>

#include "utils/tree.hpp"
#include "utils/log.h"
#include "magic_entry.h"

inline
void print_tree_node(std::shared_ptr< tree_node< magic_entry > > const &node) { // NOLINT(misc-no-recursion)
    if (node == nullptr) return;
    logs::trace("  {} ({})", node->val->to_string(), node->val->description);
    for (auto const &child : node->children) {
        print_tree_node(child);
    }
}

#endif //FILE_REL_TYPE_TESTS_PRINT_MAGIC_TREE_H_
