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
}
