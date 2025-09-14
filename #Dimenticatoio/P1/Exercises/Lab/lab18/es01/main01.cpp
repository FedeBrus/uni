#include <iostream>
#include <fstream>
#include <cstring>
#include "es01.h"

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Usage: [crypt/decrypt] [inputfile] [outputfile] [key]" << std::endl;
        exit(1);
    }

    int key = atoi(argv[4]);
    char* choice = argv[1];

    std::fstream input, output;
    input.open(argv[2], std::ios::in);

    if (input.fail()) {
        std::cerr << "Error occured while opening input file" << std::endl;
        exit(2);
    }


    char content[256] = {'\0'};
    char c;
    int index = 0;
    while (input.get(c)) {
        content[index] = c;
        index++;
    }
    input.close();

    if (std::strcmp(choice, "crypt") == 0) {
        crypt(content, key);
    } else if (std::strcmp(choice, "decrypt") == 0) {
        decrypt(content, key); 
    }

    output.open(argv[3], std::ios::out);
    if (output.fail()) {
        std::cerr << "Error occured while opening output file" << std::endl;
        exit(3);
    }

    output << content << std::endl;
    output.close();
    return 0;
}