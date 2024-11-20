#include <iostream>

void print_bin(int n);

int main() {
    int n = 345;
    print_bin(n);
    std::cout << std::endl;
}

void print_bin(int n) {
    if (n == 0) std::cout << 0;
    else if (n == 1) std::cout << 1;
    else {
        print_bin(n / 2);
        std::cout << n % 2;
    }
}