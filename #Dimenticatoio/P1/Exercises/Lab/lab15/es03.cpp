#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: [filename]" << std::endl;
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (input.fail()) {
        std::cerr << "Cannot open file" << std::endl;
        exit(1);
    }

    char c;
    while (input.get(c)) std::cout << c;
    std::cout << std::endl;

    input.close();
    return 0;
}