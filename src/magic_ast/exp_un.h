//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_UN_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_UN_H_

#include "exp.h"

#include "elem/val_sign_typ.h"

namespace magic::ast
{
    struct unop : exp {
        struct builder {
            static std::shared_ptr< unop >
            make_ptr(char op, std::shared_ptr< exp > const &inner, val_sign_typ_t const &typ);
        };

        explicit unop(char const op, std::shared_ptr< exp > inner);

        explicit unop(char const op, std::shared_ptr< exp > inner, val_sign_typ_t const &typ);

        bool operator==(unop const &other) const;

        std::shared_ptr< magic::ast::val > compute_(std::shared_ptr< ctx_exp_t > const &ctx) override;

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override;

        std::string to_string_() const override;

    public:
        std::shared_ptr< exp > inner;
        char const op;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_UN_H_
