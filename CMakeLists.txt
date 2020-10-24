cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(file_rel_type)

set(CMAKE_CXX_STANDARD 17)

# v141_xp is a toolset on visual studio 2017 for win-xp supports cause
# this project need to run on win-xp machines
set(CMAKE_GENERATOR_TOOLSET v141_xp)

set(VCPKG_TARGET_TRIPLET x86-windows-static-v141xp-mt)

# Link c/c++ runtime library (multi-thread lib) in static way
if(MSVC)
    message(STATUS "Link to static  C and C++ runtime library(/MT /MTd)")
    foreach(var
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        CMAKE_C_FLAGS_MINSIZEREL
        CMAKE_C_FLAGS_RELWITHDEBINFO
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_CXX_FLAGS_MINSIZEREL
        CMAKE_CXX_FLAGS_RELWITHDEBINFO
        )
        message(STATUS "-> ${var}: ${${var}}")

        if(${var} MATCHES "/MD")
            string(REGEX REPLACE "/MD" "/MT" ${var} "${${var}}")
        else()
            if(var MATCHES "REL")
                set(${var} "/MT ${${var}}")
            else()
                set(${var} "/MTd ${${var}}")
            endif()
        endif()
        message(STATUS "<- ${var}: ${${var}}")
    endforeach()
endif(MSVC)

if (EXISTS "${PROJECT_SOURCE_DIR}/third-part/cpp-common/")
    add_subdirectory(third-part/cpp-common/third-part)
    add_subdirectory(third-part/cpp-common/src)
else()
    message(FATAL_ERROR
        "Please run 'git submodule init && git submodule update' to fetch cpp-common"
        )
endif()

#find_library(LIB_MAGIC libmagic.a third-part/magic/lib)

include_directories(third-part/magic/include)

add_executable(file_rel_type
    main.cpp
    src/ParseMagicFile.cpp
    src/ParseMagicFile.h
    src/MagicEntry.cpp
    src/MagicEntry.h
    )

target_link_libraries(file_rel_type
    cpp-common-static
#    ${LIB_MAGIC}
    )
