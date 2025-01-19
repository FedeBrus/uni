#include <iostream>

int main() {
    unsigned int a, b;

    std::cout << "Inserisci il numero di righe (naturale > 0): ";
    std::cin >> a;
    std::cout << "Inserisci il numero di colonne (naturale > 0): ";
    std::cin >> b;

    std::cout << ((a <= 1) || (b <= 1) ? '0' : '1') << std::endl;
    return 0;
}