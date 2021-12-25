set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package (Qt5Widgets)

file(GLOB PROJECT_SOURCES "src/*.cpp")
file(GLOB PROJECT_UI "forms/*.ui")
file(GLOB PROJECT_HDRS "include/*.h")

set (graphics_src ${PROJECT_SOURCES} )
set (graphics_hdr ${PROJECT_HDRS})
set (graphics_ui  ${PROJECT_UI})

qt5_wrap_cpp(graphics_hdr_moc ${graphics_hdr})
qt5_wrap_ui (graphics_ui_moc  ${graphics_ui})

include_directories (include)
include_directories (../client_lib/includes)

add_library (graphics_lib
        ${graphics_src}
        ${graphics_hdr_moc}
        ${graphics_ui_moc}
        )

target_link_libraries (graphics_lib client_lib Qt5::Widgets Qt5::Core Qt5::Gui)


#include_directories(include)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
#
#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)
#
#find_package(Qt5Widgets)
#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui REQUIRED)
#
#include_directories(src)
#include_directories(include)
#include_directories(forms)
#
#include_directories(../client_lib/includes)
##include_directories(../msgfabric_lib/include)
#
#
#file(GLOB PROJECT_SOURCES "src/*.cpp" "src/*.ui")
#
#add_library(graphics_lib SHARED ${PROJECT_SOURCES} )
#target_link_libraries(graphics_lib
#        Qt${QT_VERSION_MAJOR}::Widgets
#        Qt${QT_VERSION_MAJOR}::Core
#        Qt${QT_VERSION_MAJOR}::Gui
#        )
