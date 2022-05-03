#include  <iostream>
//using namespace std;

// two things to understand off the bat with c++:
// 1. what the include is adding to the file
// 2. what "using namespace std" does. we wont use it but some do

int main(int argc, char** argv) {
    // points to understand:
        // where cout/cin go, what 'stream's are
        // << and \n characters for c++
    std::cout << "You've entered " << argc << "arguments" << std::endl;
    // alternate to "/n" is std::endl

    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }

    return 0;
    // ending main with a return for success
}