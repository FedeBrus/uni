#include <iostream>
#include <climits>

using namespace std;

int massimo(int n1, int n2 = INT_MIN, int n3 = INT_MIN, int n4 = INT_MIN, int n5 = INT_MIN);

int main() {
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    int n4 = 4;
    int n5 = 5;

    char scelta = 'q';
    int iterazione = 0;
    int temp = 0;

    do {
        cout << "Digitare q per uscire e i per inserire: ";
        cin >> scelta;

        if (scelta == 'i') {

            cout << "Inserire un numero: ";
            cin >> temp;

            switch (iterazione) {
                case 0:
                    n1 = temp;
                    break;

                case 1:
                    n2 = temp;
                    break;

                case 2:
                    n3 = temp;
                    break;

                case 3:
                    n4 = temp;
                    break;

                case 4:
                    n5 = temp;
                    break;

                default:
                    break;
            }

            iterazione++;
        }
    } while (scelta != 'q');

    switch (iterazione) {
        case 1:
            cout << massimo(n1) << endl;
            break;

        case 2:
            cout << massimo(n1, n2) << endl;
            break;

        case 3:
            cout << massimo(n1, n2, n3) << endl;
            break;

        case 4:
            cout << massimo(n1, n2, n3, n4) << endl;
            break;

        case 5:
            cout << massimo(n1, n2, n3, n4, n5) << endl;
            break;

        default:
            break;
    }

    return 0;
}

int massimo(int n1, int n2, int n3, int n4, int n5) {
    int max = n1;
    bool trovato = false;

    if (!trovato && n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5) {
        max = n1;
        trovato = true;
    }

    if (!trovato && n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5) {
        max = n2;
        trovato = true;
    }

    if (!trovato && n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5) {
        max = n3;
        trovato = true;
    }

    if (!trovato && n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5) {
        max = n4;
        trovato = true;
    }

    if (!trovato && n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4) {
        max = n5;
        trovato = true;
    }

    return max;
}