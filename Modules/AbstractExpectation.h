//
// Created by mehdi on 28/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H
#define PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H


#include "AbstractVariable.h"
/**
 * \brief Abstract class for expectation computing
 */
class AbstractExpectation {
public:

    /**
     * \brief Abstract function to get the computed expectation of the user defined function
     * @return The computed expectation
     */
    virtual double getExpectation() const = 0;
    /**
     * \brief Abstract function to compute the expectation
     * @param pRandom : Pointer to a random variables. Used to evaluate the user function
     * @return The expectation of the user defined function
     */
    virtual double evaluateExpectation( const AbstractVariable *pRandom)=0;
    /**
     * \brief Abstract function to compute the mean of random samples
     * @param pRandom : pRandom : Pointer to a random variables.
     * @return The mean of the random samples.
     */
    virtual double computeMean( const AbstractVariable *pRandom) = 0 ;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTEXPECTATION_H
