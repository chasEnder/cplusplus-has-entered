#ifndef INPUTPARSER_H
#define INPUTPARSER_H

#include <iostream>
#include <fstream>
#include <string>
// again try to udnerstand each included library

class InputParser
{
// Every class can have private and public variables and methods
// we don't have any private here yet, just a dummy to show it
private:
    std::string filename;

// all methods or variables that are accessable outside of an instance of this class
public:
    // constructor to set filename of the class
    InputParser(std::string fileName);

    // setter to change the file name if need be. modifies filename class member
    void setFilename(std::string newFile);

    // for now, read in every line from [filename] class member
    void readFile();
};

#endif