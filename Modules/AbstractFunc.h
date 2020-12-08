//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
#define PROJECT_MONTE_CARLO_ABSTRACTFUNC_H

#include "AbstractError.hpp"
#include "AbstractVariable.h"

class AbstractFunc {
public:

    /**
     * \brief Default Constructor
     */
    AbstractFunc();
    /**
     * \brief Constructor
     * Construct a function with coefficient a and b (e.g : f(x) = ax+b)
     * @param a : First Coefficient
     * @param b : Second CoefficientS
     */
    AbstractFunc(int a, int b):coef_a(a),coef_b(b){}
    /**
     * \brief Default Destructor
     */
    virtual ~AbstractFunc();

    /**
     * \brief Abstract function to compute the evaluation of the user function on x [(f(x)]
     * @param x : A random sample
     * @return f(x)
     */
    virtual double evaluate(double x) = 0;

protected:
    int coef_a;
    int coef_b;
    int order;
};
#endif //PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
