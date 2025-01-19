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

    if (a <= b && a <= c) {
        cout << "Il minimo e': " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "Il minimo e': " << b << endl;
    } else if (c <= a && c <= b) {
        cout << "Il minimo e': " << c << endl;
    }

    return 0;
}