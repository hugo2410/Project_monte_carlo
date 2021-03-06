//
// Created by mehdi on 24/11/20.
//


#include <fstream>
#include "NormalReader.h"
#include "NormalDist.h"

NormalReader::NormalReader()= default;
NormalReader::~NormalReader()= default;

void NormalReader::read_file(const char *file,AbstractVariable* &pRandomNormal ){
    std::ifstream read_input (file);
    if(!read_input.is_open()){
        throw FileError();
    }
    read_input.clear();
    int vectorSize;
    double mean;
    double var;
    read_input >> vectorSize;
    if ((vectorSize <= 0)){
        throw VectSizeError();
    }
    read_input >> mean;
    read_input >> var;
    if ((read_input.fail())|| (var <= 0)){
        throw VarError();
    }
    std::cout << "Finished reading normal distribution's parameters." << std::endl;
    pRandomNormal = new NormalDist(vectorSize,mean,var);
    std::cout << "Finished computing normal distribution." << std::endl;
}
