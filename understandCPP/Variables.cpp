//
//  Variables.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//
#include <iostream>
#include "Variables.hpp"

void runVariables() {

    int year; //It is not initialized, but it has a vlaue, whatever it had in the memory before it was declared;
    
    year = 2016; // you can declared
    
    year = 2017; // you can reclare
    
    double number;
    
    std::cout << year << std::endl;
    
    std::cout << "Enter and integer to be multiplied by 2:" << std::endl;
    
    std::cin >> number;
    
    std::cout << "Your number multiplied by 2 is " << number * 2 << std::endl;
    
    
    
}
