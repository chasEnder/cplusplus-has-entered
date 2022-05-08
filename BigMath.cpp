#include  <iostream>
//using namespace std;

// two things to understand off the bat with c++:
// 1. what the include is adding to the file
// 2. what "using namespace std" does. we wont use it but some do

// Out file includes
#include "InputParser.h"

int main(int argc, char** argv) {
    /*
    How BigMath will operate for now:
        1. read in filename from the command line
        2. create an InputParser
        3. evalute file using input parser

    Building:
        g++ BigMath.cpp InputParser.cpp -o BigMath

    Running:
        ./BigMath TestData.txt
    */

    // 1. read in filename from the command line, error checking
    if (argc != 2) {
        // we have more or less data than we need, fail hard
        return 1;
    }

    // 2. create an InputParser
    InputParser parser = InputParser(argv[1]);

    // 3. evaluate file using input parser
    parser.readFile();

    return 0;
    // ending main with a return for success
}