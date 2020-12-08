//
// Created by mehdi on 29/11/20.
//

#ifndef PROJECT_MONTE_CARLO_STATISTICALMOMENT_H
#define PROJECT_MONTE_CARLO_STATISTICALMOMENT_H


#include "AbstractVariable.h"

class StatisticalMoment {
public:
    /**
     * \brief: Default Constructor
     */
    StatisticalMoment();
    /**
     * \brief Constructor
     *        Define the function "aCos(bx)"
     * @param pRandom
     */

    StatisticalMoment(AbstractVariable *pRandom);

    ~StatisticalMoment();
    void write_csv(const char* file,int order);

private:
    AbstractVariable *randomNumbers;

};


#endif //PROJECT_MONTE_CARLO_STATISTICALMOMENT_H
