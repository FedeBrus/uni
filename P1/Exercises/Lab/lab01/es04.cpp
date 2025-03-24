#include <iostream>

using namespace std;

int main() {
    float r;
    const float pi = 3.14;

    cout << "Inserisci il raggio della sfera: ";
    cin >> r;

    cout << "Il volume della sfera e': " << 4 / 3 * pi * r * r * r;
    return 0;
}