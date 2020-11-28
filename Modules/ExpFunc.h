//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_EXPFUNC_H
#define PROJECT_MONTE_CARLO_EXPFUNC_H

#include "AbstractFunc.h"

class ExpFunc : public AbstractFunc{
public:
    ExpFunc();
    ~ExpFunc();
    void build();
    double evaluate(double x);
};


#endif //PROJECT_MONTE_CARLO_EXPFUNC_H
