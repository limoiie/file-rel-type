//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_

#include "exp.h"

#include "elem/val_sign_typ.h"

namespace magic::ast
{
    struct binop_str;

    struct binop : public magic::ast::exp {
        struct builder {
            static std::shared_ptr< binop >
            make_ptr(char op,
                     std::shared_ptr< exp > const &left,
                     std::shared_ptr< exp > const &right,
                     val_sign_typ_t const &typ);

            static std::shared_ptr< binop_str >
            make_ptr(char op,
                     std::shared_ptr< exp > const &left,
                     std::shared_ptr< exp > const &right,
                     val_sign_typ_t const &typ,
                     unsigned const flag);
        };

        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override;

    protected:
        binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right);

        binop(char op, std::shared_ptr< exp > left, std::shared_ptr< exp > right, val_sign_typ_t const &typ);

    public:
        bool operator==(binop const &other) const;

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override;

        std::string to_string_() const override;

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
                  unsigned const flag);

    public:
        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const &ctx) override;

        bool operator==(binop_str const &other) const;

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override;

    public:
        unsigned flag;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_BIN_H_
