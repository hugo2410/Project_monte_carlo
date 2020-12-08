//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_UNIFORMDIST_H
#define PROJECT_MONTE_CARLO_UNIFORMDIST_H

#include "AbstractVariable.h"

class UniformDist : public AbstractVariable{
public:
    /**
     * \brief Default Constructor
     */
    UniformDist();
    /**
     * \brief Constructor
     * @param N
     */
    UniformDist(const int N);
    /**
     * \brief Constructor
     *        Compute a sample from the standard uniform distribution of lower bound a and high bound b.
     * @param N : Positive integer defining sample size
     * @param a : Integer for lower bound
     * @param b : Integer for higher bound
     */
    UniformDist(const int N, const int a, const int b);
    /**
    * \brief Return the vector of the normal sample.
    * @return the vector of the sample
    */
    virtual std::vector<double> get_vector() const { return uniformSamples;}
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
    virtual int get_size() const { return uniformSamples.size(); }

private:
    double mean;
    double var;
protected:
    std::vector<double> uniformSamples;
};


#endif //PROJECT_MONTE_CARLO_UNIFORMDIST_H
