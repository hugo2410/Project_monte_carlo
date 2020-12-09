//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_TRIGOFUNC_H
#define PROJECT_MONTE_CARLO_TRIGOFUNC_H

#include "AbstractFunc.h"

/**
 * \brief Trigonometric function class
 * Derived from AbstractFunc
 */
class TrigoFunc:public AbstractFunc {
public:
    /**
     * \brief: Default Constructor
     */
    TrigoFunc();
    /**
     * \brief: Default Destructor
     */
    ~TrigoFunc() override;
    /**
     * \brief Constructor
     *        Define the function "aCos(bx)"
     * @param a First Coefficient
     * @param b Second Coefficient
     */
    TrigoFunc(int a, int b):AbstractFunc(a,b){}
    /**
     * \brief Return the evaluation of the user exponential function on a random number
     * @param x : a Random number
     * @return a*Cos(bx)
     */
    double evaluate(double x) override ;

};


#endif //PROJECT_MONTE_CARLO_TRIGOFUNC_H
