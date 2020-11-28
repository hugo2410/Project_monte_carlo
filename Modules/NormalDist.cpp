//
// Created by mehdi on 26/11/20.
//

#include "NormalDist.h"
#include "random"
//#include "boost/math/distributions/normal.hpp"

NormalDist::NormalDist(){}

NormalDist::NormalDist(const int N, const double mean, const double var)
{
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(mean,sqrt(var));
    for (int i =0;i < N; ++i )
    {
        normalSamples.push_back(distribution(generator));
    }
}
NormalDist::NormalDist(const int N): mean(0.0),var(1.0)
{
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(mean,sqrt(var));
    for (int i =0;i < N; ++i )
    {
        normalSamples.push_back(distribution(generator));
    }
}