//
// Created by ligen on 11/21/2020.
//

#ifndef FILE_REL_TYPE_SRC_UTILS_TREE_HPP_
#define FILE_REL_TYPE_SRC_UTILS_TREE_HPP_

#include <memory>
#include <list>

template< class Val >
struct tree_node : std::enable_shared_from_this< tree_node< Val > > {
    using node_t = tree_node< Val >;
    using p_node_t = std::shared_ptr< node_t >;
    using p_val_t = std::shared_ptr< Val >;

    explicit tree_node(p_val_t const &val = nullptr, p_node_t const &parent = nullptr)
            : val(val)
            , parent(parent) {
    }

    p_node_t root() {
        auto v = this->shared_from_this();
        while (v->parent != nullptr) {
            v = v->parent;
        }
        return v;
    }

    std::shared_ptr< tree_node< Val > > parent;
    std::list< std::shared_ptr< tree_node< Val > > > children;
    std::shared_ptr< Val > val;

};

#endif //FILE_REL_TYPE_SRC_UTILS_TREE_HPP_
