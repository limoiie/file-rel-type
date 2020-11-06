//
// Created by ligen on 11/6/2020.
//

#ifndef FILE_REL_TYPE_STL_CONTAINER_HELPER_H
#define FILE_REL_TYPE_STL_CONTAINER_HELPER_H

#include <stack>

namespace std_
{
    template<class E, class ...T>
    E pop(std::stack<E, T...>& st) {
        auto elem = st.top();
        st.pop();
        return elem;
    }

}

#endif //FILE_REL_TYPE_STL_CONTAINER_HELPER_H
