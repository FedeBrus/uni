#include <iostream>
#include <fstream>
#include <cctype>

bool is_vowel(char c);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Number of arguments was incorrect" << std::endl;
        exit(1);
    } else {
        std::fstream in;
        in.open(argv[1], std::ios::in);

        if (in.fail()) {
            std::cerr << "Error while trying to open file" << std::endl;
            in.close();
            exit(1);
        }

        char c = '\0';
        int vowels = 0;
        int consonants = 0;

        while (in.get(c)) {
            if (std::isalpha(c)) {
                if (is_vowel(c)) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        std::cout << "Vowels: " << vowels << std::endl;
        std::cout << "Consonants: " << consonants << std::endl;

        in.close();
    }

    return 0;
}

bool is_vowel(char c) {
    c = std::tolower(c);
    return (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u');
}