//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#define PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#include "Error.hpp"
#include "AbstractVariable.h"
#include "AbstractFunc.h"

class AbstractReader {
public:

    AbstractReader();

    virtual ~AbstractReader();
    virtual void read_file(const char *file_name,AbstractVariable* &pRandomVariable) = 0;
    virtual void read_file(const char* file, AbstractFunc* &pFunction,int &order) = 0;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTREADER_H
