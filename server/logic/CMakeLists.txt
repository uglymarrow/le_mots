include_directories(../database/connect)
include_directories(../database/models)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic -fprofile-arcs -ftest-coverage")

include_directories(room)
include_directories(player)

file(GLOB GAMEMANGER_SRC "game_manager/*.cpp")
file(GLOB PLAYER_SRC "player/*.cpp")
file(GLOB ROOM_SRC "room/*.cpp")

set(LOGIC_SRC ${GAMEMANGER_SRC} ${PLAYER_SRC} ${ROOM_SRC})

add_library(logic_lib SHARED ${LOGIC_SRC})

target_link_libraries(logic_lib pthread mysqlcppconn)