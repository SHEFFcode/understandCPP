//
//  main.cpp
//  understandCPP
//
//  Created by Jeremy Shefer on 4/25/17.
//  Copyright © 2017 Jeremy Shefer. All rights reserved.
//

#include <iostream>
#include "Variables.hpp"
#include "ConditionsAndBranching.hpp"
#include "BreakAndContinue.hpp"
#include "ArrayAlgorithms.hpp"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, world!" << std::endl;
    
//    runVariables();
//    runConditions();
//    runBreakAndContinue();
//    runContinue();
//    runGoTo();
    int max = runArrayAlgos();
    std::cout << max << std::endl;
    
    return 0; // 0 means success
    
}
