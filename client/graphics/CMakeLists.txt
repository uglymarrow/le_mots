# set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
# set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)
find_package (Qt5Gui REQUIRED)
# find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Multimedia REQUIRED)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)


# find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Multimedia REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

# include_directories(../client_lib/includes)
# include_directories(../msgfabric_lib/include) 

file(GLOB PROJECT_SOURCES  "*.cpp")

set(UI_FORMS
    wordsform.ui
    regform.ui
    loginform.ui
    menu.ui
)

qt5_wrap_ui(UI_FORM_HEADERS ${UI_FORMS})

add_library(graphics ${UI_FORM_HEADERS} ${PROJECT_SOURCES})

# target_link_libraries(graphics Qt${QT_VERSION_MAJOR}::Widgets  Qt${QT_VERSION_MAJOR}::Multimedia)
target_link_libraries(graphics Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(graphics Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(graphics Qt${QT_VERSION_MAJOR}::Widgets)



# if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
#     qt_add_executable(FullHouse)
# else()
#     add_executable(FullHouse)
# endif()

# target_link_libraries(FullHouse ui_lib)

#cmake . && cmake --build . && cmake --build . --target package
#install(TARGETS FullHouse ui_lib
#    RUNTIME DESTINATION bin
#    LIBRARY DESTINATION lib)

#install(TARGETS FullHouse DESTINATION /home/poker)



## Задать некоторые характеристики пакета:
#set(CPACK_PACKAGE_NAME "FullHouse")
#set(CPACK_PACKAGE_VENDOR "4 retard production")
#set(CPACK_PACKAGE_DESCRIPTION "Made by Techopark students")


## Задать используемый генератор пакетов:
#set(CPACK_GENERATOR "DEB")

## Включить стандартный модуль "CPack":
#include(CPack)