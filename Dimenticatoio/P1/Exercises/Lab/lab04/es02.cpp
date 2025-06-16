#include <iostream>

int main() {
    int a, b, min, max; 
    min = 0;
    max = 0;

    std::cout << "Inserire il numero a: ";
    std::cin >> a;
    std::cout << "Inserire il numero b: ";
    std::cin >> b;

    bool flag = a > b;

    min = flag * b + (1 - flag) * a;
    max = flag * a + (1 - flag) * b;

    std::cout << "Min: " << min << std::endl 
              << "Max: " << max << std::endl;

    return 0;
}