//
// Created by ligen on 10/27/2020.
//

#ifndef FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
#define FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/alphabet.hpp>
#include <tao/pegtl/contrib/analyze.hpp>
#include <tao/pegtl/contrib/integer.hpp>
#include <tao/pegtl/contrib/if_then.hpp>

#include "utils/tao/pegtl/ascii.hpp"
#include "utils/tao/pegtl/integer.hpp"
#include "utils/tao/pegtl/exact.hpp"
#include "utils/tao/pegtl/change_action_and_states_in_place.hpp"

#include "val_sign_typ.h"
#include "val_typ_name.h"

namespace np_opt
{
    struct un_inv : one< '~' > {};
    struct un_rel : one< '&' > {};
    struct un_ind : one< '(' > {};
    struct un_ind_ : one< ')' > {};

    struct bin_calc : one< '&', '|', '^', '+', '-', '*', '/', '%' > {};
    struct bin_cmpr : one< '&', '^', '=', '<', '>', '!' > {};

    struct bin_aux : seq< opt< un_inv >, bin_calc > {};
}

namespace np_type
{
    namespace internal
    {
        static bool is_invalid_fmt(val_format_t const fmt, unsigned const Fmt) {
            return 0 == ((unsigned) fmt & Fmt);
        }

        template< class ParseInput >
        bool match_formal_type(ParseInput &in, unsigned const Fmt) {
            if (!in.empty()) {
                for (auto const &str_typ_fmt : map_type()) {
                    auto const &str = std::get< 0 >(str_typ_fmt);
                    auto const &fmt = std::get< 2 >(str_typ_fmt);
                    if (is_invalid_fmt(fmt, Fmt) || in.size() < str.size()) continue;
                    if ((std::string_view) str == std::string_view(in.current(), str.size())) {
                        in.bump_in_this_line(str.size());
                        return true;
                    }

                    if (in.peek_char() != 'u' && in.peek_char() != 'U') continue;
                    if (!is_number_fmt(fmt) || in.size() < str.size() + 1) continue;
                    if ((std::string_view) str == std::string_view(in.current() + 1, str.size())) {
                        in.bump_in_this_line(str.size() + 1);
                        return true;
                    }
                }
            }
            return false;
        }
    }

    namespace abbrev
    {
        using namespace alphabet;

        struct sign : one< '.', ',' > {};
        struct typ : one< l, L, m, h, s, H, S, c, b, C, B, e, f, g, E, F, G, i, I, q, Q > {};
        struct sign_typ : seq< sign, typ > {};
    }

    namespace formal
    {
        template< unsigned Fmt >
        struct formal_typ_ {
            template< class ParseInput >
            static bool match(ParseInput &in) {
                return np_type::internal::match_formal_type(in, Fmt);
            }

        };

        template< unsigned Fmt >
        struct formal_typ : seq< formal_typ_< Fmt > > {};

        struct formal_str_typ
                : seq< formal_typ<
                        (unsigned) val_format_t::FILE_FMT_STR > > {
        };

        struct formal_num_typ
                : seq< formal_typ<
                        (unsigned) val_format_t::FILE_FMT_INT |
                        (unsigned) val_format_t::FILE_FMT_QUAD |
                        (unsigned) val_format_t::FILE_FMT_FLOAT |
                        (unsigned) val_format_t::FILE_FMT_DOUBLE > > {
        };

        struct formal_non_typ
                : seq< formal_typ<
                        (unsigned) val_format_t::FILE_FMT_NONE > > {
        };

        struct formal_nan_typ
                : seq< formal_typ<
                        (unsigned) val_format_t::FILE_FMT_NONE |
                        (unsigned) val_format_t::FILE_FMT_STR > > {
        };

    }

}

namespace np_flag
{
    using namespace alphabet;
    struct str : one< W, w, C, c, T, t, B, b, H, h, L, l, J, s, r > {};
}

#endif //FILE_REL_TYPE_MAGIC_PEG_PREDEFINE_H
