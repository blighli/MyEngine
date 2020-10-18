cmake_minimum_required(VERSION 3.16)

project(MyEngine)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE  "${CMAKE_SOURCE_DIR}/bin")

if(MSVC)
    set(Qt5_DIR "C:\\Qt\\Qt5.12.9\\5.12.9\\msvc2017_64\\lib\\cmake\\Qt5")
elseif(MINGW)
    set(Qt5_DIR "C:\\Qt\\Qt5.12.9\\5.12.9\\mingw73_64\\lib\\cmake\\Qt5")
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_subdirectory(src)
