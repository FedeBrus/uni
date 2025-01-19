#include <iostream>
#include <fstream>
#include <cstdlib>

int conta_parole(char* words[]);
void genera_parola(char* words[], int size, char new_word[7]);

int main(int argc, char* argv[]) {
    srand(time(NULL));

    if (argc != 2) {
        std::cerr << "Usage: filename" << std::endl;
        exit(1);
    }

    char text[5000];
    char* pwords[5000];
    for (int i = 0; i < 5000; i++) {
        pwords[i] = nullptr;
    }

    std::fstream in;
    in.open(argv[1], std::ios::in);

    if (in.fail()) {
        std::cerr << "Error occurred while trying to open input file" << std::endl;
        exit(2);
    }

    char prev = '\n';
    char buffer;
    int counter = 0;
    int words = 0;
    while (counter < 5000 && in.get(buffer)) {
        text[counter] = buffer;

        if (((buffer >= 'a' && buffer <= 'z') || (buffer >= 'A' && buffer <= 'Z')) && (prev == '\n' || prev == ' ')) {
            pwords[words] = &text[counter];
            words++;
        }

        prev = buffer;
        counter++;
    }

    text[counter] = '\0';

    in.close();

    std::cout << text << std::endl;

    int n = conta_parole(pwords);
    std::cout << n << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << *(pwords[i]);
    }
    std::cout << std::endl;

    char new_word[7];
    genera_parola(pwords, n, new_word);
    std::cout << new_word << std::endl;

    return 0;
}

int conta_parole(char* words[]) {
    int i = 0;
    while (words[i] != nullptr) {
        i++;
    }

    return i;
}

void genera_parola(char* words[], int size, char new_word[7]) {
    for (int i = 0; i < 6; i++) {
        new_word[i] = *(words[rand() % size]);
    }

    new_word[6] = '\0';
}