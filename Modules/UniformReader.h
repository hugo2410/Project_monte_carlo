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
    /**
     * \brief Default Construcot
     */
    UniformReader();
    /**
     * \brief Default Destructor
     */
    ~UniformReader() override;
    /**
     *
     * @param file
     * @param pRandomVariable
     */
    void read_file(const char *file,AbstractVariable* &pRandomVariable) override;
    /**
     *
     * @param file
     * @param pFunction
     * @param order
     */
    void read_file(const char* file, AbstractFunc* &pFunction,int &order) override;
};


#endif //PROJECT_MONTE_CARLO_UNIFORMREADER_H
