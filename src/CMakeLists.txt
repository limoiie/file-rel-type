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
    utils/stl_container_helper.h
    magic_ast/magic_ast_eval.cpp magic_ast/magic_ast.h)

target_link_libraries(
    magic
    cpp-common-static
    taocpp::pegtl
)

add_executable(file_rel_type
    main.cpp
    )

target_link_libraries(file_rel_type
    magic
    cpp-common-static
    taocpp::pegtl
    )
