//
// Created by mehdi on 24/11/20.
//


#include <fstream>
#include "UniformReader.h"
#include "UniformDist.h"

UniformReader::UniformReader(){}
UniformReader::~UniformReader(){}

void UniformReader::read_file(const char *file,AbstractVariable* &pRandomUniform) {
    std::ifstream read_input (file);
    if (!read_input.is_open()) {
        throw FileError();
    }
    read_input.clear();
    int vectorSize;
    int a;
    int b;
    read_input >> vectorSize;
    if (vectorSize <= 0){
        throw VectSizeError();
    }
    read_input >> a;
    read_input >> b;
    if (b <= a){
        throw BoundError();
    }
    std::cout << "Reading Uniform parameters from file" << std::endl;
    pRandomUniform = new UniformDist(vectorSize,a,b);
    std::cout << "Uniform parameters correctly read" << std::endl;
}
