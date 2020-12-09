//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_EXPFUNC_H
#define PROJECT_MONTE_CARLO_EXPFUNC_H

#include "AbstractFunc.h"
/**
 * \brief Exponential function class
 * Derived from AbstractFunc
 */
class ExpFunc : public AbstractFunc{
public:
    /**
     * \brief Default Constructor
     */
    ExpFunc();
    /**
     * \brief Default Destructor
     */
    ~ExpFunc();
    /**
     * \brief Constructor
     *      Define the function "be*xp(ax)"
     * @param a : Second Coefficient
     * @param b : First Coefficient
     */
    ExpFunc(int a, int b):AbstractFunc(a,b){}
    /**
     * \brief Return the evaluation of the user exponential function on a random number
     * @param x : a Random number
     * @return : b*exp(ax)
     */
    double evaluate(double x);
};


#endif //PROJECT_MONTE_CARLO_EXPFUNC_H
