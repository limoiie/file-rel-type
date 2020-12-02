//
// Created by ligen on 11/4/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_AST_H
#define FILE_REL_TYPE_MAGIC_AST_H

#include <memory>
#include <stack>
#include <string>
#include <utility>

#include "elem/val_sign_typ.h"
#include "elem/var.h"
#include "elem/val.h"

namespace magic::ast
{
    struct ctx_exp_t;

    struct eval {
        p_val_t compute(std::shared_ptr< ctx_exp_t > const &ctx) {
            auto const result = compute_(ctx);
            if (cache_or_not) {
                cached_result_ = std::make_shared< val >(*result);
            }
            return result;
        }

        bool enable_cache(bool const cache) {
            return cache_or_not = cache;
        }

        p_val_t cached_result() {
            return cached_result_;
        }

    protected:
        virtual p_val_t compute_(std::shared_ptr< ctx_exp_t > const &ctx) = 0;

    private:
        bool cache_or_not{false};
        p_val_t cached_result_{nullptr};

    };

    struct exp : public eval {
        exp();

        explicit exp(val_sign_typ_t const &typ);

        friend
        bool operator==(exp const &lhs, exp const &rhs);

        friend
        bool operator!=(exp const &lhs, exp const &rhs);

        virtual std::string to_string() const;

    protected:
        virtual p_val_t compute_(std::shared_ptr< ctx_exp_t > const &ctx) = 0;

        [[nodiscard]] virtual bool equal_to(exp const &other) const;

        virtual std::string to_string_() const = 0;

    public:
        val_sign_typ_t typ;

    };

    using p_exp_t = std::shared_ptr< exp >;

}

#endif //FILE_REL_TYPE_MAGIC_AST_H
