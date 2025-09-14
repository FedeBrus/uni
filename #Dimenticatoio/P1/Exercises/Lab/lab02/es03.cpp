#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Inserisci il numero di secondi trascorsi dalla mezzanotte: ";
    cin >> input;

    cout << (input / 3600) << ":" << (input % 3600) / 60 << ":" << (input % 3600) % 60 << endl;
}