#include <iostream>

using namespace std;

int main() {

    int n = 1;

    do {
        cout << "Inserire un numero intero positivo: ";
        cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        
        for (int j = i + 1; j < n; j++) { // I numeri di spazi sono n - (riga + 1)
            cout << " ";
        }

        for (int j = 0; j < (i * 2 + 1); j++) { // Il numero di asterischi sono il numero della riga * 2 + 1
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}