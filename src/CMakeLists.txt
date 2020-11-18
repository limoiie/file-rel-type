find_package(pegtl CONFIG REQUIRED)

add_library(magic
    ParseMagicFile.cpp
    ParseMagicFile.h
    MagicEntry.cpp
    MagicEntry.h
    magic_peg.h
    magic_peg_op_typ.h
    magic_type.h
    magic_type.cpp
    pegtl-helper/integer.hpp
    pegtl-helper/exact.hpp
    pegtl-helper/switcher.hpp
    pegtl-helper/change_action_and_states_in_place.hpp
    magic_peg_builder.hpp
    magic_ast/exp.h
    magic_ast/magic_ast_eval.h
    magic_ast/var.cpp
    magic_ast/val.cpp
    magic_ast/exp_num.cpp
    magic_ast/exp_num.h
    magic_ast/exp_un.cpp
    magic_ast/exp_un.h
    magic_ast/exp_bin.cpp
    magic_ast/exp_bin.h
    magic_ast/magic_ast_eval.cpp
    magic_ast/magic_ast.h
    magic_ast/eval/read_number.hpp
    magic_ast/eval/read_string.hpp
    utils/stl_container_helper.h
    input/random_istream_reader.h
    make_int_type.hpp
    )

target_link_libraries(
    magic
    cpp-common-static
    taocpp::pegtl
)

add_executable(file_rel_type
    main.cpp
    input/random_buffer_input.hpp
    input/random_istream_input.hpp
    magic_ast/eval/eval_binop.h
    magic_ast/eval/cast_var.h
    )

target_link_libraries(file_rel_type
    magic
    cpp-common-static
    taocpp::pegtl
    )
