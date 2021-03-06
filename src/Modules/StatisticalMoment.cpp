//
// Created by mehdi on 29/11/20.
//

#include <tgmath.h>
#include <fstream>
#include "StatisticalMoment.h"
#include "AbstractVariable.h"

StatisticalMoment::StatisticalMoment(){};
StatisticalMoment::~StatisticalMoment(){};

StatisticalMoment::StatisticalMoment(AbstractVariable* pRandom) {
    randomNumbers = pRandom;
}

void StatisticalMoment::write_csv(const char* file,int order){

    std::ofstream outputFile;
    outputFile.open(file);
    outputFile.setf(std::ios::scientific);
    double mean = randomNumbers->get_mean();
    outputFile << "Order;Statistical Moment\n";
    for(int i = 0; i < order ; ++i)
    {
        double sum = 0.;
        for(auto sample :randomNumbers->get_vector())
        {
            sum += pow(sample-mean,i);
        }
        outputFile << i << ";" << sum/randomNumbers->get_size() << "\n";
    }

}