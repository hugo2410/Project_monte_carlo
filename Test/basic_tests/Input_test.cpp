//
// Created by hugo on 07/12/2020.
//


#include "gtest/gtest.h"
#include "AbstractError.hpp"
#include "AbstractVariable.h"
#include "AbstractReader.h"
#include "NormalReader.h"
#include "UniformReader.h"
#include "FunctReader.h"


#define TEST_PATH_NO_FILE " .txt"
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

        pNormal = new NormalReader;
        pUniform =  new UniformReader;
        pFunc = new FunctReader;

    }

    virtual ~InputTestFixture() {
        delete pNormal ;
        delete pUniform ;
        delete pFunc;
    }


    AbstractVariable* pRandomsample;
    AbstractReader *pNormal ;
    AbstractReader* pUniform ;
    AbstractReader* pFunc;
    double alpha ;
    double alpha_bad ;
    int order ;
    int order_bad ;
};

TEST_F(InputTestFixture, nofile_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_NO_FILE, pRandomsample), FileError);
}
TEST_F(InputTestFixture, normal_variance_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_VAR, pRandomsample), VarError);
}
TEST_F(InputTestFixture, normal_mean_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_MEAN,pRandomsample), MeanError);
}
TEST_F(InputTestFixture, normal_size_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_VECT, pRandomsample), VectSizeError);
}
TEST_F(InputTestFixture, func_order_error) {
    ASSERT_THROW(pFunc ->read_file(TEST_PATH_ORDER,pRandomsample), OrderError);
}
TEST_F(InputTestFixture, input_uniform_size_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_SIZE, pRandomsample), AbstractError);
}
TEST_F(InputTestFixture, input_uniform_lower_bound_check) {
    ASSERT_THROW(pInput_uniform ->read_file( TEST_PATH_MEAN,pRandomsample), AbstractError);
}
TEST_F(InputTestFixture, input_uniform_upper_bound_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_VAR, pRandomsample), AbstractError);
}
TEST_F(InputTestFixture, input_uniform_alpha_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_UNIFORM, pRandomsample), AbstractError);
}
TEST_F(InputTestFixture, input_uniform_order_check) {
    ASSERT_THROW(pInput_uniform ->read_file(TEST_PATH_UNIFORM, pRandomsample), AbstractError);
}*/