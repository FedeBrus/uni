#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Usage: [filename] [character]";
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (input.fail()) {
        std::cerr << "Cannot open file" << std::endl;
        exit(1);
    }

    char c;
    char e = argv[2][0];
    while (input.get(c)) {
        std::cout << ((c == e) ? '?' : c);
    }

    input.close();
    std::cout << std::endl;

    return 0;
}