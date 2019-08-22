CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(sample)

SET(CMAKE_CXX_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

ADD_EXECUTABLE(sample
    src/main.cpp
    src/sample.cpp
    src/mainwindow.cpp
    src/popup.cpp
)

target_link_libraries(sample
    Qt5::Widgets
)
