//
// Created by mehdi on 24/11/20.
//

#include <fstream>
#include <iostream>
#include "NormalReader.h"

NormalReader::NormalReader(){}
NormalReader::~NormalReader(){}

void NormalReader::read_file(const char *file){
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
}