find_package(pegtl CONFIG REQUIRED)

add_library(magic
    ParseMagicFile.cpp
    ParseMagicFile.h
    MagicEntry.cpp
    MagicEntry.h
    magic_peg.h
    magic_peg_predefine.h
    pegtl-helper/integer.hpp
    pegtl-helper/exact.hpp
    magic_peg_builder.hpp
    magic_ast/magic_ast.h
    magic_type.cpp
    )

add_executable(file_rel_type
    main.cpp
    utils/stl_container_helper.h
    pegtl-helper/switcher.hpp
    )

target_link_libraries(file_rel_type
    magic
    cpp-common-static
    taocpp::pegtl
    )
