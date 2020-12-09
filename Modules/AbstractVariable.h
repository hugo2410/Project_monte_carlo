//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H
#define PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H

#include <vector>
/**
 * \brief
 */
class AbstractVariable{
public:
    /**
     * \brief Abstract function to return the vector of generated random numbers
     * @return A vector of generated random numbers
     */
    virtual std::vector<double> get_vector() const = 0;
    /**
     * \brief Abstract function to return the mean of the distribution defined by the user
     * @return The mean of the distribution
     */
    virtual double get_mean() const = 0;
    /**
     * \brief Abstract function to return the variance of the distribution defined by the user
     * @return The variance of the distribution
     */
    virtual double get_var() const = 0;
    /**
     * \brief Abstract function to return the number of random numbers defined by the user
     * @return The number of random numbers
     */
    virtual int get_size() const =0;
};
#endif //PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H
