#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Number of arguments was incorrect" << std::endl;
        exit(1);
    } else {
        std::fstream in;
        in.open(argv[1], std::ios::in);

        if (in.fail()) {
            std::cerr << "Error while trying to open file" << std::endl;
            exit(1);
        }

        const int DIM = 128;
        char c = '\0';
        int occ[DIM] = {};
    
        while (in.get(c)) {
            if (c >= 0 && c < DIM) {
                occ[c]++;
            }
        }

        for (int i = 0; i < DIM; i++) {
            if (std::isprint((char)i)) {
                std::cout << "\"" << (char)i << "\": " << occ[i] << std::endl;
            }
        }

        in.close();
    }

    return 0;
}