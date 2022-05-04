#include  <iostream>
//using namespace std;

// two things to understand off the bat with c++:
// 1. what the include is adding to the file
//      Response: directive, interpreted by preprocessor, which includes standard C++ code,
//      allows for input and output operations to be written to the screen
// 2. what "using namespace std" does. we wont use it but some do
//      Response: allows for some brevity in not having to use std::cout
//      which allows us to use the 'unqualifed name'
//      Question posed then: can you include multiple namespaces? I'm guessing not because then certain code
//      might not know which namespace is being used, so there wouldn't be a 'qualified name'

// Out file includes
#include "InputParser.h"

int main(int argc, char** argv) {
    // points to understand:
        // where cout/cin go, what 'stream's are
        // << and \n characters for c++
    std::cout << "You've entered " << argc << "arguments" << std::endl;
    // alternate to "/n" is std::endl

    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }

    /*
     above is for understanding
     below will be for actual implementation

     also notice the multi line comment :) some fun syntax
    */

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
   std::cout << "Filename provided: " << argv[1] << std::endl;
   InputParser parser = InputParser(argv[1]);
   
   // 3. evaluate file using input parser
   parser.readFile();

    return 0;
    // ending main with a return for success
}