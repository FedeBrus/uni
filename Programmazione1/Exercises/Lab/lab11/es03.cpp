#include <iostream>

int mcd(int a, int b);
int mcd_iter(int a, int b);

int main() {
    std::cout << mcd_iter(22, 33) << std::endl;
    return 0;
}

int mcd(int a, int b) {
    if (b == 0) return a;
    return mcd(b, a % b);
}

int mcd_iter(int a, int b) {
    int r = 0; 
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}