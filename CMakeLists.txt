###############################################
# Simple test example code
###############################################
project(CoolStuf)

set(${PROJECT_NAME}_srcs    
    CoolStuff_main.cpp
    Rectangle.hpp
    Rectangle.cpp
   )

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_srcs})

