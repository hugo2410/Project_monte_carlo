cmake_minimum_required(VERSION 3.17)
project(Project_Monte_carlo)


set(CMAKE_CXX_STANDARD 14)


include_directories(src/Modules)
add_subdirectory(Test)
add_subdirectory(src/Modules)
set(SOURCE_FILES src/main.cpp)
add_executable(project9 ${SOURCE_FILES})

target_link_libraries(project9 src/Modules)