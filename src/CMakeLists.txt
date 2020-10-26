find_package(pegtl CONFIG REQUIRED)

add_executable(file_rel_type
    main.cpp
    ParseMagicFile.cpp
    ParseMagicFile.h
    MagicEntry.cpp
    MagicEntry.h
    magic_peg.h)

target_link_libraries(file_rel_type
    cpp-common-static
    taocpp::pegtl
    #    ${LIB_MAGIC}
    )
