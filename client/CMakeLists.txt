project(Client CXX)

cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)

# set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic")

# enable_testing()

# add_subdirectory(project)

find_package(Boost 1.71.0 REQUIRED COMPONENTS system log thread)

include_directories(SYSTEM ${Boost_INCLUDE_DIRS})

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -lboost_thread -lboost_system -pthread")


add_subdirectory(client_lib)
include_directories(client_lib/includes)

add_subdirectory(graphics)

include_directories(graphics)

add_executable(client_target main.cpp)

target_link_libraries(client_target
                      graphics
                      client_lib
                      ${Boost_LIBRARIES}
                     )