#include <iostream>

int sum_of_digits(int n);

int main() {
    int n = 25120;
    std::cout << sum_of_digits(n) << std::endl;

    return 0;
}

int sum_of_digits(int n) {
    if (n / 10 == 0) return n;
    return (n % 10) + sum_of_digits(n / 10);
}