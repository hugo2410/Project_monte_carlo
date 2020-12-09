//
// Created by hugo on 08/12/2020.
//

#include "gtest/gtest.h"
#include "UniformDist.h"
#include "NormalDist.h"
#include "FunctReader.h"

#include "MonteCarloExpectation.h"
#include <cmath>

#define TEST_PATH_FUNC "../Test_files/Functest.txt"
#define TEST_SIZE 1000
#define TEST_UPPER_BOUND 1
#define TEST_LOWER_BOUND -1
#define TEST_MEAN 0
#define TEST_VARIANCE 1

class MonteCarloExpectationFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

        mean_uniform = (TEST_UPPER_BOUND + TEST_LOWER_BOUND)/2. ;

    }
public:
    MonteCarloExpectationFixture() : Test() {
        pUniformsample =  new UniformDist(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);
        pNormalsample = new NormalDist(TEST_SIZE ,TEST_MEAN , TEST_VARIANCE ) ;
        order =0;
        pReader = new FunctReader;
        pReader->read_file(TEST_PATH_FUNC, pFunction, order);
        pMontecarlo_uniform = new MonteCarloExpectation(pFunction,pUniformsample);
        pMontecarlo_normal = new MonteCarloExpectation( pFunction,pNormalsample ) ;
        pMontecarlo = new MonteCarloExpectation();
    }

    virtual ~MonteCarloExpectationFixture() {
        delete pMontecarlo_normal;
        delete pMontecarlo_uniform ;
        delete pMontecarlo;
        delete pUniformsample;
        delete pNormalsample ;
    }
    AbstractVariable* pNormalsample;
    AbstractVariable* pUniformsample;
    MonteCarloExpectation* pMontecarlo_uniform ;
    MonteCarloExpectation* pMontecarlo_normal;
    FunctReader *pReader;
    AbstractFunc * pFunction ;
    MonteCarloExpectation* pMontecarlo;
    double mean_uniform ;
    int order;
};


TEST_F(MonteCarloExpectationFixture, mean_uniform_calculation_test) {
    ASSERT_NEAR(pMontecarlo->computeMean(pUniformsample),mean_uniform,1e-1);
}

TEST_F(MonteCarloExpectationFixture, mean_normal_calculation_test) {
    ASSERT_NEAR(pMontecarlo->computeMean(pNormalsample),TEST_MEAN,1e-1);
}

TEST_F(MonteCarloExpectationFixture, expectation_uniform_test) {
    ASSERT_NEAR(pMontecarlo_uniform->getExpectation(), mean_uniform,5e-1);
}

TEST_F(MonteCarloExpectationFixture, expectation_normal_test) {
    ASSERT_NEAR(pMontecarlo_normal->getExpectation(),TEST_MEAN,5e-1);
}