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

#include "Modules/AbstractReader.h"
#include "Modules/NormalReader.h"
#include "Modules/UniformReader.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    const char *file_name;
    const char *dist_type;
    if(argc == 3){
        file_name = argv[1];
        dist_type = argv[2];
    }
    AbstractReader *pReader;
    if(strcmp(dist_type, reinterpret_cast<const char *>('N')) == 0)
        pReader = new NormalReader;
    if(strcmp(dist_type, reinterpret_cast<const char *>('U')) == 0)
        pReader = new UniformReader;
    else
        std::cerr << "Missing distribution type. Please refer to README" << std::endl;
    pReader->read_file(file_name);
    return 0;
}