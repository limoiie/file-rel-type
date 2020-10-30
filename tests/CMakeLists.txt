find_package(GTest CONFIG REQUIRED)

include_directories(../src)

add_executable(test_all
    test_magic_peg.cpp
    test_pegtl_helper.hpp
    pegtl-helper/test_integer.cpp
    test_magic_peg_builder.cpp
    pegtl-helper/test_integer_action.cpp)

target_link_libraries(
    test_all PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main
)

add_test(ALLTestsInMain test_all)
