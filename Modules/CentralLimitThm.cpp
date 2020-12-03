//
// Created by mehdi on 3/12/20.
//

#include "CentralLimitThm.h"


void verify_thm(AbstractVariable *pRandom,AbstractExpectation* pExpectation){
    double theoritical_mean = pRandom->get_mean();
    double theoritical_var = pRandom->get_var();
    double sample_mean = pExpectation ->evaluateExpectation(pRandom);
}