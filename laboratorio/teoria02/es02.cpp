#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 0;
    int n = 0;

    cout << "Inserisci un numero reale x: ";
    cin >> x;

    cout << "Inserisci un numero intero i: ";
    cin >> n;

    double somma = 0;
    for (int i = 1; i <= n; i++) {
        somma += pow(-1, i) * (1/pow(x, i));
    }

    cout << somma << endl;

    return 0;
}