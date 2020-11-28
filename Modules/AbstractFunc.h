//
// Created by hugo on 28/11/2020.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
#define PROJECT_MONTE_CARLO_ABSTRACTFUNC_H

#include "Error.hpp"
#include "AbstractVariable.h"

class AbstractFunc {
public:

    AbstractFunc();

    virtual ~AbstractFunc();
    virtual double evaluate(double x) = 0;
};
#endif //PROJECT_MONTE_CARLO_ABSTRACTFUNC_H
