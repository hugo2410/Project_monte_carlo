//
// Created by mehdi on 28/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H
#define PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H


#include "AbstractVariable.h"

class AbstractExpectation {
public:
    AbstractExpectation();
    virtual ~AbstractExpectation();
    virtual double getExpectation() const = 0;
    virtual double evaluateExpectation( const AbstractVariable *pRandom)=0;
    virtual double computeMean( const AbstractVariable *pRandom) = 0 ;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H
