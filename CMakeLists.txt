cmake_minimum_required(VERSION 3.20)
project(clarity)

# List all source files that contain definitions
add_executable(clarity
    src/main.cpp
    src/cli.cpp
    src/task.cpp
    src/calendar.cpp
)

# Include path for headers
target_include_directories(clarity PRIVATE include)
