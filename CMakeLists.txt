cmake_minimum_required(VERSION 3.4.0)

project(rthutils)

set(CMAKE_CXX_FLAGS "-std=c++11")

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(rthutils SHARED ${SOURCES})

install(TARGETS rthutils DESTINATION /usr/lib)
