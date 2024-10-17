#include <iostream>

int divisione(int dividendo, int divisore);

int main() {
    int dividendo = 102;
    int divisore = 5;

    std::cout << divisione(dividendo, divisore) << std::endl;

    return 0;
}

int divisione(int dividendo, int divisore) {
    if (dividendo < divisore) return 0;
    return 1 + divisione(dividendo - divisore, divisore);
}