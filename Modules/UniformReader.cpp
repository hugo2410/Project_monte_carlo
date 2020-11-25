//
// Created by mehdi on 24/11/20.
//

#include <fstream>
#include <iostream>
#include "UniformReader.h"

UniformReader::UniformReader(){}
UniformReader::~UniformReader(){}

void UniformReader::read_file(const char *file) {
    std::ifstream read_input (file);
    std::cout<< "File = "<< file<< std::endl;
    if (!read_input.is_open()) {
        throw Error("Couldn't open it  ", "FILE");
    }
    read_input.clear();
    int vectorSize;
    int a;
    int b;
    read_input >> vectorSize;
    read_input >> a;
    read_input >> b;
    std::cout << "J'ai fini de lire une uniforme" << std::endl;
    // Creer une classe uniform avec ses informations
}