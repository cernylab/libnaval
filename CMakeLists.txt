cmake_minimum_required(VERSION 3.15)
project(libnaval VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Options
option(BUILD_PYTHON_BINDINGS "Build Python bindings" ON)
option(BUILD_CLI "Build command-line tool" ON)
option(BUILD_EXAMPLES "Build example programs" OFF)

# Library target
file(GLOB DATA_SOURCES "src/data_measurements/*.cpp")
add_library(naval SHARED
    src/naval.cpp
    src/data.cpp
    ${DATA_SOURCES}
)

target_include_directories(naval
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Enable position-independent code for shared library compatibility
set_target_properties(naval PROPERTIES POSITION_INDEPENDENT_CODE ON)

# CLI executable
if(BUILD_CLI)
    if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/CLI11/include/CLI/CLI.hpp")
        message(WARNING "CLI11 not found, skipping CLI tool. Initialize submodules by:\ngit submodule update --init --recursive")
    else()
        add_executable(naval_cli src/naval_cli.cpp)
        target_link_libraries(naval_cli PRIVATE naval)
        target_include_directories(naval_cli PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/external/CLI11/include)

        install(TARGETS naval_cli
            RUNTIME DESTINATION bin
        )
    endif()
endif()

# Python bindings
if(BUILD_PYTHON_BINDINGS)
    find_package(pybind11 CONFIG)

    if(pybind11_FOUND)
        pybind11_add_module(naval_python src/python_bindings.cpp)
        target_link_libraries(naval_python PRIVATE naval)
        set_target_properties(naval_python PROPERTIES OUTPUT_NAME naval)

        # Install Python module
        install(TARGETS naval_python
            LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/python
        )
    else()
        message(WARNING "pybind11 not found, skipping Python bindings")
    endif()
endif()

# Example programs
if(BUILD_EXAMPLES)
    add_executable(example_cpp examples/example.cpp)
    target_link_libraries(example_cpp PRIVATE naval)
endif()

# Installation
install(TARGETS naval
    EXPORT navalTargets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(DIRECTORY include/
    DESTINATION include
)

# Export targets
install(EXPORT navalTargets
    FILE navalTargets.cmake
    NAMESPACE naval::
    DESTINATION lib/cmake/naval
)

# Generate package config
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/navalConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/navalConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/navalConfig.cmake"
    INSTALL_DESTINATION lib/cmake/naval
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/navalConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/navalConfigVersion.cmake"
    DESTINATION lib/cmake/naval
)
