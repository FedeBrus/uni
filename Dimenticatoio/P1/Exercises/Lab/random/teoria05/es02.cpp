#include <iostream>
#include <cmath>

using namespace std;

double norma(double v[], int n);

int main() {
    int n = 0;
    do {
        cout << "Inserire la dimensione del vettore: ";
        cin >> n;
    } while (n <= 0);

    double v[n];

    cout << "Vettore: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "]: ";
        cin >> v[i];
    }

    cout << "La norma è: " << norma(v, n) << endl;
    return 0;
}

double norma(double v[], int n) {
    double sum;
    for (int i = 0; i < n; i++) sum += v[i] * v[i];
    return sqrt(sum);
}