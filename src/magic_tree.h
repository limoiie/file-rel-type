//
// Created by ligen on 11/30/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_TREE_H_
#define FILE_REL_TYPE_SRC_MAGIC_TREE_H_

#include <list>

#include "utils/tree.hpp"
#include "magic_entry.h"

using magic_tree_t = tree_node< magic_entry >;
using p_magic_tree_t = std::shared_ptr< magic_tree_t >;

struct magic_tree {
    p_magic_tree_t root;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_TREE_H_
