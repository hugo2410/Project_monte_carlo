project(Project9)

set(CMAKE_CXX_STANDARD 14)


include_directories(Modules)
add_subdirectory(Test)
add_subdirectory(Modules)
set(SOURCE_FILES main.cpp)
add_executable(Project9 ${SOURCE_FILES})

target_link_libraries(Project9 Modules)