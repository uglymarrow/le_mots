project(Server CXX)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic")

find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})


add_subdirectory(server_lib)
include_directories(server_lib/includes)

add_executable(server main.cpp)

target_link_libraries(server server_lib pthread ${Boost_LIBRARIES})
