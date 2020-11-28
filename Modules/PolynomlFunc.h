//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
#define PROJECT_MONTE_CARLO_POLYNOMLFUNC_H

#include "AbstractFunc.h"

class PolynomlFunc: public AbstractFunc {

public:
    PolynomlFunc();
    ~PolynomlFunc() override;
    PolynomlFunc(int a, int b, int c);

    double evaluate(double x);

private:
int coef_a;
int coef_b;
int coef_c;
};


#endif //PROJECT_MONTE_CARLO_POLYNOMLFUNC_H
