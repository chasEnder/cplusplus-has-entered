#include "InputParser.h"

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

    if (myfile.is_open()) {
        while (std::getline(myfile,line)) {
            std::cout << line << std::endl;
            // call a new class here that will use this line variable
            // tokenize string
                // have it ouptut to terminal
            // push into stack
            // call method to do operations
        }
        myfile.close();
    }

    else {
        std::cout << "Unable to open file" << std::endl;
        return false;
    }

    return false;
}
