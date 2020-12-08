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
    /**
     * \brief: Default Constructor
     */
    NormalReader();
    /**
     * \brief: Default Destructor
     */
    ~NormalReader() override;
    /**
     *
     * @param file
     * @param pRandomNormal
     */
    void read_file(const char *file,AbstractVariable* &pRandomNormal) override ;
    /**
     *
     * @param file
     * @param pFunction
     * @param order
     */
    void read_file(const char* file, AbstractFunc* &pFunction,int &order) override;
};


#endif //PROJECT_MONTE_CARLO_NORMALREADER_H
