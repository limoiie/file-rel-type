//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
#define FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP

#include <stack>
#include <utility>

#include <tao/pegtl.hpp>

#include <pegtl-helper/integer.hpp>

#include "magic_peg.h"

namespace peg::magic::action
{
    using namespace tao::pegtl::helper::integer;
    using namespace tao::pegtl::helper::integer::action;

    using val_t = ref_type_t;

    constexpr unsigned MAX_STRING_LEN = 96;

    union var {
        uint8_t b;
        uint16_t h;
        uint32_t l;
        uint64_t q;

        float_t f;
        double_t d;

        char s[MAX_STRING_LEN];

        uint8_t hs[2];
        uint8_t hl[4];
        uint8_t hq[8];

        struct builder {

            static var make(uint8_t val, var v = {}) {
                v.b = val;
                return v;
            }

            static var make(uint16_t val, var v = {}) {
                v.h = val;
                return v;
            }

            static var make(uint32_t val, var v = {}) {
                v.l = val;
                return v;
            }

            static var make(uint64_t val, var v = {}) {
                v.q = val;
                return v;
            }

            static var make(float val, var v = {}) {
                v.f = val;
                return v;
            }

            static var make(double val, var v = {}) {
                v.d = val;
                return v;
            }

            static var make(std::string_view val, var v = {}) {
                std::copy(val.cbegin(), val.cend(), v.s);
                return v;
            }

            template< class T >
            static std::shared_ptr< var > make_ptr(T v) {
                return std::make_shared< var >(make(v));
            }

        };

    private:
        var() = default;

    };

    struct val {
        val_t typ;
        var data;

        explicit val(val_t typ, var const &data)
                : typ(typ), data(data) {
        }

    };

    struct ctx_exp_t {
    };

    struct exp {
        virtual std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) = 0;
    };

    struct num : public exp {
        struct builder {
            static std::shared_ptr< num > make_ptr(val_t typ, var const &data) {
                return std::shared_ptr< num >(new num { std::make_shared< val >(typ, data) });
            }

        };

        std::shared_ptr< val > inner;

    private:
        explicit num(std::shared_ptr< val > inner)
                : inner(std::move(inner)) {
        }

    public:
        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const & /*unused*/) override {
            return inner;
        }

    };

    struct binop : public exp {
        char op{};
        std::shared_ptr< exp > left;
        std::shared_ptr< exp > right;

        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override = 0;

    };

    struct unop : public exp {
        char op{};
        std::shared_ptr< exp > inner;

        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override = 0;

    };

    struct offset_state {
        long long int base_offset;
    };

    template< class Rule >
    struct action_magic
            : tao::pegtl::nothing< Rule > {
    };

    template<>
    struct action_magic< np_offset::np_indirect::offset_indirect_absolute_num >
            : to_integer_switcher< long long int > {
        using int_t = long long int;

        template< typename ParseInput >
        static void success(const ParseInput & /*unused*/, state_to_integer< int_t > &s, offset_state &state) {
            state.base_offset = s.val;
        }

    };

}

#endif //FILE_REL_TYPE_MAGIC_PEG_BUILDER_HPP
