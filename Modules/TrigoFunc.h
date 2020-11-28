//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_TRIGOFUNC_H
#define PROJECT_MONTE_CARLO_TRIGOFUNC_H

#include "AbstractFunc.h"

class TrigoFunc:public AbstractFunc {
public:
    TrigoFunc();
    ~TrigoFunc() override;
    void build();
    double evaluate(double x) override ;

};


#endif //PROJECT_MONTE_CARLO_TRIGOFUNC_H
