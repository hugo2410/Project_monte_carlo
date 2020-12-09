//
// Created by mehdi on 3/12/20.
//

#include <bits/ios_base.h>
#include <fstream>
#include "CentralLimitThm.h"

void open_csv(std::string file, double theoritical_mean, double theoritical_var);

void write_csv(std::string file,double sample_mean);

CentralLimitThm::CentralLimitThm(AbstractVariable *pRandom,int multiples){
    std::string file_name = "output/sample_means_" + std::to_string(multiples*pRandom->get_size())+".csv";
    open_csv(file_name, pRandom->get_mean(),pRandom->get_var());
}

void CentralLimitThm::verify_thm(AbstractVariable *pRandom,AbstractExpectation* pExpectation){
    double sample_mean = 0 ;
    std::string file_name = "output/sample_means_" + std::to_string(pRandom->get_size())+".csv";
    sample_mean = pExpectation->computeMean(pRandom);
    write_csv(file_name,sample_mean);
}

void open_csv(std::string file, double theoritical_mean, double theoritical_var){
    std::ofstream outputFile;
    outputFile.open(file);
    outputFile << theoritical_mean << "\n";
    outputFile << theoritical_var << "\n";
}

void write_csv(std::string file, double sample_mean){
    std::ofstream outputFile;
    outputFile.open(file,std::ios_base::app);
    outputFile << sample_mean << "\n";
}