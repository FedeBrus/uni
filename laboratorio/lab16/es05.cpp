#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: [filename]" << std::endl;
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (!input) {
        std::cerr << "Cannot read from file" << std::endl;
        exit(2);
    }

    int f[26] = {};
    char buffer;
    while (input.get(buffer)) {
        if (std::isalpha(buffer)) {
            f[std::tolower(buffer) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        std::cout << char('a' + i) << ": " << f[i] << std::endl;
    }

    input.close();
    return 0;
}