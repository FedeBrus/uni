#include <iostream>

using namespace std;

int main() {
    int a = 0, n = 1;

    cout << "Inserire un numero intero a: ";
    cin >> a;

    do {
        cout << "Inserire un numero naturale n maggiore di 0: ";
        cin >> n;
    } while (n < 1);

    for (int res = 1, prev = 1, i = 1; i <= n; i++) {
        res = prev * a;
        prev = res;
        cout << res << endl;
    }

    return 0;
}