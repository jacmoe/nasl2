# The
# ███╗   ██╗ █████╗ ███████╗██╗     ██████╗ 
# ████╗  ██║██╔══██╗██╔════╝██║     ╚════██╗
# ██╔██╗ ██║███████║███████╗██║      █████╔╝
# ██║╚██╗██║██╔══██║╚════██║██║     ██╔═══╝ 
# ██║ ╚████║██║  ██║███████║███████╗███████╗
# ╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝
#   project
#
#   https://github.com/jacmoe/nasl2
#
#   (c) 2021 Jacob Moena
#
#   Zlib License
#
cmake_minimum_required(VERSION 3.7)

set(HUNTER_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/hunter)
include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.293.tar.gz"
    SHA1 "e8e5470652db77149d9b38656db2a6c0b7642693"
)

project(nasl2)

set(CMAKE_CXX_STANDARD 17)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

hunter_add_package(glew)
find_package(glew CONFIG REQUIRED)

hunter_add_package(glfw)
find_package(glfw3 REQUIRED)

include_directories(
    ./code/main
    ./code/utility
)

add_subdirectory(glfwm)

add_subdirectory(code)
