project(Server CXX)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic -lmysqlcppconn -lmysqlcppconn-static -pthread")

find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})

add_subdirectory(database)
include_directories(database/connect)
include_directories(database/models)

add_subdirectory(logic)
include_directories(logic/game_manager)
include_directories(logic/player)
include_directories(logic/room)


add_executable(test_game main.cpp)

target_link_libraries(test_game logic_lib database_lib  ${Boost_LIBRARIES})