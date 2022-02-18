cmake_minimum_required(VERSION 3.18)

project(Ganon
        VERSION 0.0.1
        DESCRIPTION ""
        LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
#VV only needed for real dll ??? Python module creation sets up exports
# Potentially needed if dll's are used inconjunction with pyd's
#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(python_extension_build)
#include("cmakeHaskell/compileHaskell")

# set(ASSETS "${CMAKE_SOURCE_DIR}/assets")

find_package(Python3 COMPONENTS Development NumPy REQUIRED) 
message(DEBUG ${Python3_NumPy_VERSION})

set(GANON_INCLUDE_ROOT_DIR "${CMAKE_SOURCE_DIR}/include")

add_subdirectory(src)
#add_subdirectory(app)
