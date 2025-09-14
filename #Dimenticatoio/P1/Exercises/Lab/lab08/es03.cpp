#include <iostream>

using namespace std;

void try_letter_conversion(char&);

int main() {

    char c = 'a';

    cout << "Inserisci un carattere: ";
    cin >> c;

    try_letter_conversion(c);

    return 0;
}

void try_letter_conversion(char& c) {
    if (c >= 'a' && c <= 'z') {
        cout << (c -= ('a' - 'A')) << endl;
    } else {
        cerr << "Il carattere non e' una lettera minuscola" << endl;
    }
}