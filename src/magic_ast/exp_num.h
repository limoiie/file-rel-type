//
// Created by ligen on 11/15/2020.
//

#ifndef FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_
#define FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_

#include "exp.h"

namespace magic::ast
{
    struct num : public magic::ast::exp {
        struct builder {
            static std::shared_ptr< num > make_ptr(val_sign_typ_t typ, magic::ast::var const &data) {
                return std::shared_ptr< num >(new num{std::make_shared< magic::ast::val >(typ, data)});
            }

        };

    private:
        explicit num(std::shared_ptr< magic::ast::val > inner)
                : exp(inner->typ), inner(std::move(inner)) {
        }

    public:
        bool operator==(num const &other) const {
            return exp::equal_to(other) && *inner == *other.inner;
        }

        std::shared_ptr< magic::ast::val > compute(std::shared_ptr< ctx_exp_t > const & /*unused*/) override;

    protected:
        [[nodiscard]] bool equal_to(const exp &other) const override {
            if (num const *n = dynamic_cast<num const *>(&other)) {
                return *this == *n;
            }
            return false;
        }

        std::string to_string_() const override {
            return inner->to_string();
        }

    public:
        std::shared_ptr< magic::ast::val > inner;

    };

}

#endif //FILE_REL_TYPE_SRC_MAGIC_AST_MAGIC_AST_H_MAGIC_AST_NUM_H_
