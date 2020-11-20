find_package(GTest CONFIG REQUIRED)

include_directories(../src)

add_executable(test_all
    test_magic_peg.cpp
    test_pegtl_helper.hpp
    pegtl-helper/test_integer.cpp
    test_magic_peg_builder/test_offset_builder.cpp
    pegtl-helper/test_integer_action.cpp
    test_magic_peg_predefine_action.cpp
    test_magic_peg_builder/test_deref_type_builder.cpp
    test_magic_peg_predefine.cpp
    pegtl-helper/test_switcher.cpp
    pegtl-helper/test_change_action_and_states_in_place.cpp
    input/test_random_input.cpp
    magic_ast/test_read_number.cpp
    magic_ast/eval/test_type_cast.cpp
    magic_ast/eval/test_eval_binop.cpp
    magic_ast/eval/test_type_lift.cpp
    magic_ast/eval/test_val_fetcher.cpp)

target_link_libraries(
    test_all PRIVATE magic GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main
)

add_test(ALLTestsInMain test_all)
