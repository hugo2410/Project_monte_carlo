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


#define TEST_PATH_NO_FILE "a.txt"
#define TEST_PATH_SIZE "../TestVectSize.txt"
#define TEST_PATH_VAR "../TestNormalVar.txt"
#define TEST_PATH_ORDER "../TestOrder.txt"
#define TEST_PATH_BOUND "../TestBound.txt"



class ReaderTestFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {
        delete pRandomsample ;
    }

    virtual void SetUp() {
        order = 1 ;
        pRandomsample = 0 ;
    }
public:
    ReaderTestFixture() : Test() {

        pNormal = new NormalReader;
        pUniform =  new UniformReader;
        pFunc = new FunctReader;

    }

    virtual ~ReaderTestFixture() {
        delete pNormal ;
        delete pUniform ;
        delete pFunc;
    }


    AbstractVariable* pRandomsample;
    AbstractReader *pNormal ;
    AbstractReader* pUniform ;
    AbstractReader* pFunc;
    AbstractFunc * pFunction ;

    int order ;
};

TEST_F(ReaderTestFixture, nofile_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_NO_FILE, pRandomsample), FileError);
}
TEST_F(ReaderTestFixture, normal_variance_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_VAR, pRandomsample), VarError);
}
TEST_F(ReaderTestFixture, normal_size_error) {
    ASSERT_THROW(pNormal ->read_file(TEST_PATH_SIZE, pRandomsample), VectSizeError);
}
TEST_F(ReaderTestFixture, func_order_error) {
    ASSERT_THROW(pFunc ->read_file(TEST_PATH_ORDER,pFunction,order), OrderError);// J4AI CHANGE JUSTE POUR TESTER
}
TEST_F(ReaderTestFixture, input_uniform_size_check) {
    ASSERT_THROW(pUniform ->read_file(TEST_PATH_SIZE, pRandomsample), VectSizeError);
}
TEST_F(ReaderTestFixture, uniform_lower_bound_errpr) {
    ASSERT_THROW(pUniform ->read_file(TEST_PATH_BOUND,pRandomsample), BoundError);
}

