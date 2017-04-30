//
//  ArrayAlgorithms.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/29/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include "ArrayAlgorithms.hpp"

int runArrayAlgos() {
    const int noe = 10;
    int arr[noe];
    int max;
    int min;
    
    
    for (int i = 0; i < noe; ++i) {
        std::cout << "Please enter " << i + 1 << ". number." << std::endl;
        std::cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    
    
    for (int i = 1; i < noe; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    
    
    
    return max;
    
}

