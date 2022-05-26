#ifndef EQUATIONEVALUATOR_H
#define EQUATIONEVALUATOR_H

#include <string>
#include "Stack.h"

class EquationEvaluator {
private:
    Stack processingStack;

    //line seperating memebrs and methods for syntax and readability
    bool isNum(std::string& token);
    bool isOperator(std::string& token); // oooh a pointer to a string, read up on this "&"

public:
    // this is the method that we will call from InputParser to evaluate each line
    int evaluateEquation(std::string equation); // the return type will change [int -> LargeNumber]
};

#endif