//
// Created by ligen on 11/30/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_

#include "../../magic_tree.h"

namespace magic::ast
{
    class ctx_exp_t;
}

class eval_magic_tree {
public:
    struct result_t {

    };

    eval_magic_tree(std::istream &ss);

    std::shared_ptr< result_t > eval(p_magic_tree_t const &tree);

private:
    std::shared_ptr< magic::ast::ctx_exp_t > ctx_;
    p_magic_tree_t root_;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_
