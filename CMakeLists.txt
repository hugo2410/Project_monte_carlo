cmake_minimum_required(VERSION 3.17)
project(Project_Monte_carlo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_Monte_carlo main.cpp Modules/NormalReader.cpp Modules/NormalReader.h Modules/UniformReader.cpp Modules/UniformReader.h Modules/AbstractReader.cpp Modules/AbstractReader.h Modules/Error.hpp)