//
// Created by mehdi on 30/11/20.
//

#ifndef PROJECT_MONTE_CARLO_FUNCTREADER_H
#define PROJECT_MONTE_CARLO_FUNCTREADER_H


#include "AbstractReader.h"
#include "AbstractFunc.h"

class FunctReader {
public:
    FunctReader();
    ~FunctReader();
    void read_file(const char* file, AbstractFunc* &pFunction, int &order) ;
};


#endif //PROJECT_MONTE_CARLO_FUNCTREADER_H
