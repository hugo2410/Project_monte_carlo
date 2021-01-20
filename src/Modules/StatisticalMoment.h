//
// Created by mehdi on 29/11/20.
//

#ifndef PROJECT_MONTE_CARLO_STATISTICALMOMENT_H
#define PROJECT_MONTE_CARLO_STATISTICALMOMENT_H


#include "AbstractVariable.h"

/**
 * \brief Class to compute the statistical moments of a given sample
 */
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
    /**.
     * \brief Writes statistical moment to a csv file depending on a given order.
     * @param file : String containing the file name to write the statistical moment to.
     * @param order : Positive Integer that defines statistical order
     */
    void write_csv(const char* file,int order);

private:
    AbstractVariable *randomNumbers;
};


#endif //PROJECT_MONTE_CARLO_STATISTICALMOMENT_H
