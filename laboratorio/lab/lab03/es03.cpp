#include <iostream>

using namespace std;

int main() {

    double importo = 0, iva = 22.0;
    char c;

    cout << "Inserire N se si vuole immettere un prezzo netto o L se si vuole immettere un prezzo lordo: " << endl;
    cin >> c;

    bool flagN = (c == 'N');
    bool flagL = (c == 'L');

    cout << "Inserire l'importo: " << endl;
    cin >> importo;

    cout << "Inserire il valore dell'IVA: " << endl;
    cin >> iva;

    cout << (flagL ^ flagN) * (flagN * (importo * (1 + iva / 100.0)) + flagL * (importo / (1 + iva / 100.0))) << endl;

    return 0;
}