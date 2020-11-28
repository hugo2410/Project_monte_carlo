//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_NORMALDIST_H
#define PROJECT_MONTE_CARLO_NORMALDIST_H


#include <vector>
#include "AbstractVariable.h"


class NormalDist: public AbstractVariable{
public:
    NormalDist();
    NormalDist(const int N, const double mean, const double var);
    NormalDist(const int N);
    virtual std::vector<double> get_vector() const { return normalSamples;}
    virtual double get_mean() const{ return mean;}
    virtual double get_var() const { return var;}
    virtual double get_size() const{return normalSamples.size(); }

private:
    std::vector<double> normalSamples ;
    double mean ;
    double var ;
};


#endif //PROJECT_MONTE_CARLO_NORMALDIST_H
