cmake_minimum_required(VERSION 3.22.0)

project(hello)

add_executable(${PROJECT_NAME} main.c)

add_subdirectory(Adder)

target_include_directories(${PROJECT_NAME} PRIVATE Adder)

# target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} adder)

