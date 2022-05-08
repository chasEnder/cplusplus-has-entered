#include "InputParser.h"

// constructor to set filename of the class
InputParser::InputParser(std::string newFile) {
    fileName = newFile;
}


// setter to change the file name if need be. modifies filename class member
void InputParser::setFilename(std::string newFile) {
    fileName = newFile;
}

// getter for the file name if need be. does not modify filename class member
std::string InputParser::getFilename() {
    return fileName;
}

// for now, read in every line from [filename] class member
// return: return true if file parse and print was successful
//          false if failed or no [filename]
bool InputParser::readFile() {
    // todo: implement method to read in each line of [filename] and print to cout
    std::ifstream file(fileName);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            // using printf() in all tests for consistency
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Frick my file isn't open" << std::endl;
        return false;
    }

    return true;
}