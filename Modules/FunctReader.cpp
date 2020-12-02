//
// Created by mehdi on 30/11/20.
//

#include <iostream>
#include <fstream>
#include "FunctReader.h"
#include "PolynomlFunc.h"
#include "ExpFunc.h"
#include "TrigoFunc.h"

FunctReader::FunctReader()= default;
FunctReader::~FunctReader()= default;

void FunctReader::read_file(const char* file, AbstractFunc* &pFunction,int &order)
{
    std::ifstream read_input (file);
    std::cout<< "File = "<< file<< std::endl;
    if(!read_input.is_open()){
        throw Error("Couldn't open it  ", "FILE");
    }
    read_input.clear();
    char functionType;
    read_input >> functionType;
    switch(functionType)
    {
        case 'P' :
        {
            std::cout << "Reading polynomiale coef:\n " ;
            int a,b,c;
            read_input >> a;
            read_input >> b;
            read_input >> c;
            read_input >> order;
            pFunction = new PolynomlFunc(a,b,c);
            break;
        }
        case 'E':
        {
            std::cout << "Reading Exponential coef:\n " ;
            int a,b;
            read_input >> a;
            read_input >> b;
            read_input >> order;
            //pFunction = new ExpFunc(a, b);
            break;
        }
        case 'T':
        {
            std::cout << "Reading Trigonometric coef:\n " ;
            int a,b;
            read_input >> a;
            read_input >> b;
            read_input >> order;
            break;
            //pFunction = new TrigoFunc(a, b);
        }
        default:
        {
            std::cout << "Wrong File Format ! " << std::endl; //QUITTER PROGRAMME
            break;
        }
    }

}