###############################################
# Simple test example code
###############################################
set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -v")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -std=c++11")

project(CoolStuff)

set(${PROJECT_NAME}_srcs    
    CoolStuff_main.cpp
    Rectangle.hpp
    Rectangle.cpp
   )

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_srcs})

