//
//  ConditionsAndBranching.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "ConditionsAndBranching.hpp"

void runConditions() {
    int x = 10;
    
    if (x > 6) {
        std::cout << "X is greater then 6" << std::endl;
    } else if (x == 10) {
        std::cout << "X is 10" << std::endl; // the loop never gets here.
    }
    
    
    int a = 2, b = 3;
    
    if (a > 4, b > 1) { // this will only look at the last operation of the comma separated list.  If it is true, it will return true and go into the if block.
        std::cout << "Something" << std::endl;
    }
    
    
    int arr[] = {5, 4, 1, 2, 3, -2};
    double arr2[] = {1.1, 2.2, 6.1, 3.5};
    
    for (int i : arr) {
        std::cout << i << std::endl;
    }
    
}
