//
// Created by mehdi on 3/12/20.
//

#include <bits/ios_base.h>
#include <fstream>
#include "CentralLimitThm.h"

void open_csv(std::string file, double theoritical_mean);

void write_csv(double sample_mean);

void verify_thm(AbstractVariable *pRandom,AbstractExpectation* pExpectation){
    double theoritical_mean = pRandom->get_mean();
    double theoritical_var = pRandom->get_var();
    double sample_mean = 0 ;
    open_csv("sample means" + std::to_string(pRandom->get_size()), theoritical_mean);
    for(int i = 0;i<1000;++i)
    {
        sample_mean = pExpectation->computeMean(pRandom);
        write_csv(sample_mean);
    }
}

void open_csv(const char* file, double theoritical_mean){

    std::ofstream outputFile;
    outputFile.open(file);
    outputFile.setf(std::ios::scientific);
    outputFile << "Means of size of samples = " << "\n";
    outputFile << theoritical_mean << "\n";
}

void write_csv(double sample_mean){
    outputFile << sample_mean << "\n"
}