cmake_minimum_required(VERSION 3.30)
project(task_scheduler_program)

set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/headers)

# Add source files
file(GLOB SOURCES "src/*.cpp")

add_executable(task_scheduler_program main.cpp ${SOURCES})