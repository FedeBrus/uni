#include <iostream>
#include <cmath>

using namespace std;

double norma(double v[], int n);
void normalizza(double v[], int n);

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

    normalizza(v, n);

    cout << "Il vettore normalizzato è: ( ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << ")" << endl;

    return 0;
}

double norma(double v[], int n) {
    double sum;
    for (int i = 0; i < n; i++) sum += v[i] * v[i];
    return sqrt(sum);
}

void normalizza(double v[], int n) {
    double norm = norma(v, n);
    for (int i = 0; i < n; i++) {
        v[i] = v[i] / norm;
    } 
}