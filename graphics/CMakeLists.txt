cmake_minimum_required(VERSION 3.20)
#project(graphics)
#
#set(CMAKE_CXX_STANDARD 14)
#
#add_executable(graphics main.cpp)

#cmake_minimum_required(VERSION 2.6)
project(myproject)

# Set version information in a config.h file
#set(myproject_VERSION_MAJOR 1)
#set(myproject_VERSION_MINOR 0)
#configure_file(
#        "${PROJECT_SOURCE_DIR}/config.h.in"
#        "${PROJECT_BINARY_DIR}/config.h"
#)
#include_directories("${PROJECT_BINARY_DIR}")

# Define sources and executable
set(EXECUTABLE_NAME "myproject")
add_executable(${EXECUTABLE_NAME} main.cpp)


# Detect and add SFML
#set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#set(SFML_DIR  "/home/ksenia/technopark/le_mots/SFML/lib/cmake/SFML/")
set(SFML_DIR  "${CMAKE_SOURCE_DIR}/../SFML/lib/cmake/SFML/")
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(myproject sfml-graphics)
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})


# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
#include(InstallRequiredSystemLibraries)
#set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/COPYING")
#set(CPACK_PACKAGE_VERSION_MAJOR "${myproject_VERSION_MAJOR}")
#set(CPACK_PACKAGE_VERSION_MINOR "${myproject_VERSION_MINOR}")
#include(CPack)