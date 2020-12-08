//
// Created by hugo on 08/12/2020.
//


#include "gtest/gtest.h"
#include "UniformDist.h"
#include <cmath>


#define TEST_SIZE 100
#define TEST_UPPER_BOUND 6
#define TEST_LOWER_BOUND 2


class UniformDistFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

        mean = (TEST_UPPER_BOUND + TEST_LOWER_BOUND)/2. ;
        var = pow(TEST_UPPER_BOUND+TEST_LOWER_BOUND,2)/12.0 ;
    }
public:
    UniformDistFixture() : Test() {
        pRandomUniform = new UniformDist(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);

    }

    virtual ~UniformDistFixture() {
        delete pRandomUniform;
    }
    UniformDist* pRandomUniform;
    double mean ;
    double var ;
};

TEST_F(UniformDistFixture, mean_sample_check) {
    EXPECT_EQ(mean,pRandomUniform->get_mean());
}
TEST_F(UniformDistFixture, var_sample_check) {
    EXPECT_EQ(var,pRandomUniform->get_var());
}
TEST_F(UniformDistFixture, size_sample_check) {
    EXPECT_EQ(TEST_SIZE,pRandomUniform->get_vector().size());
}

