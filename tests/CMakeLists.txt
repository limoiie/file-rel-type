find_package(GTest CONFIG REQUIRED)

include_directories(../src)

add_executable(test_all
    input/test_random_input.cpp
    magic_ast/eval/test_eval_binop.cpp
    magic_ast/eval/test_eval_unop.cpp
    magic_ast/eval/test_type_cast.cpp
    magic_ast/eval/test_type_lift.cpp
    magic_ast/eval/test_val_fetcher.cpp
    magic_ast/test_read_number.cpp
    magic_peg_action/test_1_offset_action.cpp
    magic_peg_action/test_2_deref_type_action.cpp
    magic_peg_action/test_3_relation_action.cpp
    magic_peg_action/test_4_description_type_code.cpp
    magic_peg_action/test_file_action.cpp
    test_magic_peg.cpp
    test_magic_peg_predefine.cpp
    test_magic_peg_predefine_action.cpp
    test_pegtl_helper.hpp
    utils/tao/pegtl/test_change_action_and_states_in_place.cpp
    utils/tao/pegtl/test_integer.cpp
    utils/tao/pegtl/test_integer_action.cpp
    utils/tao/pegtl/test_switcher.cpp
    )

target_link_libraries(
    test_all PRIVATE magic GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main
)

add_test(ALLTestsInMain test_all)
