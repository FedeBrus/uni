#include <iostream>

using namespace std;

int main() {
    char c;

    do {
        cout << "Inserire una lettera dell'alfabeto: " << endl;
        cin >> c;

        if (c <= 'Z') {
            c += 'a' - 'A'; //converto tutto in minuscolo per ridurre i case dello switch
        }
    } while (!(c >= 'a' && c <= 'z')); //richiedo l'input se il carattere non si trova nel range a...z

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "La lettera e' una vocale" << endl;
            break;

        default:
            cout << "La lettera e' una consonante" << endl;
            break;
    }

    return 0;
}