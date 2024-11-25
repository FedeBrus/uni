#include <iostream>
#include <fstream>
#include "pila.h"

void read_into_stack(const char input_filename[]);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage [input filename] [output filename]" << std::endl;
        exit(1);
    }

    pila_init();
    read_into_stack(argv[1]);

    std::fstream output;
    output.open(argv[2], std::ios::out);
    if (output.fail()) {
        std::cerr << "Error while trying to write to file" << std::endl;
        exit(3);
    }

    do {
        int num_buff;
        if (pila_top(num_buff)) {
            output << num_buff << std::endl;
        }
    } while (pila_pop());

    output.close();
    pila_deinit();
    return 0;
}

void read_into_stack(const char input_filename[]) {
    std::fstream input;
    input.open(input_filename, std::ios::in);

    if (input.fail()) {
        std::cerr << "Error while trying to read from file" << std::endl;
        exit(2);
    }

    char buffer[256];
    while (input >> buffer) {
        pila_push(atoi(buffer));
    }

    input.close();
}