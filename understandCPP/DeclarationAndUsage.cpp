//
//  DeclarationAndUsage.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "DeclarationAndUsage.hpp"

void runDeclaration() {
    int arr[2] = {1, 2}; // declare and intialize the array
    
    //We have to initialize the array with the same or less number of elements as the array size.
    
    arr[0] = 2; // you can redefine
    arr[1] = 4;
    
}
