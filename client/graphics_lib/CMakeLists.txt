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
#include_directories (../client_lib/includes)

add_library (graphics_lib
        ${graphics_src}
        ${graphics_hdr_moc}
        ${graphics_ui_moc}
        )

target_link_libraries (graphics_lib client_lib Qt5::Widgets Qt5::Core Qt5::Gui)

