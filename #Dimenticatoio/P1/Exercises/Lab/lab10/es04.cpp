#include <iostream>
#include <cmath>

bool is_palindromo(int n);
bool is_palindromo_aux(int cifre[], int numero_cifre, int i);
int get_cifre(int n);
void int_to_array(int cifre[], int numero_cifre, int n);
void int_to_array_aux(int cifre[], int numero_cifre, int n, int i);

int main() {
    int a = 1001;
    int b = 1000;
    int c = 2;
    int d = 121;
    int e = 120;
    int f = 10201;

    std::cout << is_palindromo(a) << std::endl;
    std::cout << is_palindromo(b) << std::endl;
    std::cout << is_palindromo(c) << std::endl;
    std::cout << is_palindromo(d) << std::endl;
    std::cout << is_palindromo(e) << std::endl;
    std::cout << is_palindromo(f) << std::endl;

    return 0;
}

bool is_palindromo(int n) {
    const int numero_cifre = get_cifre(n);
    int cifre[numero_cifre];
    int_to_array(cifre, numero_cifre, n);

    return is_palindromo_aux(cifre, numero_cifre, 0);
}

bool is_palindromo_aux(int cifre[], int numero_cifre, int i) {
    if (i <= numero_cifre / 2) {
        return (cifre[i] == cifre[numero_cifre - i - 1]) * is_palindromo_aux(cifre, numero_cifre, i + 1);
    }

    return true;
}

int get_cifre(int n) {
    if (n / 10 == 0) return 1;
    return 1 + get_cifre(n / 10);
}

void int_to_array(int cifre[], int numero_cifre, int n) {
    int_to_array_aux(cifre, numero_cifre, n, 0);
}

void int_to_array_aux(int cifre[], int numero_cifre, int n, int i) {
    if (i < numero_cifre) {
        cifre[i] = n % 10;
        int_to_array_aux(cifre, numero_cifre, n / 10, i + 1);
    }
}