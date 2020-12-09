//
// Created by hugo on 07/12/2020.
//

#include "gtest/gtest.h"
#include "NormalDist.h"




#define TEST_SIZE 100
#define TEST_MEAN 4.
#define TEST_VARIANCE 2.



class NormalDistFixture : public ::testing::Test
{
protected:
    virtual void TearDown() {


    }
public:
    NormalDistFixture() : Test() {
            pRandomNormal = new NormalDist(TEST_SIZE, TEST_MEAN, TEST_VARIANCE);

        }


        virtual ~NormalDistFixture() {
            delete pRandomNormal;
        }
        NormalDist* pRandomNormal ;
    };


TEST_F(NormalDistFixture, mean_check) {
    EXPECT_EQ(pRandomNormal->get_mean(),TEST_MEAN);
}

TEST_F(NormalDistFixture, variance_check) {
    EXPECT_EQ(pRandomNormal->get_var(),TEST_VARIANCE);
}

TEST_F(NormalDistFixture, size_check) {
    EXPECT_EQ(pRandomNormal->get_vector().size(),TEST_SIZE);
}




