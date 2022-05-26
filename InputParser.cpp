#include "InputParser.h"
// #include <vector> // dont use vector or other libraries


// #include "LineTokenizer.cpp" 
// leaving this for learning so you find that I renamed a class but you have to check references.
// include the EquationEvaluator header file. never a cpp file in an include. bad practice

// constructor to set filename of the class
// have unique syntax
InputParser::InputParser(std::string newFile) {
    // todo: implement constructor
    fileName = newFile;
     
}

// setter to change the file name if need be. modifies filename class member
void InputParser::setFilename(std::string newFile) {
    // todo: implement setter for member [filename]
    fileName = newFile;
}

// getter for the file name if need be. does not modify filename class member
std::string InputParser::getFilename() {
    // todo: implement getter for member [filename]
    return fileName;
}

// for now, read in every line from [filename] class member
// return: return true if file parse and print was successful
//          false if failed or no [filename]
bool InputParser::readFile() {
    // todo: implement method to read in each line of [filename] and print to cout
    std::ifstream myfile(fileName); // might be wrong
    
    std::string line;

    // new stuff from cwk
    EquationEvaluator evalulator;

    if (myfile.is_open()) {
        while (std::getline(myfile,line)) {
            
            // std::cout << line << std::endl;
            // call a new class here that will use this line variable
            // tokenize string
                // have it ouptut to terminal
            // push into stack
            // call method to do operations
            
            // this currently prints out every token (but includes spaces, so will need to
            // change how it's parsed, probably with strtok method)
            
            /*
            std::stringstream ss(line);

            std::vector<std::string> tokens;
            std::string temp_str;
            
            // Tokenizing w.r.t. space ' '
            while(getline(ss, temp_str, ' '))
            {
                tokens.push_back(temp_str);
            }
                
            // Printing the token vector
            for(int i = 0; i < tokens.size(); i++) {
                std::cout << tokens[i] << std::endl;
            }
            */

            // LineTokenizer toks = LineTokenizer(line);
            // toks.printToken();
            evalulator.evaluate(line);

        }
        myfile.close();
    }

    else {
        std::cout << "Unable to open file" << std::endl;
        return false;
    }

    return false;
}


/**
 * @brief 
 * 
 * so the new thing that will happen within this file with the comments I made. You will instantiate a EquationEvaluator
 * and then within your forloop you will call evaluate() on each 'line' or 'equation'. the return of that will soon have
 * the result of our equation or null if it was invalid - in which case we should print an error message
 * 
 */
