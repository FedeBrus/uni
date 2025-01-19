#include <iostream>

using namespace std;

int main() {
    int h, m, s;

    cout << "Inserisci le ore: ";
    cin >> h;
    cout << "Inserisci i minuti: ";
    cin >> m;
    cout << "Inserisci i secondi: ";
    cin >> s;

    cout << 60 * (h * 60 + m) + s << endl;
}
