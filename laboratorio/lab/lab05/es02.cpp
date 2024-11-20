#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Inserire un numero intero a: ";
    cin >> a;
    cout << "Inserire un numero intero b: ";
    cin >> b;
    cout << "Inserire un numero intero c: ";
    cin >> c;

    if (a >= b && a <= c) {
        cout << -1 << endl;
    } else if (a < b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}