//
// Created by hugo on 07/12/2020.
//


#include "gtest/gtest.h"
#include "Error.hpp"
#include "AbstractVariable.h"
#include "AbstractReader.h"
#include "NormalReader.h"
#include "UniformReader.h"


#define TEST_PATH "11.txt"
#define TEST_PATH_SIZE "TestNormal_size.dat"
#define TEST_PATH_MEAN "TestNormal_mean.dat"
#define TEST_PATH_VAR "TestNormal_var.dat"

#define TEST_PATH_UNIFORM "DefaultUniform.dat"



class InputTestFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {
        delete pRandomsample ;
    }

    virtual void SetUp() {
        alpha = 0.05 ;
        alpha_bad = 2. ;

        order = 1 ;
        order_bad = -2 ;
        pRandomsample = 0 ;
    }
public:
    InputTestFixture() : Test() {

        pInput_normal = new NormalReader;
        pInput_uniform =  new UniformReader;

    }

    virtual ~InputTestFixture() {
        delete pInput_normal ;
        delete pInput_uniform ;
    }


    AbstractVariable* pRandomsample;
    AbstractReader *pInput_normal ;
    AbstractReader* pInput_uniform ;
    double alpha ;
    double alpha_bad ;
    int order ;
    int order_bad ;
};

TEST_F(InputTestFixture, Exception_nofile) {
    ASSERT_THROW( pInput_normal ->read_file(TEST_PATH, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_normal_variance_check) {
    ASSERT_THROW(pInput_normal ->read_file(TEST_PATH_VAR, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_normal_mean_check) {
    ASSERT_THROW(pInput_normal ->read_file(TEST_PATH_MEAN,pRandomsample),Error);
}
TEST_F(InputTestFixture, input_normal_alpha_check) {
    ASSERT_THROW(pInput_normal ->read_file(TEST_PATH, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_normal_order_check) {
    ASSERT_THROW(pInput_normal ->read_file(TEST_PATH,pRandomsample),Error);
}
TEST_F(InputTestFixture, input_uniform_size_check) {
    ASSERT_THROW( pInput_uniform ->read_file(TEST_PATH_SIZE, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_uniform_lower_bound_check) {
    ASSERT_THROW(pInput_uniform ->read_file( TEST_PATH_MEAN,pRandomsample),Error);
}
TEST_F(InputTestFixture, input_uniform_upper_bound_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_VAR, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_uniform_alpha_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_UNIFORM, pRandomsample),Error);
}
TEST_F(InputTestFixture, input_uniform_order_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_UNIFORM, pRandomsample),Error);
}