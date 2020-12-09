//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
#define PROJECT_MONTE_CARLO_POLYNOMLFUNC_H

#include "AbstractFunc.h"
/**
 * \brief Polynomial function class
 * Derived from AbstractFunc
 */
class PolynomFunc: public AbstractFunc {

public:
    /**
     * \brief Default Constructor
     */
    PolynomFunc();
    /**
     * \brief Default Destructor
     */
    ~PolynomFunc() override;
    /**
     * \brief Constructor
     *        Define the function "ax+b"
     * @param a : First Coefficient
     * @param b : Second Coefficient
     */
    PolynomFunc(int a, int b):AbstractFunc(a,b){}
    /**
     * \brief Return the evaluation of the user polynomial function on a random number
     * @param x : a Random sample
     * @return a*x+b
     */
    double evaluate(double x);
};


#endif //PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
