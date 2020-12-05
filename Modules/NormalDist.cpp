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
float myErfInv2(float x){
    float tt1, tt2, lnx, sgn;
    sgn = (x < 0) ? -1.0f : 1.0f;

    x = (1 - x)*(1 + x);        // x = 1 - x*x;
    lnx = logf(x);

    tt1 = 2/(3.14*0.147) + 0.5f * lnx;
    tt2 = 1/(0.147) * lnx;

    return(sgn*sqrtf(-tt1 + sqrtf(tt1*tt1 - tt2)));
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
        //std::cout<<sqrt(2)*myErfInv2(2*uniformSamples[i]-1)<<std::endl;
        normalSamples.push_back(sqrt(var)*sqrt(2)*myErfInv2(2*uniformSamples[i]-1)+mean);
        //normalSamples.push_back(distribution(generator));
    }

}
NormalDist::NormalDist(const int N): mean(0.0),var(1.0),initial_sample_size(N)
{
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(mean,sqrt(var));
    for (int i =0;i < N; ++i )
    {
        normalSamples.push_back(distribution(generator));
    }
}

void NormalDist::getMoreSamples(const int multiples){
    for (int j = 0; j < multiples;++j){
        for (int i = 0; i < initial_sample_size; ++i) {
            normalSamples.push_back(sqrt(var)*sqrt(2)*myErfInv2(2*uniformSamples[i]-1)+mean);

        }
    }
}
