find_package(pegtl CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

add_library(magic
    input/random_buffer_input.hpp
    input/random_istream_input.hpp
    input/random_istream_reader.cpp
    input/random_istream_reader.h
    magic_ast/elem/str_flag_t.cpp
    magic_ast/elem/str_flag_t.h
    magic_ast/elem/val.cpp
    magic_ast/elem/val_sign_typ.cpp
    magic_ast/elem/val_sign_typ.h
    magic_ast/elem/val_typ.cpp
    magic_ast/elem/val_typ.h
    magic_ast/elem/val_typ_endian.cpp
    magic_ast/elem/val_typ_endian.h
    magic_ast/elem/val_typ_format.cpp
    magic_ast/elem/val_typ_format.h
    magic_ast/elem/val_typ_name.cpp
    magic_ast/elem/val_typ_name.h
    magic_ast/elem/var.cpp
    magic_ast/eval/eval_binop.cpp
    magic_ast/eval/eval_binop.h
    magic_ast/eval/eval_exp.cpp
    magic_ast/eval/eval_exp.h
    magic_ast/eval/eval_magic_tree.cpp
    magic_ast/eval/eval_magic_tree.h
    magic_ast/eval/eval_unop.cpp
    magic_ast/eval/eval_unop.h
    magic_ast/eval/read_number.hpp
    magic_ast/eval/read_string.hpp
    magic_ast/eval/type_cast.hpp
    magic_ast/eval/type_dispatcher.hpp
    magic_ast/eval/type_lift.cpp
    magic_ast/eval/type_lift.h
    magic_ast/eval/type_lift_val.cpp
    magic_ast/eval/type_lift_val.h
    magic_ast/eval/type_priority.cpp
    magic_ast/eval/type_priority.h
    magic_ast/eval/val_fetcher.hpp
    magic_ast/exp.cpp
    magic_ast/exp.h
    magic_ast/exp_bin.cpp
    magic_ast/exp_bin.h
    magic_ast/exp_num.cpp
    magic_ast/exp_num.h
    magic_ast/exp_un.cpp
    magic_ast/exp_un.h
    magic_ast/magic_ast.h
    magic_entry.cpp
    magic_entry.h
    magic_peg/magic_peg.h
    magic_peg/magic_peg_action.hpp
    magic_peg/magic_peg_op_typ.h
    magic_peg/magic_peg_op_typ_action.cpp
    magic_peg/magic_peg_op_typ_action.h
    magic_tree.cpp
    magic_tree.h
    utils/print_memory.h
    utils/stl_container_helper.h
    utils/tao/pegtl/change_action_and_states_in_place.hpp
    utils/tao/pegtl/exact.hpp
    utils/tao/pegtl/integer.hpp
    utils/tao/pegtl/line.hpp
    utils/tao/pegtl/rep_min_max_or_more.hpp
    utils/tao/pegtl/switcher.hpp
    utils/tree.hpp
    utils/type_traits/make_int_type.hpp
    )

target_link_libraries(magic
    cpp-common-static
    taocpp::pegtl
    spdlog::spdlog
    spdlog::spdlog_header_only
    )

add_executable(file_rel_type
    main.cpp
    utils/log.h
    )

target_link_libraries(file_rel_type
    magic
    cpp-common-static
    taocpp::pegtl
    )
