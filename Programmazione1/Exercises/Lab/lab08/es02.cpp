#include <iostream>

using namespace std;

bool is_letter(char);

int main() {

    char c = 'a';

    cout << "Inserisci un carattere: ";
    cin >> c;

    if (is_letter(c)) {
        cout << (char)(c - ('a' - 'A')) << end;
    } else {
        cout << "Il carattere non e' una lettera minuscola" << endl;
    }

    return 0;
}

bool is_letter(char c) {
    return (c >= 'a' && c <= 'z');
}