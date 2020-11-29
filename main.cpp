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

#include "AbstractReader.h"
#include "AbstractFunc.h"
#include "PolynomlFunc.h"
#include "NormalReader.h"
#include "UniformReader.h"
#include "AbstractVariable.h"
#include "Error.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    const char *file_name;
    const char *dist_type;
    AbstractVariable *pRandom = 0;
    char functionType;
    string file;
    string input;
    AbstractReader *pReader;
    AbstractFunc *pFunction ;
    AbstractExpectation *pExpectation;
    //AbstractFunc *pFunction;

    if(argc == 3){

        file_name = argv[1];
        dist_type = argv[2];
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
    if (argc < 3 ) {
        if (argc == 1){

            cerr << "Missing File name to read from. Please refer to README" << endl;
            cout << "Please enter the file name: " << endl;
            cin >> file;
            if(file == ""){
                cerr << "You pressed enter without typing anything" << endl;
                return -1;
            }
            file_name = file.c_str();
            argc = 2;

        }if (argc == 2) {

            cerr << "Missing distribution type. Please refer to README" << endl;
            cout << "Please enter the distribution type: [U/N] " << endl;
            cin >> input;
            if (input == "U")
                pReader = new UniformReader;
            else if (input == "N")
                pReader = new NormalReader;
            else {
                cerr << "Input invalid !" << endl;
                return -1;
            }
        }
    }
    cout<< "file = "<< file_name<< endl;
    try{
        pReader->read_file(file_name,pRandom);
    }catch(Error& e){
        cerr << "Exception thrown: " << e.getErrorTag() << e.what() << endl;
        return -1;
    }
    delete pReader;

//////////////////////////////////////FUNCTION//////////////////////////////////////////////////
    bool selectedFunction = false;
    while(!selectedFunction)
    {
        cout << "Please choose the type of function for expectation calculation : [P/E/T] " << endl;
        cin >> functionType;

        switch(functionType)
        {
            case 'P' :
            {
                cout << "Please enter the polynomial coefficients : [a*x2+b*x+c] :\n " ;cin.ignore();
                int a,b,c;
                cin >> a;
                cin >> b;
                cin >> c;
                pFunction = new PolynomlFunc(a,b,c);
                selectedFunction = true;
                break;
            }
            case 'E':
            {
                cout << "Please enter the exponential coefficients : [A*exp(b*x)] " << endl;
                selectedFunction = true;
                break;
            }
            case 'T':
            {
                cout << "Please enter the trigonometric coefficients : [A*cos(b*x)] " << endl;
                selectedFunction = true;
                break;
            }
            default:
            {
                cout << "You didn't choose an implemented function " << endl;
                break;
            }
        }
    }
    cout << "Calulating Expectation" << endl;
    pExpectation = new MonteCarloExpectation(pFunction,pRandom);
    cout << "Expectation Calculated" << endl;
    cout << pExpectation->getExpectation() << endl;

    //////////////////////////////////////MOMENT//////////////////////////////////////////////////
    StatisticalMoment *pMoment = new StatisticalMoment(pRandom);
    pMoment->write_csv("moments.csv");
    cout << "Moment written !" << endl;


    return 0;
}