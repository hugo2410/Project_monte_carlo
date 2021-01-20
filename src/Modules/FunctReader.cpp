//
// Created by mehdi on 30/11/20.
//

#include <iostream>
#include <fstream>
#include "FunctReader.h"
#include "PolynomFunc.h"
#include "ExpFunc.h"
#include "TrigoFunc.h"

FunctReader::FunctReader()= default;
FunctReader::~FunctReader()= default;

void FunctReader::read_file(const char* file, AbstractFunc* &pFunction,int &order)
{
    std::ifstream read_input (file);
    if(!read_input.is_open()){
        throw FileError();
    }
    read_input.clear();
    char functionType;
    read_input >> functionType;
    std::cout<< "functionType = "<<functionType<<std::endl;
    int a,b,user_order;
    read_input >> a;
    read_input >> b;
    read_input >> user_order;
    std::cout<< "order = "<<user_order<<std::endl;
    order = user_order;
    if (order<0){
        throw OrderError();
    }

    switch(functionType)
    {
        case 'P' :
        {
            std::cout << "Reading polynomiale coefficients " << std::endl;
            pFunction = new PolynomFunc(a,b);
            break;
        }
        case 'E':
        {
            std::cout << "Reading Exponential coefficients" << std::endl;
            pFunction = new ExpFunc(a, b);
            break;
        }
        case 'T':
        {
            std::cout << "Reading Trigonometric coefficients"<< std::endl ;
            pFunction = new TrigoFunc(a, b);
            break;
        }
        default:
        {
            throw WrongFormatError();
        }
    }
}