//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_

#include "exp.h"

#include "../val_sign_typ.h"

namespace magic::ast
{
    struct binop_str;

    struct binop : public magic::ast::exp {
        struct builder {
            static std::shared_ptr< binop >
            make_ptr(char op,
                     std::shared_ptr< exp > const &left,
                     std::shared_ptr< exp > const &right,
                     val_sign_typ_t const &typ) {
                return std::shared_ptr< binop >(new binop{op, left, right});
            }

            static std::shared_ptr< binop_str >
            make_ptr(char op,
                     std::shared_ptr< exp > const &left,
                     std::shared_ptr< exp > const &right,
                     val_sign_typ_t const &typ,
                     unsigned const flag) {
                return std::make_shared< binop_str >(op, left, right, typ, flag);
            }
        };

        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override;

    protected:
        binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right)
                : op(op), left(std::move(left)), right(std::move(right)) {
        }

        binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right, val_sign_typ_t const &typ)
                : exp(typ), op(op), left(std::move(left)), right(std::move(right)) {
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

        std::string to_string_() const override {
            return left->to_string() + op + right->to_string();
        }

    public:
        char op;
        std::shared_ptr< exp > left;
        std::shared_ptr< exp > right;

    };

    struct binop_str : public binop {
        binop_str(char op,
                  std::shared_ptr< exp > left,
                  std::shared_ptr< exp > right,
                  val_sign_typ_t const &typ,
                  unsigned const flag)
                : binop(op, std::move(left), std::move(right), typ), flag(flag) {
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

        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override;

    public:
        unsigned flag;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_
