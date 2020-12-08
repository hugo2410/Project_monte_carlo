//
// Created by mehdi on 26/11/20.
//


#include <iostream>
#include "NormalDist.h"
#include "random"

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

NormalDist::NormalDist(const int N, const double mean, const double var):UniformDist(N),mean(mean),var(var)
{
    for (int i =0;i < N; ++i )
    {
        normalSamples.push_back(sqrt(var)*sqrt(2)*myErfInv2(2*uniformSamples[i]-1)+mean);
    }

}
NormalDist::NormalDist(const int N):UniformDist(N), mean(0.0),var(1.0)
{
    for (int i =0;i < N; ++i )
    {
        normalSamples.push_back(sqrt(var)*sqrt(2)*myErfInv2(2*uniformSamples[i]-1)+mean);
    }
}

