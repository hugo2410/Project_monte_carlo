//
// Created by mehdi on 3/12/20.
//

#ifndef PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H
#define PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H


#include "AbstractVariable.h"
#include "AbstractExpectation.h"
/**
 * \brief Class to verify the CTL theorem
 */
class CentralLimitThm {
public:
    /**
     * \brief Default Constructor
     */
    CentralLimitThm();
    /**
     * \brief Default Destructor
     */
    ~CentralLimitThm();
    /**
     * \brief Constructor
     *         Define a new csv file to save the means of generated samples of same size
     * @param pRandom : Pointer of initially generated random samples
     * @param multiples : define the size of the new samples (N,2N,3N ...)
     */
    CentralLimitThm(AbstractVariable *pRandom, int multiples);
    /**
     * \brief Compute the mean of the random samples and append it to the existing csv file
     * @param pRandom : Pointer of generated random samples
     * @param pExpectation : Pointer of MonteCarlo Expectation
     */
    void verify_thm(AbstractVariable *pRandom,AbstractExpectation *pExpectation);

private:
    bool verified ;
};


#endif //PROJECT_MONTE_CARLO_CENTRALLIMITTHM_H
