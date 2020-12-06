//
// Created by mehdi on 28/11/20.
//


#include "MonteCarloExpectation.h"
#include "AbstractVariable.h"
#include "AbstractFunc.h"

MonteCarloExpectation ::MonteCarloExpectation() {}
MonteCarloExpectation ::~MonteCarloExpectation(){}

MonteCarloExpectation::MonteCarloExpectation( AbstractFunc *pFunction, const AbstractVariable *pRandom)
{
    userFunction = pFunction;
    monteCarloExpectation = evaluateExpectation(pRandom);
}

double MonteCarloExpectation::evaluateExpectation( const AbstractVariable *pRandom) {

    double sum = 0.;
    double var = 0.;
    for (int i = 0; i < pRandom->get_size(); ++i) {
        sum += userFunction->evaluate(pRandom->get_vector()[i]);
    }
    return sum / pRandom->get_size();
}
double MonteCarloExpectation::computeMean( const AbstractVariable *pRandom){
        double sum = 0.;
        double var =0.;
        for(int i=0;i<pRandom->get_size();++i){
            sum += pRandom->get_vector()[i];
        }
        return sum/pRandom->get_size();
}

