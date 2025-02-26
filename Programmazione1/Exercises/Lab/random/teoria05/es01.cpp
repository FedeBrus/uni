#include <iostream>

using namespace std;

double scalare(double v1[], double v2[], int n);

int main() {
    int n;
    do {
        cout << "Dimensione vettori: ";
        cin >> n;
    } while (n <= 0);

    double v1[n];
    double v2[n];

    cout << "Vettore 1: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "v1[" << i << "]: ";
        cin >> v1[i];
    }

    cout << "Vettore 2: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "v2[" << i << "]: ";
        cin >> v2[i];
    }

    cout << "Prodotto scalare: " << scalare(v1,  v2, n) << endl;

    return 0;
}

double scalare(double v1[], double v2[], int n) {
    double res = 0;
    for (int i = 0; i < n; i++) {
        res += v1[i] * v2[i];
    }
    return res;
}