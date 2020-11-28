//
// Created by mehdi on 24/11/20.
//


#include "UniformReader.h"
#include "UniformDist.h"

UniformReader::UniformReader(){}
UniformReader::~UniformReader(){}

void UniformReader::read_file(const char *file,AbstractVariable *pRandomUniform) {
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
    if ((read_input.fail())|| (vectorSize <= 0)){
        throw Error("VARIABLE","The vector's size needs to be a positive integer");
    }
    read_input >> a;
    if (read_input.fail() ){
        throw Error("VARIABLE","The lower bound needs to be a float number");
    }
    read_input >> b;
    if (read_input.fail()){
        throw Error("VARIABLE","The lower bound needs to be a float number");
    }
    else if (b <= a){
        throw Error("VARIABLE","The upper bound needs to be strictly greater then the previous value");
    }
    std::cout << "J'ai fini de lire une uniforme" << std::endl;
    // Creer une classe uniform avec ses informations
    pRandomUniform = new UniformDist(vectorSize,a,b);
    std::cout << "J'ai fini de calculer une normale" << std::endl;
    for(int i =0; i<vectorSize;++i)
        std::cout << pRandomUniform->get_vector()[i] << ' ';

}