//
// Created by mehdi on 26/11/20.
//

#include <random>
#include "UniformDist.h"

UniformDist::UniformDist(){}

UniformDist::UniformDist(const int N,const int a, const int b) : mean(a+b/2.0),var(pow(a+b,2)/12.0)
{
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(mean,sqrt(var));
    for (int i =0;i < N; ++i )
    {
        uniformSamples.push_back(distribution(generator));
    }
}
UniformDist::UniformDist(const int N) : mean(0.5),var(1.0/12.0)
{
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(mean,sqrt(var));
    for (int i =0;i < N; ++i )
    {
        uniformSamples.push_back(distribution(generator));
    }
}