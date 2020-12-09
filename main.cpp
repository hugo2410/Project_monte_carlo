/*!
 *
 * main.cpp
 *
 *  Created on: Nov 24, 2020
 * 	   Authors: Akeddar Mehdi <mehdi.akeddar@epfl.ch> &
 * 	            Birch Hugo <hugo.birchd@epfl.ch>
 */

#include <iostream>
#include <cstring>
#include <string>
#include <MonteCarloExpectation.h>
#include <AbstractExpectation.h>
#include <NormalDist.h>
#include <StatisticalMoment.h>
#include <FunctReader.h>
#include <CentralLimitThm.h>

#include "AbstractReader.h"
#include "AbstractFunc.h"
#include "PolynomlFunc.h"
#include "NormalReader.h"
#include "UniformReader.h"
#include "ExpFunc.h"
#include "AbstractVariable.h"
#include "AbstractError.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    const char *file_name;
    const char *function_file_name;
    const char *dist_type;
    int order;
    AbstractVariable *pRandom = 0;
    AbstractVariable *pRandomCTL = 0;
    AbstractReader *pReader;
    FunctReader *pFuncReader;
    AbstractFunc *pFunction ;
    AbstractExpectation *pExpectation;
    CentralLimitThm *pCThm;


    if(argc == 4) {

        file_name = argv[1];
        function_file_name = argv[2];
        dist_type = argv[3];

        pFuncReader = new FunctReader;
        pFuncReader->read_file(function_file_name, pFunction, order);

        if (strcmp(dist_type, "N") == 0) {
            pReader = new NormalReader;
        } else if (strcmp(dist_type, "U") == 0)
            pReader = new UniformReader;
        else{
            cerr << "Wrong distribution type. Please refer to README" << endl;
            return -1;
        }
    }
    else{
            cerr << "Missing distribution type. Please refer to README" << endl;
            return -1;
    }

    try{
        pReader->read_file(file_name,pRandom);
    }catch(AbstractError& e){
        cerr << "Exception thrown: " << e.what() << endl;
        return -1;
    }
    delete pReader;

//////////////////////////////////////FUNCTION//////////////////////////////////////////////////

    cout << "Calulating Expectation" << endl;
    pExpectation = new MonteCarloExpectation(pFunction,pRandom);
    cout << "Expectation Calculated" << endl;
    cout << pExpectation->getExpectation() << endl;
    //////////////////////////////////////MOMENT//////////////////////////////////////////////////
    StatisticalMoment *pMoment = new StatisticalMoment(pRandom);
    pMoment->write_csv("output/moments.csv",order);
    cout << "Moment written !" << endl;
    delete pMoment;
    delete pFunction;
    //////////////////////////////////////CTL//////////////////////////////////////////////////
    cout << "Verifying Central Limit Theorem !" << endl;
    for(int j = 1;j<=3;++j) {
        pCThm = new CentralLimitThm(pRandom,j);
        for (int i = 1; i <= 5; ++i) {
            pRandomCTL = new NormalDist(j * pRandom->get_size(), pRandom->get_mean(), pRandom->get_var());
            pCThm ->verify_thm(pRandomCTL,pExpectation);
        }
    }
    cout << "Verification done. Please launch the visualization script !" << endl;

    delete pRandom;
    delete pRandomCTL;
    delete pExpectation;

    return 0;
}