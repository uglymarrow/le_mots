include_directories(includes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lboost_thread -lboost_system -pthread")

file(GLOB SERVER_LIB_SRC "src/*.cpp")

add_library(server_lib SHARED ${SERVER_LIB_SRC})

target_link_libraries(server_lib)
