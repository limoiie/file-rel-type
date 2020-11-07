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
    )

target_link_libraries(
    test_all PRIVATE magic GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main
)

add_test(ALLTestsInMain test_all)
