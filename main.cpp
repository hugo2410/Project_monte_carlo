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
    AbstractVariable *pRandom = 0;
    string file;
    string input;
    AbstractReader *pReader;
    FunctReader *pFunReader;
    AbstractFunc *pFunction ;
    AbstractExpectation *pExpectation;
    CentralLimitThm *pCThm;
    int order;

    pReader = new NormalReader;
    function_file_name = argv[2];
    dist_type = argv[3];

    pReader = new FunctReader;
    pReader ->read_file(function_file_name,pFunction);
    file_name = argv[1];
    pReader->read_file(file_name,pRandom);
    /*if(argc == 4){

        file_name = argv[1];
        function_file_name = argv[2];
        dist_type = argv[3];

        pReader = new FunctReader;
        pReader ->read_file(function_file_name,pFunction,order);

        if( strcmp(dist_type , "N") == 0 ) {
            pReader = new NormalReader;
        }
        else if(strcmp(dist_type , "U") == 0)
                pReader = new UniformReader;
        else{
            string input;
            cerr << "Wrong distribution type. Please refer to README" << endl;
            cout << "Please enter the of the two distribution types: [U/N] " << endl;
            cin >> input;

            if (input == "U")
                pReader = new UniformReader;
            else if (input == "N")
                pReader = new NormalReader;
            else{
                cerr << "Input invalid !" << endl;
                return -1;
            }
        }
    }
    try{
        pReader->read_file(file_name,pRandom);
    }catch(AbstractError& e){
        cerr << "Exception thrown: " << e.what() << endl;
        return -1;
    }*/
    delete pReader;

//////////////////////////////////////FUNCTION//////////////////////////////////////////////////

    cout << "Calulating Expectation" << endl;
    pExpectation = new MonteCarloExpectation(pFunction,pRandom);
    cout << "Expectation Calculated" << endl;
    cout << pExpectation->getExpectation() << endl;

    //////////////////////////////////////MOMENT//////////////////////////////////////////////////
    StatisticalMoment *pMoment = new StatisticalMoment(pRandom);
    pMoment->write_csv("moments.csv",order);
    cout << "Moment written !" << endl;

    //pCThm = new CentralLimitThm(pRandom);


    return 0;
}