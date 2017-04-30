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
    //Uninitialized elements are 0s.
    
    int newArrOfZeros[100] = {0}; // All items will be zeros here.
    
    const int SIZE = 20;
    
    int someSizeArr[SIZE]; // This will work
    
    #define ARRSIZE 20
    
    int someOtherSizeArray[ARRSIZE]; // This will work as well
    
    
    
    arr[0] = 2; // you can redefine
    arr[1] = 4;
    
}
