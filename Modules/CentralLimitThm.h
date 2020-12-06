//
// Created by mehdi on 3/12/20.
//

#ifndef PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H
#define PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H


#include "AbstractVariable.h"
#include "AbstractExpectation.h"

class CentralLimitThm {
public:
    CentralLimitThm();
    ~CentralLimitThm();
    CentralLimitThm(AbstractVariable *pRandom, int multiples);
    void verify_thm(AbstractVariable *pRandom,AbstractExpectation *pExpectation);

private:
    bool verified ;
};


#endif //PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H
