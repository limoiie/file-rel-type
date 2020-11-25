find_package(pegtl CONFIG REQUIRED)

add_library(magic
    ParseMagicFile.cpp
    ParseMagicFile.h
    magic_entry.cpp
    magic_entry.h
    magic_peg.h
    magic_peg_op_typ.cpp
    magic_peg_op_typ.h
    magic_peg_builder.hpp

    utils/tao/pegtl/change_action_and_states_in_place.hpp
    utils/tao/pegtl/exact.hpp
    utils/tao/pegtl/integer.hpp
    utils/tao/pegtl/line.hpp
    utils/tao/pegtl/switcher.hpp
    utils/stl_container_helper.h
    utils/tree.hpp
    utils/type_traits/make_int_type.hpp

    magic_ast/exp.cpp
    magic_ast/exp.h
    magic_ast/var.cpp
    magic_ast/val.cpp
    magic_ast/exp_num.cpp
    magic_ast/exp_num.h
    magic_ast/exp_un.cpp
    magic_ast/exp_un.h
    magic_ast/exp_bin.cpp
    magic_ast/exp_bin.h
    magic_ast/magic_ast_eval.cpp
    magic_ast/magic_ast_eval.h
    magic_ast/magic_ast.h
    magic_ast/eval/read_number.hpp
    magic_ast/eval/read_string.hpp
    magic_ast/eval/eval_binop.cpp
    magic_ast/eval/eval_binop.h
    magic_ast/eval/eval_unop.h
    magic_ast/eval/eval_unop.cpp
    magic_ast/eval/val_fetcher.hpp
    magic_ast/eval/type_cast.hpp
    magic_ast/eval/type_lift.cpp
    magic_ast/eval/type_lift.h
    magic_ast/eval/type_dispatcher.hpp
    magic_ast/eval/type_lift_val.cpp
    magic_ast/eval/type_lift_val.h
    magic_ast/eval/type_priority.cpp
    magic_ast/eval/type_priority.h
    input/random_istream_reader.cpp
    input/random_istream_reader.h
    input/random_buffer_input.hpp
    input/random_istream_input.hpp
    utils/type_traits/make_int_type.hpp
    val_typ.h
    val_typ_name.cpp
    val_typ_name.h
    val_sign_typ.cpp
    val_sign_typ.h
    type_endian.cpp
    type_endian.h
    magic_ast/eval/eval_binop.cpp magic_ast/exp.cpp magic_peg_op_typ.cpp)

target_link_libraries(magic
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
