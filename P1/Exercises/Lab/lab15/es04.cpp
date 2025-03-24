#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Usage: [input filename] [output filename]" << std::endl;
        exit(1);
    }

    std::fstream input, output;
    input.open(argv[1], std::ios::in);
    output.open(argv[2], std::ios::out);

    if (input.fail()) {
        std::cerr << "Cannot open input file" << std::endl;
        exit(1);
    }

    if (output.fail()) {
        std::cerr << "Cannot open output file" << std::endl;
        exit(1);
    }

    char c;
    while (input.get(c)) output.put(c);

    input.close();
    output.close();

    return 0;
}