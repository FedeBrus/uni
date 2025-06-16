#include <iostream>

void hanoi(int n);
void muovi(int n, int source, int dest);

int main() {
    hanoi(4);
    return 0;
}

void hanoi(int n) {
    muovi(n, 0, 1);
}

void muovi(int n, int source, int dest) {
    if (n <= 1) {
        std::cout << "[" << source << "] -> [" << dest << "]" << std::endl;
        return;
    }

    int spare;
    for (int i = 0; i < 3; i++) {
        if (source != i && dest != i) spare = i;
    }

    muovi(n - 1, source, spare);
    muovi(1, source, dest);
    muovi(n - 1, spare, dest);
}