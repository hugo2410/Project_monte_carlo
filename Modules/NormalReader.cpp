//
// Created by mehdi on 24/11/20.
//

#include <fstream>
#include <iostream>
#include "NormalReader.h"
#include "NormalDist.h"

NormalReader::NormalReader()= default;
NormalReader::~NormalReader()= default;

void NormalReader::read_file(const char *file,AbstractVariable *pRandomNormal ){
    std::ifstream read_input (file);
    if(!read_input.is_open()){
        throw Error("Couldn't open it  ", "FILE");
    }
    read_input.clear();
    int vectorSize;
    double mean;
    double var;
    read_input >> vectorSize;
    read_input >> mean;
    read_input >> var;
    std::cout << "J'ai fini de lire une normale" << std::endl;
    pRandomNormal = new NormalDist(vectorSize,mean,var);
    std::cout << "J'ai fini de calculer une normale" << std::endl;
    for(int i =0; i<vectorSize;++i)
        std::cout << pRandomNormal->get_vector()[i] << ' ';

}