//
// Created by ligen on 11/19/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_DISPATCHER_HPP_
#define FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_DISPATCHER_HPP_

#include <functional>
#include <stdexcept>
#include <array>

constexpr auto T = true;
constexpr auto F = false;

#include <type_traits>

template< size_t... _Vals >
using ids = std::index_sequence< _Vals... >;

template< template< std::size_t, bool, class... > class Fn, class ...As, class ...Ps >
auto dispatch_by(std::size_t const s, bool const is_unsigned, Ps &&... ps) {
    switch (s) {
        case 1:
            return is_unsigned ? Fn< 1, T, As... >::on_dispatch(std::forward< Ps >(ps)...)
                               : Fn< 1, F, As... >::on_dispatch(std::forward< Ps >(ps)...);
        case 2:
            return is_unsigned ? Fn< 2, T, As... >::on_dispatch(std::forward< Ps >(ps)...)
                               : Fn< 2, F, As... >::on_dispatch(std::forward< Ps >(ps)...);
        case 4:
            return is_unsigned ? Fn< 4, T, As... >::on_dispatch(std::forward< Ps >(ps)...)
                               : Fn< 4, F, As... >::on_dispatch(std::forward< Ps >(ps)...);
        case 8:
            return is_unsigned ? Fn< 8, T, As... >::on_dispatch(std::forward< Ps >(ps)...)
                               : Fn< 8, F, As... >::on_dispatch(std::forward< Ps >(ps)...);
    }
    throw std::logic_error("Failed to dispatch: not supported type size!");
}

namespace internal
{
    template< template< std::size_t, std::size_t, class... > class Fn, std::size_t C, class ...As, class... Ps, std::size_t... To >
    auto dispatch_by_2sizes_ex(std::vector< std::size_t > const &ss, ids< To... > const &i, Ps &&... ps) {
        if constexpr (C > 0) {
            constexpr auto D = C - 1;
            switch (ss[D]) {
                case 1: return dispatch_by_2sizes_ex< Fn, D, As... >(ss, ids< 1, To... >(), std::forward< Ps >(ps)...);
                case 2: return dispatch_by_2sizes_ex< Fn, D, As... >(ss, ids< 2, To... >(), std::forward< Ps >(ps)...);
                case 4: return dispatch_by_2sizes_ex< Fn, D, As... >(ss, ids< 4, To... >(), std::forward< Ps >(ps)...);
                case 8: return dispatch_by_2sizes_ex< Fn, D, As... >(ss, ids< 8, To... >(), std::forward< Ps >(ps)...);
            }
            throw std::logic_error("Failed to dispatch: not supported type size!");
        } else {
            return Fn< To..., As... >::on_dispatch(std::forward< Ps >(ps)...);
        }
    }

    template< template< std::size_t... > class Fn, std::size_t C, class... Ps, std::size_t... To >
    auto dispatch_by_sizes_(std::vector< std::size_t > const &ss, ids< To... > &&, Ps &&... ps) {
        if constexpr (C > 0) {
            constexpr auto D = C - 1;
            switch (ss[D]) {
                case 1: return dispatch_by_sizes_< Fn, D >(ss, ids< 1, To... >(), std::forward< Ps >(ps)...);
                case 2: return dispatch_by_sizes_< Fn, D >(ss, ids< 2, To... >(), std::forward< Ps >(ps)...);
                case 4: return dispatch_by_sizes_< Fn, D >(ss, ids< 4, To... >(), std::forward< Ps >(ps)...);
                case 8: return dispatch_by_sizes_< Fn, D >(ss, ids< 8, To... >(), std::forward< Ps >(ps)...);
            }
            throw std::logic_error("Failed to dispatch: not supported type size!");
        } else {
            return Fn< To... >::on_dispatch(std::forward< Ps >(ps)...);
        }
    }

}

/**
 * Support only 2 sizes but is able to specialise more arguments for `Fn`
 */
template< template< std::size_t, std::size_t, class... > class Fn, class ...As, class ...Ps >
auto dispatch_by_2sizes_ex(std::size_t const from, std::size_t const to, Ps &&... ps) {
    return ::internal::dispatch_by_2sizes_ex< Fn, 2, As... >({from, to}, ids<>(), std::forward< Ps >(ps)...);
}

/**
 * Support any number of sizes but does not support more arguments thant sizes for `Fn`
 *   method 1: pass sizes as vector
 */
template< template< std::size_t ... > class Fn, std::size_t C, class ...Ps >
auto dispatch_by_sizes(std::vector< std::size_t > const &ss, Ps &&...ps) {
    assert(ss.size() == C);
    return ::internal::dispatch_by_sizes_< Fn, C >(ss, ids<>(), std::forward< Ps >(ps)...);
}

/**
 * Support any number of sizes but does not support more parameters thant sizes for `Fn`
 *   method 2: pass sizes as template parameters
 */
template< class... Ss >
struct dispatcher_by_sizes {
    template< template< std::size_t ... > class Fn, class ...Ps >
    static auto dispatch(Ss ...s, Ps &&...ps) {
        return ::internal::dispatch_by_sizes_< Fn, sizeof...(Ss) >({s...}, ids<>(), std::forward< Ps >(ps)...);
    }

};

using _S = std::size_t;

using dispatcher_by_size = dispatcher_by_sizes< _S >;
using dispatcher_by_2sizes = dispatcher_by_sizes< _S, _S >;
using dispatcher_by_3sizes = dispatcher_by_sizes< _S, _S, _S >;
using dispatcher_by_4sizes = dispatcher_by_sizes< _S, _S, _S, _S >;

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_EVAL_TYPE_DISPATCHER_HPP_
