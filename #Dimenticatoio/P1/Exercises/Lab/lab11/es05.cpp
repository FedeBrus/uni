#include <iostream>
#include <cmath>

double taylor(double x, int n);
int fact(int n);

int main() {
    double x = 3.14 / 2;
    int n = 10;
    std::cout << "sin(x) = " << taylor(x, n) << std:: endl;
}

double taylor(double x, int n) {
    if (n == 0) {
        return x;
    }

    return pow(-1, n) * (pow(x, 2*n + 1) / fact(2*n + 1)) + taylor(x, n - 1);
}

int fact(int n) {
    if (n == 0) return 1;
    else return n * fact(n - 1);
}