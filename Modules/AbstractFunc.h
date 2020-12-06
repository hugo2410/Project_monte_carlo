//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
#define PROJECT_MONTE_CARLO_ABSTRACTFUNC_H

#include "AbstractError.hpp"
#include "AbstractVariable.h"

class AbstractFunc {
public:

    AbstractFunc();
    virtual ~AbstractFunc();
    AbstractFunc(int a, int b,int o):coef_a(a),coef_b(b), order(o){}
    virtual double evaluate(double x) = 0;

protected:
    int coef_a;
    int coef_b;
    int order;
};
#endif //PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
