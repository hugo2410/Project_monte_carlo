project(Project9)



add_subdirectory(Modules)
set(SOURCE_FILES main.cpp)
add_executable(project9 ${SOURCE_FILES})

target_link_libraries(project9 Modules)
