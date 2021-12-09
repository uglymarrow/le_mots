project(Server CXX)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic")

find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})


add_subdirectory(client_lib)
include_directories(client_lib/includes)

add_executable(client main.cpp)

target_link_libraries(client client_lib pthread ${Boost_LIBRARIES})
