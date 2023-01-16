#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Interface.h"
#include "Interface.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    std::cout << "Welcome to Glass Command Line Interface." << std::endl;
    std::cout << "Flags: -h or --help, -i or --input" << std::endl;

    // Create Vector of Strings.  
    std::vector<std::string> args(argv + 1, argv + argc);

    // Print the Vector Size.
    std::cout << "args size: " << args.size() << std::endl;

    // Print out the Vectors.
    for (int i = 0; i < args.size(); i++) {
        std::cout << i << ": " << args[i] << std::endl;

        // Transform the argument to lowercase.
        std::transform(args[i].begin(), args[i].end(), args[i].begin(), ::tolower);

        // Help: -h or --help 
        if (args[i] == "-h" || args[i] == "--help") {
            std::cout << "You entered -h or --help." << std::endl;
        }
    }

    // Testing a Class and Object Initialization.

    Interface commandLineInterface(1, 2);

    int testVariable;
    testVariable = commandLineInterface.getSum();

    std::cout << "Test Variable: " << testVariable << std::endl;

    return 0;
}