//
//  BreakAndContinue.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "BreakAndContinue.hpp"

void runBreakAndContinue() {
    int sum = 0;
    
    for (int i = 1; i < 50; i++) {
        int number;
        
        std::cout << "Enter number or -1 to exit." <<std::endl;
        std::cin >> number;
        
        if (number == -1) {
            break;
        }
        
        sum += number;
        
    }
    
    std::cout << "Sum is " << sum << std::endl;
}
