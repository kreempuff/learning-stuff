cmake_minimum_required(VERSION 3.5)
project(cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ifelse.cpp)
add_executable(cpp ${SOURCE_FILES})

set(BUILD_1 main)
set(SOURCE_FILES_1 ifelse.cpp) #where main.cc is your first main/program
add_executable(${BUILD_1} ${SOURCE_FILES_1})

set(BUILD_2 main_2)
set(SOURCE_FILES_2 main.cpp) #where main_2.cc is your second main/program
add_executable(${BUILD_2} ${SOURCE_FILES_2})

set(BUILD_3 myfirstcplus)
set(SOURCE_FILES_3 myfirstcplus.cpp) #where main_2.cc is your second main/program
add_executable(${BUILD_3} ${SOURCE_FILES_3})