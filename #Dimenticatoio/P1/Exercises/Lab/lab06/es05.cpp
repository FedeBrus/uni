#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long binario = 0;

    do {
        cout << "Inserire un numero binario: ";
        cin >> binario;
    } while (binario < 0);

    unsigned long long decimale = 0;
    unsigned long long tmp = binario;
    int cifra = 0;
    int esponente = 0;

    while (tmp > 0) {
        cifra = tmp % 10;
        tmp /= 10;
        
        if (cifra != 0 && cifra != 1) {
            cerr << "ERRORE: Il numero inserito non è binario." << endl;
            return 1;
        }

        decimale += cifra * pow(2, esponente);
        esponente++;
    }

    cout << "Binario: " << binario << " | Decimale : " << decimale << endl;
}