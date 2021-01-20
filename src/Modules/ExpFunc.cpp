//
// Created by hugo on 28/11/2020.
//

#include <math.h>
#include "ExpFunc.h"


ExpFunc::ExpFunc()  {}
ExpFunc::~ExpFunc() {}

double ExpFunc:: evaluate(double x){
    return coef_a*exp(coef_b*x);
};