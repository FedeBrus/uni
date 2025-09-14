#include <iostream>

using namespace std;

int main() {

    char risp = 's';

    cout << "Il tuo numero è numero pari? ";
    cin >> risp;

    if (risp == 's') { //0, 2, 4, 6
        cout << "Il tuo numero è minore di 4? ";
        cin >> risp;

        if (risp == 's') { //0, 2
            cout << "La radice del tuo numero è irrazionale? ";
            cin >> risp;

            cout << ((risp == 's') ? "Il tuo numero è 2" : "Il tuo numero è 0") << endl;
        } else { //4, 6
            cout << "Il tuo numero è divisibile per 3? ";
            cin >> risp;

            cout << ((risp == 's') ? "Il tuo numero è 6" : "Il tuo numero è 4") << endl;
        }

    } else { //1, 3, 5, 7
        cout << "Il tuo numero è un numero primo? ";
        cin >> risp;

        if (risp == 's') { //3, 5, 7
            cout << "Il tuo numero è la metà di un numero tondo? ";
            cin >> risp;

            if (risp == 's') {
                cout << "Il tuo numero è 5" << endl;
            } else { // 3, 7
                cout << "Il quadrato del tuo numero è minore di 10? ";
                cin >> risp;

                cout << ((risp == 's') ? "Il tuo numero è 3" : "Il tuo numero è 7") << endl;
            }

        } else {
            cout << "Il tuo numero è 1" << endl;
        }
    }

    return 0;
}