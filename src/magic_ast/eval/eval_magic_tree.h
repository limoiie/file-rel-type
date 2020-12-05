//
// Created by ligen on 11/30/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_

#include <vector>

#include "../../magic_tree.h"

namespace magic::ast
{
    struct ctx_exp_t;
}

class eval_magic_tree {
public:
    struct entry_result_t {
        magic::ast::p_val_t off;
        magic::ast::p_val_t val;
        std::string desc;
        unsigned type_code;

        entry_result_t(magic::ast::p_val_t off,
                       magic::ast::p_val_t val,
                       std::string desc,
                       unsigned type_code)
                : off(std::move(off))
                , val(std::move(val))
                , desc(std::move(desc))
                , type_code(type_code) {
        }
    };

    eval_magic_tree(std::istream &ss);

    bool eval(p_magic_tree_t const &tree);

    std::vector< std::shared_ptr< entry_result_t > > const &result_chain() {
        return result_chain_;
    }

private:
    /// in
    std::shared_ptr< magic::ast::ctx_exp_t > ctx_;

    /// out
    std::vector< std::shared_ptr< entry_result_t > > result_chain_;

};

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_EVAL_MAGIC_TREE_H_
