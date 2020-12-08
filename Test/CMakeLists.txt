#project(Test)

#add_subdirectory(tests)
#add_subdirectory(lib/googletest)

# 'Google_test' is the subproject name
project(Test)

# 'lib' is the folder with Google Test sources
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_subdirectory(lib/googletest)


# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run UniformDist_test.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)