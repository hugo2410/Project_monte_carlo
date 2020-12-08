//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
#define PROJECT_MONTE_CARLO_POLYNOMLFUNC_H

#include "AbstractFunc.h"

class PolynomFunc: public AbstractFunc {

public:
    PolynomFunc();
    ~PolynomFunc() override;
    PolynomFunc(int a, int b):AbstractFunc(a,b){}
    double evaluate(double x);
};


#endif //PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
