#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Number of arguments was incorrect" << std::endl;
        exit(1);
    } else {
        std::fstream in;
        std::fstream out;
        in.open(argv[1], std::ios::in);
        if(in.fail()) {
            std::cerr << "Error while trying to open file " << argv[1] << std::endl;
            exit(1);
        }

        out.open(argv[2], std::ios::out);
        if (out.fail()) {
            std::cerr << "Error while trying to open file " << argv[2] << std::endl;
            in.close();
            exit(1);
        }

        char c = '\0';
        while (in.get(c)) {
            if (c == '\t' || c == '\n') {
                out.put(' ');
            } else if (c == ' ') {
                while (in.peek() == ' ') {}
                out.put(' ');
            } else {
                out.put(c);
            }
        }

        in.close();
        out.close();
    }

    return 0;
}