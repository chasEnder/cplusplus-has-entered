#include "InputParser.h"

// constructor to set filename of the class
InputParser::InputParser(std::string fileName) {
    // todo: implement constructor
    //std::cout << "Please input name of file to be read: " << end1;
    //std::cin >> fileName;
}

// setter to change the file name if need be. modifies filename class member
void InputParser::setFilename(std::string newFile) {
    // todo: implement setter for member [filename]
    
}

// getter for the file name if need be. does not modify filename class member
std::string getFilename(std::string newFile) {
    // todo: implement getter for member [filename]
    return "";
}

// for now, read in every line from [filename] class member
// return: return true if file parse and print was successful
//          false if failed or no [filename]
bool InputParser::readFile() {
    // todo: implement method to read in each line of [filename] and print to cout
    return false;
}
