
# Test is the subproject name
project(Test)

#Adding the Google Test sources
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_subdirectory(lib/googletest)


# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Reader_test Reader_test.cpp)
add_executable(NormalDist_test NormalDist_test.cpp)
add_executable(UniformDist_test UniformDist_test.cpp)
add_executable(MonteCarloExpectation_test MonteCarloExpectation_test.cpp CTL_test.cpp)


target_link_libraries(Reader_test gtest gtest_main Modules)
target_link_libraries(NormalDist_test gtest gtest_main Modules)
target_link_libraries(UniformDist_test gtest gtest_main Modules)
target_link_libraries(MonteCarloExpectation_test gtest gtest_main Modules)