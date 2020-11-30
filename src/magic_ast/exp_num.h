//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_

#include "exp.h"

#include "elem/val_sign_typ.h"

namespace magic::ast
{
    struct num : public magic::ast::exp {
        struct builder {
            static std::shared_ptr< num > make_ptr(val_sign_typ_t typ, magic::ast::var const &data);

        };

    private:
        explicit num(std::shared_ptr< magic::ast::val > inner);

    public:
        bool operator==(num const &other) const;

        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const & /*unused*/) override;

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override;

        std::string to_string_() const override;

    public:
        std::shared_ptr< magic::ast::val > inner;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_
