//#include "InputParser.cpp"
// #include <string>
// #include <iostream>
// #include <vector>
// #include <sstream>
// #include <iterator>// these all move to the header if you need them. you should only need string from here on out
// we will build most everything else
#include "EquationEvaluator.h"
/*
    I would rename to EquationEvaluator, see bottom for explanation
*/
// class LineTokenizer
// { //style points, opening bracket should be on above line "ClassName {"
//     public:
//         std::string eachLine; // looking at an equation, we can abstract away from the idea of a line

//         LineTokenizer(std::string line) // dont need this. we will have a method to evaluate a given line
//         {
//             // not sure what to do with the constructor... kind of confused here
//             // called automatically by compiler every time object of this class is instatiated
//             // 
//             eachLine = line;
//         };
    
//         std::string printToken()
//         {
//             std::istringstream iss(eachLine);
//             std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), 
//             std::ostream_iterator<std::string>(std::cout, "\n"));

//             return eachLine;
//         }

// };

/**
 * Determines if a given string has a whole value number
 *
 * @param token string to evaluate
 * @return true if the given token is a whole number
 */
bool EquationEvaluator::isNum(std::string& token) {
    // https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
    return false;
}

/**
 * Determines if a given string is an operator within [+, -, *, ^]
 *
 * @param token string to evaluate
 * @return true if the given token is a valid operator
 */
bool EquationEvaluator::isOperator(std::string& token) {

    return false;
}

/**
 * Evaluate a given equation represented in post-fix notation within a string
 *
 * @param equation string that contains a equation to process
 * @return the result of the equation or a null pointer if the equation is invalid
 */
int EquationEvaluator::evaluate(std::string equation) {
    // this is where the logic will go to process a 'line' or 'equation'
    
    return 0;
}

/*

So a couple things. The objective of this class is to evaluate a equation and return the answer. Therefore I am going to stub out a few 
methods and try to guide how you think about this class. 


While tokenizing, we need to access each token individually to see if it is a number or operator.
The below algorithm is not the best or worst but I think is at a solid level to learn a couple things. We are splitting each line based
on a delimeter, accessing each token one at a time and deciding what to do with it.


for simplicity I will say that each token will always have a single space between them

Ex. 

stringstream aSingleLine("45 65 + 5 -");
string token;

while (getline(aSingleLine, token, ' ')) {
 // now we have access to a given token
 if (isInt(token)) {
     // push onto the stack
 } else if (isOperator(token)) {
     // perform the operation
     // push result onto stack
 } else {
     // error oh no
     // just print an error and return an empty answer from the class
 }
}

two things to look at - what is that isInt and isOperator methods? methods meaning functions specific to this class. and only used
in this class. I smell a private method. What do they do? well they will have to check if a string is a number - are all characters
of that string a digit? then it is a number. isOperator? is that single char a operator within [+, -, *, ^]?

I hope this is a good stepping off point to learn some more information. This blob along with what I have stubbed out above. xoxo

p.s. create a class without a header file again and the style gods will smite you.

*/