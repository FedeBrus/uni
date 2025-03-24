#include <iostream>

double investimento(int n, double a, double g, double s);

int main() {
    double a = 25000;
    double g = 0.0015;
    double s = 1.0;
    int n = 0;

    do {
        std::cout << "Inserisci il numero di mesi (min 6): ";
        std::cin >> n;

        if (n < 6) 
            std::cout << "Il minimo numero di mesi per un investimento e' 6" << std::endl;

    } while (n < 6);

    std::cout << investimento(n, a, g, s);
    return 0;
}

double investimento(int n, double a, double g, double s) {
    if (n == 0) return a;
    return investimento(n - 1, a * (1 + g) - s, g, s);
}