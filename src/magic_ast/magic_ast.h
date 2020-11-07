//
// Created by ligen on 11/4/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_AST_H
#define FILE_REL_TYPE_MAGIC_AST_H

#include <memory>
#include <stack>
#include <utility>

#include <tao/pegtl.hpp>

#include <pegtl-helper/integer.hpp>

#include "magic_peg.h"

namespace magic::ast
{
    using namespace tao::pegtl::helper::integer;
    using namespace tao::pegtl::helper::integer::action;

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
                if (val.size() > MAX_STRING_LEN - 1) {
                    val = val.substr(0, MAX_STRING_LEN - 1);
                }
                std::copy(val.cbegin(), val.cend(), v.s);
                v.s[val.size()] = '\0';
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
        val_typ_t typ;
        var data;

        explicit val(val_typ_t typ, var const &data)
                : typ(typ), data(data) {
        }

        bool operator==(const val &rhs) const {
            if (typ != rhs.typ) return false;
            switch (type_format(typ.typ)) {
                case FILE_FMT_STR:
                    return std::string_view(data.s) == std::string_view(rhs.data.s);
                case FILE_FMT_INT:
                case FILE_FMT_QUAD:
                    switch (typ_size(typ.typ)) {
                        case 1:
                            return data.b == rhs.data.b;
                        case 2:
                            return data.s == rhs.data.s;
                        case 4:
                            return data.l == rhs.data.l;
                        case 8:
                            return data.q == rhs.data.q;
                        default:
                            return false;
                    }
                case FILE_FMT_FLOAT:
                    return data.f == rhs.data.f;
                case FILE_FMT_DOUBLE:
                    return data.d == rhs.data.d;
                default:
                    return false;
            }
        }

        bool operator!=(const val &rhs) const {
            return !(rhs == *this);
        }

    };

    struct ctx_exp_t {
    };

    struct exp {
        virtual std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) = 0;

        friend
        bool operator==(exp const &lhs, exp const &rhs) {
            return lhs.equal_to(rhs);
        }

        friend
        bool operator!=(exp const &lhs, exp const &rhs) {
            return !(lhs == rhs);
        }

    protected:
        [[nodiscard]] virtual bool equal_to(exp const &other) const {
            return true;
        }

    };

    struct num : public exp {
        struct builder {
            static std::shared_ptr< num > make_ptr(val_typ_t typ, var const &data) {
                return std::shared_ptr< num >(new num{std::make_shared< val >(typ, data)});
            }

        };

    private:
        explicit num(std::shared_ptr< val > inner)
                : inner(std::move(inner)) {
        }

    public:
        bool operator==(num const &other) const {
            return exp::equal_to(other) && *inner == *other.inner;
        }

        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const & /*unused*/) override {
            return inner;
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (num const *n = dynamic_cast<num const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

    public:
        std::shared_ptr< val > inner;

    };

    struct binop_str;

    struct binop : public exp {
        struct builder {
            static std::shared_ptr< binop >
            make_ptr(char op, std::shared_ptr< exp > const &left, std::shared_ptr< exp > const &right) {
                return std::shared_ptr< binop >(new binop{op, left, right});
            }

            static std::shared_ptr< binop_str >
            make_ptr(char op, std::shared_ptr< exp > const &left, std::shared_ptr< exp > const &right,
                     unsigned const flag) {
                return std::make_shared< binop_str >(op, left, right, flag);
            }
        };

        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override {
            return nullptr;  // todo
        }

    protected:
        binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right)
                : op(op), left(std::move(left)), right(std::move(right)) {
        }

    public:
        bool operator==(binop const &other) const {
            return exp::equal_to(other) && op == other.op && *left == *other.left && *right == *other.right;
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (auto const *n = dynamic_cast<binop const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

    public:
        char op;
        std::shared_ptr< exp > left;
        std::shared_ptr< exp > right;

    };

    struct binop_str : public binop {
        binop_str(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right, unsigned const flag)
                : binop(op, std::move(left), std::move(right)), flag(flag) {
        }

    public:
        bool operator==(binop_str const &other) const {
            return binop::equal_to(other) && flag == other.flag;
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (auto const *n = dynamic_cast<binop_str const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

    public:
        unsigned flag;

    };

    struct unop_relative;
    struct unop_deference;
    struct unop_inverse;

    struct unop : public exp {
        struct builder {
            template< class ...Ps >
            static std::shared_ptr< unop > make_ptr(char op, std::shared_ptr< exp > const &inner, Ps const &... ps) {
                switch (op) {
                    case '&':
                        return std::make_shared< unop_relative >(inner);
                    case '*':
                        return std::make_shared< unop_deference >(inner, ps...);
                    case '~':
                        return std::make_shared< unop_inverse >(inner);
                    default:
                        throw std::runtime_error(std::string("Unknown unop: ").append(std::string() + op));
                }
            }
        };

    protected:
        explicit unop(std::shared_ptr< exp > inner)
                : inner(std::move(inner)) {
        }

    public:
        bool operator==(unop const &other) const {
            return equal_to(other);
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (auto const *n = dynamic_cast<unop const *>(&other)) {
                return exp::equal_to(other) && *inner == *n->inner;
            }
            return false;
        }

    public:
        std::shared_ptr< exp > inner;

    };

    struct unop_relative : public unop {
        explicit unop_relative(std::shared_ptr< exp > const &inner)
                : unop(inner) {
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if ([[maybe_unused]] auto const *n = dynamic_cast<unop_relative const *>(&other)) {
                return unop::equal_to(other);
            }
            return false;
        }

    public:
        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override {
            return nullptr; // todo: impl
        }

    };

    struct unop_deference : public unop {
        explicit unop_deference(std::shared_ptr< exp > const &inner, val_typ_t typ = {FILE_LONG, false})
                : unop(inner), typ(typ) {
        }

        bool operator==(unop_deference const &other) const {
            return unop::equal_to(other) && typ == other.typ;
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (auto const *n = dynamic_cast<unop_deference const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

    public:
        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override {
            return nullptr; // todo: impl
        }

        val_typ_t typ;

    };

    struct unop_inverse : public unop {
        explicit unop_inverse(std::shared_ptr< exp > const &inner)
                : unop(inner) {
        }

        bool operator==(unop_inverse const &other) const {
            return unop::equal_to(other);
        }

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (auto const *n = dynamic_cast<unop_inverse const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

    public:
        std::shared_ptr< val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override {
            return nullptr; // todo: impl
        }

    };
}

#endif //FILE_REL_TYPE_MAGIC_AST_H
