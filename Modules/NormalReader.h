//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_NORMALREADER_H
#define PROJECT_MONTE_CARLO_NORMALREADER_H


#include "AbstractReader.h"
#include "AbstractVariable.h"

#include <fstream>
#include <typeinfo>
#include <iostream>

class NormalReader:public AbstractReader{
public:
    NormalReader();
    ~NormalReader() override;
    void read_file(const char *file,AbstractVariable* &pRandomNormal) override ;
    void read_file(const char* file, AbstractFunc* &pFunction) override;
};


#endif //PROJECT_MONTE_CARLO_NORMALREADER_H
