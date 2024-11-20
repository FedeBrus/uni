#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Usage: [file1] [file2]" << std::endl;
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (input.fail()) {
        std::cerr << "Cannot open file " << argv[1] << std::endl;
        exit(1);
    }

    char words[1000][100];
    int n = 0;
    while (input >> words[n]) {
        n++;
    }

    input.close();
    input.open(argv[2], std::ios::in);

    if (input.fail()) {
        std::cerr << "Cannot open file " << argv[2] << std::endl;
        exit(1);
    }

    char common[1000][100];
    int index = 0;
    
    char current_word[100];
    while (input >> current_word) {
        for (int i = 0; i < n; i++) {
            if (std::strcmp(current_word, words[i]) == 0) {
                std::strcpy(common[index], current_word);
                index++;
            }
        }
    }

    input.close();

    for (int i = 0; i < index; i++) {
        std::cout << common[i] << std::endl;
    }

    return 0;
}