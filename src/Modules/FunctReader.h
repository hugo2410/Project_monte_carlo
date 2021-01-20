//
// Created by mehdi on 30/11/20.
//

#ifndef PROJECT_MONTE_CARLO_FUNCTREADER_H
#define PROJECT_MONTE_CARLO_FUNCTREADER_H


#include "AbstractReader.h"
#include "AbstractFunc.h"
/**
 * \brief Function reader class
 */
class FunctReader  {
public:
    /**
     * \brief Default Constructor
     */
    FunctReader();
    /**
     * \brief Default Destructor
     */
    ~FunctReader();
    /**
     * \brief Read file for user function type and coefficients
     * @param file : file name
     * @param pFunction : Pointer to a user function
     * @param order : Order defined by the user
     */

    void read_file(const char* file, AbstractFunc* &pFunction,int &order) ;
};


#endif //PROJECT_MONTE_CARLO_FUNCTREADER_H
