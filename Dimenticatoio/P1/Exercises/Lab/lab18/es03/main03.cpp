#include <iostream>
#include <fstream>
#include "es03.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: [filename]" << std::endl;
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (input.fail()) {
        std::cerr << "Error occured while opening input file" << std::endl;
        exit(2);
    }

    char buffer [256];
    while (input >> buffer) {
        std::cout << buffer << ":" << verify_email(buffer) << std::endl;
    }

    input.close();
    return 0;
}