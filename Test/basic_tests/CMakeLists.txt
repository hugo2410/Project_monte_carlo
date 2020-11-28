include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(Boost_ADDITIONAL_VERSIONS "1.71.0" "1.65.1.0")


find_package(Boost)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_executable(Input_test
        Input_test.cpp )

target_link_libraries(Input_test  gtest gtest_main Modules )


