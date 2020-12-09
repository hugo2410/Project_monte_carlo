//
// Created by mehdi on 28/11/20.
//

#ifndef PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H
#define PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H


#include "AbstractVariable.h"
#include "AbstractFunc.h"
#include "AbstractExpectation.h"
/**
 * \brief Class to compute the monte carlo expectation of a sample
 * Derived form AbstractExpectation class
 */
class MonteCarloExpectation: public AbstractExpectation {
public:

    /**
     * \brief Default constructor.
     */
    MonteCarloExpectation();
    /**
     * \brief Default Destructor.
     */
    ~MonteCarloExpectation();
    /**
     * \brief Constructor
     *                  Defines the user's function and the expectation.
     * @param pFunction Pointer to the user defined function.
     * @param pRandom   Pointer to the previously defined distibution.
     */
    MonteCarloExpectation( AbstractFunc *pFunction,const AbstractVariable *pRandom);
    /**
     * \brief Returns the value of the previously computed expectation.
     * @return The value of the expectation.
     */
    double getExpectation() const{ return monteCarloExpectation;};
    /**
     * \brief Computes the value of the expctetation for a given function depending on the distribution of pRandom.
     * @param pRandom Pointer to the previously defined distibution.
     * @return The value of the expectation.
     */
    double evaluateExpectation(const AbstractVariable *pRandom);
    /**
     * \brief Computes the mean of a given distribution.
     * @param pRandom Pointer to the previously defined distibution.
     * @return The value of the mean.
     */
    double computeMean( const AbstractVariable *pRandom);
private:
    AbstractFunc *userFunction;
    double monteCarloExpectation;

};


#endif //PROJECT_MONTE_CARLO_MONTECARLOEXPECTATION_H
