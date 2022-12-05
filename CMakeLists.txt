cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

set(Boost_INCLUDE_DIR c:/mingw/include)
set(Boost_LIBRARY_DIR C:/MinGW/lib/)
find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_library(Blah STATIC Blah/blah.cpp)
target_include_directories(Blah PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Blah/include)

add_executable(C++_lessons main.cpp)
target_link_libraries(C++_lessons PUBLIC Blah)
