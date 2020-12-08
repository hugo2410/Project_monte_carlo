//
// Created by hugo on 08/12/2020.
//

#include "gtest/gtest.h"
#include "UniformDist.h"
#include "NormalDist.h"

#include "MonteCarloExpectation.h"
#include <cmath>


#define TEST_SIZE 1000
#define TEST_UPPER_BOUND 6
#define TEST_LOWER_BOUND 2
#define TEST_MEAN 4
#define TEST_VARIANCE 2

class MonteCarloExpectationFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

        true_mean_uniform = (TEST_UPPER_BOUND + TEST_LOWER_BOUND)/2. ;

    }
public:
    MonteCarloExpectationFixture() : Test() {
        pUniformsample =  new UniformDist(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);
        pNormalsample = new NormalDist(TEST_SIZE ,TEST_MEAN , TEST_VARIANCE ) ;
        //mc_uniform = new MonteCarloExpectation(uniform_sample);
        //mc_normal = new MonteCarloExpectation( normal_sample ) ;
        mc = new MonteCarloExpectation();
    }

    virtual ~MonteCarloExpectationFixture() {
        delete mc_uniform;
        delete mc_normal ;
        delete mc;
        delete pUniformsample;
        delete pNormalsample ;
    }
    AbstractVariable* pNormalsample;
    AbstractVariable* pUniformsample;
    MonteCarloExpectation* mc_uniform ;
    MonteCarloExpectation* mc_normal;
    MonteCarloExpectation* mc;
    double true_mean_uniform ;
};

TEST_F(MonteCarloExpectationFixture, mean_uniform_get_check) {
    ASSERT_NEAR(mc_uniform->getExpectation(), true_mean_uniform,1e-1);
}
TEST_F(MonteCarloExpectationFixture, mean_normal_get_check) {
    ASSERT_NEAR(mc_normal->getExpectation(),TEST_MEAN,1e-1);
}
/*TEST_F(MonteCarloExpectationFixture, mean_uniform_calculation_check) {
    ASSERT_NEAR(mc->calculate_expectation(uniform_sample),true_mean_uniform,1e-1);
}
TEST_F(MonteCarloExpectationFixture, mean_normal_calculation_check) {
    ASSERT_NEAR(mc->calculate_expectation(normal_sample),TEST_MEAN,1e-1);
}
*/