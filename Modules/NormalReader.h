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
     **\brief Reads file for distribution type and parameters
     * @param file : File name
     * @param pRandomVariable : Pointer to previously to distribution
     */
    void read_file(const char *file,AbstractVariable* &pRandomNormal) override ;
    /**
     *\brief Abstract function to Read file for user function type and coefficients
     * @param file: File name
     * @param pFunction : Pointer to a user function
     * @param order : Order defined by the user
     */
    void read_file(const char* file, AbstractFunc* &pFunction,int &order) override;
};


#endif //PROJECT_MONTE_CARLO_NORMALREADER_H
