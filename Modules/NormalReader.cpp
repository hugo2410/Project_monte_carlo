//
// Created by mehdi on 24/11/20.
//


#include "NormalReader.h"
#include "NormalDist.h"

NormalReader::NormalReader()= default;
NormalReader::~NormalReader()= default;

void NormalReader::read_file(const char *file,AbstractVariable* &pRandomNormal ){
    std::ifstream read_input (file);
    std::cout<< "File = "<< file<< std::endl;
    if(!read_input.is_open()){
        throw Error("Couldn't open it  ", "FILE");
    }
    read_input.clear();
    int vectorSize;
    double mean;
    double var;
    read_input >> vectorSize;
    if ((read_input.fail())|| (vectorSize <= 0)){
        throw Error("VARIABLE","The vector's size needs to be a positive integer");
    }
    read_input >> mean;
    if (read_input.fail()){
        throw Error("VARIABLE","The mean needs to be a float number");
    }
    read_input >> var;
    if ((read_input.fail())|| (var <= 0)){
        throw Error("VARIABLE","The variance needs to be a positive float number");
    }
    std::cout << "J'ai fini de lire une normale" << std::endl;
    pRandomNormal = new NormalDist(vectorSize,mean,var);
    std::cout << "J'ai fini de calculer une normale" << std::endl;
}

void NormalReader::read_file(const char* file, AbstractFunc* &pFunction,int &order){}
