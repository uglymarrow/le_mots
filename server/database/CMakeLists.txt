# set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic -fprofile-arcs -ftest-coverage ")

include_directories(/usr/include/cppconn)
link_directories(/usr/lib /usr/local/lib)

include_directories(connect)
include_directories(models)
include_directories(../logic/player)

file(GLOB CONNECT_SRC "connect/*.cpp")
file(GLOB MODELS_SRC "models/*.cpp")

set(DATABASE_SRC ${CONNECT_SRC} ${MODELS_SRC})

add_library(database_lib SHARED ${DATABASE_SRC})

target_link_libraries(database_lib logic_lib pthread mysqlcppconn)