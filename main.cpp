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

#include "Modules/AbstractReader.h"
#include "Modules/NormalReader.h"
#include "Modules/UniformReader.h"
#include "Modules/Error.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cerr <<  "Bonjour" << endl;
    const char *file_name;
    const char *dist_type;
    AbstractReader *pReader;
    cout <<  "Probleme" << endl;
    if(argc == 3){

        file_name = argv[1];
        dist_type = argv[2];
        if(strcmp(dist_type, reinterpret_cast<const char *>('N')) == 0)
            cout <<  "Going to normal" << endl;
            pReader = new NormalReader;
        if(strcmp(dist_type, reinterpret_cast<const char *>('U')) == 0)
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
            string file;
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
            string input;
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
    try{
        pReader->read_file(file_name);
    }catch(Error& e){
        cerr << "Exception thrown: " << e.getErrorTag() << e.what() << endl;
        return -1;
    }

    pReader->read_file(file_name);
    return 0;
}