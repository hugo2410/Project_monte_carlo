//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#define PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#include "AbstractError.hpp"
#include "AbstractVariable.h"
#include "AbstractFunc.h"

class AbstractReader {
public:

    /**
     * \brief Default Constructor
     */
    AbstractReader();

    /**
     * \brief Default Destructor
     */
    virtual ~AbstractReader();
    /**
     * \brief Abstract function to read the distribution file
     * @param file_name : Distribution file name
     * @param pRandomVariable : Pointer to a Random variable
     */
    virtual void read_file(const char *file_name,AbstractVariable* &pRandomVariable) = 0;
    /**
     *
     * \brief Abstract function to read the function file
     * @param file : Function file name
     * @param pFunction : Pointer to a Function
     * @param order : The number of orders required by the user
     */
    virtual void read_file(const char* file, AbstractFunc* &pFunction,int &order) = 0;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTREADER_H
