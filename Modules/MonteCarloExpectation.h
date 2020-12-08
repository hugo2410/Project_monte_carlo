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

    /**
     * \brief
     */
    MonteCarloExpectation();
    /**
     * \brief
     */
    ~MonteCarloExpectation();
    /**
     * \brief
     * @param pFunction
     * @param pRandom
     */
    MonteCarloExpectation( AbstractFunc *pFunction,const AbstractVariable *pRandom);
    /**
     * \brief
     * @return
     */
    double getExpectation() const{ return monteCarloExpectation;};
    /**
     * \brief
     * @param pRandom
     * @return
     */
    double evaluateExpectation(const AbstractVariable *pRandom);
    /**
     * \brief
     * @param pRandom
     * @return
     */
    double computeMean( const AbstractVariable *pRandom);
private:
    AbstractFunc *userFunction;
    double monteCarloExpectation;

};


#endif //PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H
