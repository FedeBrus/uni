#include <iostream>

int main() {
    int a, b;

    std::cout << "Inserire il numero a: ";
    std::cin >> a;
    std::cout << "Inserire il numero b: ";
    std::cin >> b;

    bool uguali = (a <= b) && (b >= a);

    std::cout << "I numeri sono " << (uguali ? "uguali" : "diversi") << std::endl;
    return 0;
}