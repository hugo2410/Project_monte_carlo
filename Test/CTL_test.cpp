//
// Created by hugo on 09/12/2020.
//

#include "gtest/gtest.h"
#include "UniformDist.h"
#include "NormalDist.h"
#include "FunctReader.h"
#include "CentralLimitThm.h"
#include "MonteCarloExpectation.h"
#include "CentralLimitThm.h"
#include <cmath>


#define TEST_PATH_FUNC "../Test_files/Functest.txt"
#define TEST_SIZE 1000
#define TEST_UPPER_BOUND 1
#define TEST_LOWER_BOUND -1
#define TEST_MEAN 0
#define TEST_VARIANCE 1

class StandardCentrallLimitThmFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

    }
public:
    StandardCentrallLimitThmFixture() : Test() {


        pUniformsample =  new UniformDist(TEST_SIZE, TEST_LOWER_BOUND, TEST_UPPER_BOUND);
        pNormalsample = new NormalDist(TEST_SIZE ,TEST_MEAN , TEST_VARIANCE ) ;
        order =0;
        pReader = new FunctReader;
        pReader->read_file(TEST_PATH_FUNC, pFunction, order);
        pMontecarlo_uniform = new MonteCarloExpectation(pFunction,pUniformsample);
        pMontecarlo_normal = new MonteCarloExpectation( pFunction,pNormalsample ) ;
        pMontecarlo = new MonteCarloExpectation();
        pCentrallimit = new CentralLimitThm() ;
    }

    virtual ~StandardCentrallLimitThmFixture() {
        delete pMontecarlo_normal;
        delete pMontecarlo_uniform ;
        delete pMontecarlo;
        delete pUniformsample;
        delete pNormalsample ;
        delete pCentrallimit ;
    }


    AbstractVariable* pNormalsample;
    AbstractVariable* pUniformsample;
    MonteCarloExpectation* pMontecarlo_uniform ;
    MonteCarloExpectation* pMontecarlo_normal;
    AbstractReader *pReader;
    AbstractFunc * pFunction ;
    MonteCarloExpectation* pMontecarlo;
    double mean_uniform ;
    int order;
    CentralLimitThm* pCentrallimit ;
};

TEST_F(StandardCentrallLimitThmFixture, uniform_central_limite_check) {
    pCentrallimit->CentralLimitThm(AbstractVariable *pRandom, int multiples)(pUniformsample,pMontecarlo_uniform,0.05);
    EXPECT_TRUE(pCentrallimit->verify_thm());
}
TEST_F(StandardCentrallLimitThmFixture, normal_central_limite_check) {
    pCentrallimit->calculate_CentralLimitThm(pNormalsample,pMontecarlo_normal,0.05);
    EXPECT_TRUE(pCentrallimit->verify_thm());
}
