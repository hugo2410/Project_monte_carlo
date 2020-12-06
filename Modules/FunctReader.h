//
// Created by mehdi on 30/11/20.
//

#ifndef PROJECT_MONTE_CARLO_FUNCTREADER_H
#define PROJECT_MONTE_CARLO_FUNCTREADER_H


#include "AbstractReader.h"
#include "AbstractFunc.h"

class FunctReader : public AbstractReader {
public:
    FunctReader();
    ~FunctReader();
    void read_file(const char *file,AbstractVariable* &pRandomVariable) override;
    void read_file(const char* file, AbstractFunc* &pFunction) override;
};


#endif //PROJECT_MONTE_CARLO_FUNCTREADER_H
