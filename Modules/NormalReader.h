//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_NORMALREADER_H
#define PROJECT_MONTE_CARLO_NORMALREADER_H


#include "AbstractReader.h"

class NormalReader:public AbstractReader{
public:
    NormalReader();
    ~NormalReader() override;
    void read_file(const char *file) override;
};


#endif //PROJECT_MONTE_CARLO_NORMALREADER_H
