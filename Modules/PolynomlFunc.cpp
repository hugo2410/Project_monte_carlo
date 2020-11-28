//
// Created by hugo on 28/11/2020.
//

#include <iostream>
#include "PolynomlFunc.h"

PolynomlFunc::PolynomlFunc() {}
PolynomlFunc::~PolynomlFunc() {}

PolynomlFunc::PolynomlFunc(int a, int b, int c):coef_a(a),coef_b(b),coef_c(c){
    std::cout<< "You have built the following polynomial: "<< coef_a<<"* x² + "<<coef_b<<"* x + "<< coef_c<<std::endl;

}

double PolynomlFunc:: evaluate(double x){
    return coef_a*x*x + coef_b*x +coef_c;
};