#include <iostream>

int fact(int n);

int main() {
    int n = 7;
    std::cout << fact(n) << std::endl;
    return 0;
}

int fact(int n) {
    if (n >= 0) {
        if (n == 0) return 1;
        return n * fact(n - 1);
    }

    return -1;
}