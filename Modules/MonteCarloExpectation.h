//
// Created by mehdi on 28/11/20.
//

#ifndef PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H
#define PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H


#include "AbstractVariable.h"
#include "AbstractFunc.h"
#include "AbstractExpectation.h"

class MonteCarloExpectation: public AbstractExpectation {
public:
    MonteCarloExpectation();
    ~MonteCarloExpectation();
    MonteCarloExpectation( AbstractFunc *pFunction,const AbstractVariable *pRandom);
    double getExpectation() const{ return monteCarloExpectation;};
    double evaluateExpectation( AbstractFunc *pFunction, const AbstractVariable *pRandom);
private:
    double monteCarloExpectation;

};


#endif //PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H
