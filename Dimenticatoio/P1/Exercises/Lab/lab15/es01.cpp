#include <iostream>
#include <cmath>
#include <cstring>

int points(const char* str);

int main() {
    const int MAX_LENGTH = 30;
    char str[MAX_LENGTH + 1];

    do {
        std::cout << "Enter a string (maximum length is 30 chars, \"*\" to terminate): ";
        std::cin >> str;
        if (strcmp(str, "*")) {
            std::cout << points(str) << std::endl;
        }
    } while (strcmp(str, "*"));

    return 0;
}

int points(const char* str) {
    int n = strlen(str);
    int sum = 0;
    bool valid = true;

    for (int i = 0; i < n - 1 && valid; i++) {
        if (std::isalpha(str[i]) && std::isalpha(str[i + 1])) {
            sum += std::abs((int)(str[i]) - (int)(str[i + 1]));
        } else {
            valid = false;
            sum = -1;
        }
    }

    return sum;
}