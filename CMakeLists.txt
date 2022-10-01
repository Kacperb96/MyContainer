cmake_minimum_required(VERSION 3.13)
project(MyContainer)

add_library(MyContainers STATIC MyContainer.cpp)
add_executable(main main.cpp)
target_link_libraries(main MyContainers)