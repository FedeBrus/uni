#include <iostream>

using namespace std;

int division(int a, int b, int& resto);

int main() {
    int a = 0, b = 0;

    cout << "Inserire un numero intero a: ";
    cin >> a;

    do {
        cout << "Inserire un numero intero b: ";
        cin >> b;
    } while (b == 0);

    int resto = 0;
    int quoziente = division(a, b, resto);

    cout << quoziente << ", r: " << resto << endl;

    return 0;
}

int division(int a, int b, int& resto) {
    int quoziente = 0;

    while (a - b > 0) {
        a -= b;
        quoziente++;
    }

    resto = a;
    return quoziente;
}