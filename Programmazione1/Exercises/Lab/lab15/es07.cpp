#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: [input file] [output file] [char]" << std::endl;
        exit(1);
    }

    std::fstream in, out;
    in.open(argv[1], std::ios::in);
    out.open(argv[2], std::ios::out);

    if (in.fail()) {
        std::cerr << "Cannot open file" << std::endl;
        exit(1);
    }

    if (out.fail()) {
        std::cerr << "Cannot open file" << std::endl;
        exit(1);
    }

    char c;
    char e = argv[3][0];

    while (in.get(c)) {
        out.put((c == e) ? '?' : c);
    }

    in.close();
    out.close();

    return 0;
}