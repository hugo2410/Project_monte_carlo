//
// Created by mehdi on 26/11/20.
//


#include <iostream>
#include "NormalDist.h"
#include "random"

double RationalApproximation(double t)
{
    // Abramowitz and Stegun formula 26.2.23.
    // / The absolute value of the error should be less than 4.5 e-4.
double c[] = {2.515517, 0.802853, 0.010328};
double d[] = {1.432788, 0.189269, 0.001308};
return t - ((c[2]*t + c[1])*t + c[0]) /
(((d[2]*t + d[1])*t + d[0])*t + 1.0);
}

double NormalCDFInverse(double p)
{
    // See article above for explanation of this section.
    if (p < 0.5)
    {
        // F^-1(p) = - G^-1(p)
        return -RationalApproximation( sqrt(-2.0*log(p)) );
    }
    else
    {
        // F^-1(p) = G^-1(1-p)
        return RationalApproximation( sqrt(-2.0*log(1-p)) );
    }
}

NormalDist::NormalDist(){}

NormalDist::NormalDist(const int N, const double mean, const double var):UniformDist(N)
{
    std::default_random_engine generator(std::random_device{}());
    //std::default_random_engine generator;
    std::normal_distribution<double> distribution(mean,sqrt(var));

    for (int i =0;i < N; ++i )
    {
        //std::cout<<uniformSamples[i]<<std::endl;
        std::cout<<NormalCDFInverse(uniformSamples[i])<<std::endl;
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

