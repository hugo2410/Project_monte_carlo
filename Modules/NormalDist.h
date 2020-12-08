//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_NORMALDIST_H
#define PROJECT_MONTE_CARLO_NORMALDIST_H


#include <vector>
#include "UniformDist.h"


class NormalDist: public UniformDist{
public:
    /**
     * \brief Default Constructor
     */
    NormalDist();
    /**
     * \brief Constructor
     *        Compute a sample from the standard normal distribution of variance 1 centred in 0  using inverse uniform
     *        sampling.
     * @param N : Positive integer that define the size of the vector.
     */
    NormalDist(const int N);
    /**
     * \brief Constructor
     *       Compute a sample from the standard normal distribution of variance = var centred in mean using inverse
     *       uniform sampling.
     * @param N : Positive integer that define the size of the vector.
     * @param mean : Double representing the mean of the normal distribution
     * @param var : Positive double representing the variance of the normal distribution
     */
    NormalDist(const int N, const double mean, const double var);

    /**
     * \brief Return the vector of the normal sample.
     * @return the vector of the sample
     */
    virtual std::vector<double> get_vector() const { return normalSamples;}
    /**
     * \brief Return the mean of the normal sample.
     * @return the mean of the normal sample.
     */
    virtual double get_mean() const{ return mean;}
    /**
     * \brief Return the variance of the normal sample
     * @return the variance of the normal sample
     */
    virtual double get_var() const { return var;}
    /**
     * \brief Return the length of the normal sample
     * @return The length of the normal sample
     */
    virtual int get_size() const { return normalSamples.size(); }


private:
    std::vector<double> normalSamples ;
    double mean ;
    double var ;
};


#endif //PROJECT_MONTE_CARLO_NORMALDIST_H
