//#include "InputParser.cpp"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

class LineTokenizer
{
    public:

        std::string eachLine;

        LineTokenizer(std::string line) 
        {
            // not sure what to do with the constructor... kind of confused here
            // called automatically by compiler every time object of this class is instatiated
            // 
            eachLine = line;
        };
    
        std::string printToken()
        {
            std::istringstream iss(eachLine);
            
        }

};