#include <iostream>

int main() {
    int a;
    std::cout << "Inserire un numero intero: ";
    std::cin >> a;

    std::cout << "Successivo: " << ++a << std::endl
              << "Precedente: " << (--(--a)) << std::endl;

    return 0;
}