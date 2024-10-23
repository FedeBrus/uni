#include <iostream>

using namespace std;

double potenza(int b, int e);

int main() {
    int b = 0;
    int e = 0;
    char scelta = 'i';
    do {
        cout << "Inserisci la base: ";
        cin >> b;
        cout << "Inserisci l'esponente: ";
        cin >> e;
        cout << potenza(b, e) << endl;
        cout << "Insersici 'i' se desideri continuare: ";
        cin >> scelta;
    } while (scelta == 'i');

    return 0;
}

double potenza(int b, int e) {
    if (e == 0) return 1;
    return (e > 0) ? b * potenza(b, e - 1) : (1.0/b) * potenza(b, e + 1);
}