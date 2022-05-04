#ifndef INPUTPARSER_H
#define INPUTPARSER_H
//  Response: header guards, prevents redeclaration ... generally get this

#include <iostream>
#include <fstream>
//  Response: to be able to read/write files?
#include <string>
//  Response: allows for use of string object type

// again try to understand each included library

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

    // getter for the file name if need be. does not modify filename class member
    std::string getFilename(std::string newFile);

    // for now, read in every line from [filename] class member
    bool readFile();
};

#endif
