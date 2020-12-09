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

class NormalReader:public AbstractReader {
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
    void read_file(const char *file, AbstractVariable *&pRandomNormal) override;

};
#endif //PROJECT_MONTE_CARLO_NORMALREADER_H
