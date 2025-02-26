#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 1;
    do {
        cout << "Inserisci un numero naturale: ";
        cin >> n;
    } while (n <= 0);

    long double totale = 0;

    for (int i = 1; i <= n; i++) {
        totale += 1 / pow(i, 2);
    }

    long double pi = sqrt(totale * 6);
    cout << "Il valore approssimato di pi greco e': " << pi << endl;
}