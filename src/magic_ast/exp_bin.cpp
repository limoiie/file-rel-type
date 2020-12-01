//
// Created by ligen on 11/15/2020.
//

#include "exp_bin.h"

#include "eval/eval_exp.h"

namespace magic::ast
{
    std::shared_ptr< magic::ast::val > magic::ast::binop::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
        return compute_binop(ctx, this);
    }

    binop::binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right)
            : op(op), left(std::move(left)), right(std::move(right)) {
    }

    binop::binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right, val_sign_typ_t const &typ)
            : exp(typ), op(op), left(std::move(left)), right(std::move(right)) {
    }

    bool binop::operator==(binop const &other) const {
        return exp::equal_to(other) && op == other.op && *left == *other.left && *right == *other.right;
    }

    bool binop::equal_to(exp const &other) const {
        if (auto const *n = dynamic_cast<binop const *>(&other)) {
            return *this == *n;
        }
        return false;
    }

    std::string binop::to_string_() const {
        return left->to_string() + op + right->to_string();
    }

    binop_str::binop_str(char op,
                         std::shared_ptr< exp > left,
                         std::shared_ptr< exp > right,
                         val_sign_typ_t const &typ,
                         unsigned int const flag)
            : binop(op, std::move(left), std::move(right), typ), flag(flag) {
    }

    std::shared_ptr< val > magic::ast::binop_str::compute(std::shared_ptr< ctx_exp_t > const &ctx) {
        return compute_binop_str(ctx, this);
    }

    bool binop_str::operator==(binop_str const &other) const {
        return binop::equal_to(other) && flag == other.flag;
    }

    bool binop_str::equal_to(exp const &other) const {
        if (auto const *n = dynamic_cast<binop_str const *>(&other)) {
            return *this == *n;
        }
        return false;
    }

    std::shared_ptr< binop > binop::builder::make_ptr(char op,
                                                      std::shared_ptr< exp > const &left,
                                                      std::shared_ptr< exp > const &right,
                                                      val_sign_typ_t const &typ) {
        return std::shared_ptr< binop >(new binop{op, left, right});
    }

    std::shared_ptr< binop_str > binop::builder::make_ptr(char op,
                                                          std::shared_ptr< exp > const &left,
                                                          std::shared_ptr< exp > const &right,
                                                          val_sign_typ_t const &typ,
                                                          unsigned int const flag) {
        return std::make_shared< binop_str >(op, left, right, typ, flag);
    }
}
