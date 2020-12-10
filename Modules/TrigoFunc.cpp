//
// Created by hugo on 28/11/2020.
//

#include <math.h>

#include "TrigoFunc.h"

//TrigoFunc::TrigoFunc() {}
TrigoFunc::~TrigoFunc() {}


double TrigoFunc:: evaluate(double x){
    return coef_a*cos(coef_b*x) ;
};