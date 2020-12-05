//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H
#define PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H

#include <vector>

class AbstractVariable{
public:
    //Return the sample
    virtual std::vector<double> get_vector() const = 0;
    virtual double get_mean() const = 0;
    virtual double get_var() const = 0;
    virtual int get_size() const =0;
    virtual int get_initial_size() const =0 ;
    //virtual void getMoreSamples(const int multiples) const = 0;
};
#endif //PROJECT_MONTE_CARLO_ABSTRACTVARIABLE_H
