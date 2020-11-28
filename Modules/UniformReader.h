//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_UNIFORMREADER_H
#define PROJECT_MONTE_CARLO_UNIFORMREADER_H

#include "AbstractReader.h"

#include <fstream>
#include <typeinfo>
#include <iostream>

class UniformReader: public AbstractReader{
public:
    UniformReader();
    ~UniformReader() override;
    void read_file(const char *file,AbstractVariable *pRandomVariable) override;
};


#endif //PROJECT_MONTE_CARLO_UNIFORMREADER_H
