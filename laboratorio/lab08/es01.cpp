#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int dividendo = 732, divisore = 81, precisione = 4;

    /*
    cout << "Inserire il dividendo: ";
    cin >> dividendo;
    cout << "Inserire il divisore: ";
    cin >> divisore;
    cout << "Inserire la precisione: ";
    cin >> precisione;
    */

    int fattore = pow(10, precisione);
    dividendo *= fattore; 
    int quoziente = dividendo / divisore;

    int resto = fattore + (quoziente % fattore);
    quoziente = quoziente / fattore;

    // STAMPA NON FUNZIONANTE WIP
    cout << quoziente << resto << '\r' << quoziente << '.' << (resto % fattore) << endl;    return 0;
}
