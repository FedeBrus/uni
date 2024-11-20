#include <iostream>

using namespace std;

int main() {

    bool valid = false;
    int n = 0;

    while(!valid) {

        valid = true;
        cout << "Inserire un numero intero positivo: ";
        cin >> n;

        if (n <= 0) {
            cout << "ERRORE: Il numero inserito non è positivo." << endl;
            valid = false;
        }
    }

    int cifre = 0;
    int numero = n;

    while (n > 0) {
        n /= 10;
        cifre++;
    }

    cout << "Il numero " << numero << " e' composto da " << cifre << " cifre" << endl;

    return 0;
}