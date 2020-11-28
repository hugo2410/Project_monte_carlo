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

#include "AbstractReader.h"
#include "AbstractFunc.h"
#include "PolynomlFunc.h"
#include "NormalReader.h"
#include "UniformReader.h"
#include "AbstractVariable.h"
#include "Error.hpp"

using namespace std;

int main(int argc, char *argv[]) {
/*
    const char *file_name;
    const char *dist_type;
    AbstractVariable *pRandom = 0;
    string file;
    string input;
    AbstractReader *pReader;
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
    delete pReader;*/
    AbstractVariable *pRandom = 0;

    AbstractFunc *pFunction = 0;
    AbstractExpectation *pExpectation = 0;
    pRandom = new NormalDist(3,0,3);
    for(int i =0; i<3;++i)
        cout << pRandom->get_vector()[i] << endl;
    pFunction = new PolynomlFunc(1,2,3);
    pExpectation = new MonteCarloExpectation(pFunction,pRandom);
    //Calculer l'expectation selon le pRandom
    //pFunction = new PolynomlFunc(1,2,3);
    cout << pExpectation->getExpectation() << endl;

    return 0;
}