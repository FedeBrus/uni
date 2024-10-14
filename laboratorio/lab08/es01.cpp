#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int dividendo = 1, divisore = 1, precisione = 1;

    cout << "Inserire il dividendo: ";
    cin >> dividendo;
    cout << "Inserire il divisore: ";
    cin >> divisore;
    cout << "Inserire la precisione: ";
    cin >> precisione;

    int fattore = pow(10, precisione);
    dividendo *= fattore; 
    int divisione = dividendo / divisore;

    int quoziente = divisione / fattore;
    int resto = divisione % fattore + fattore;

    cout << quoziente << endl;
    cout << resto << endl;

    cout << quoziente << resto << '\r' << quoziente << '.' << endl;
}
