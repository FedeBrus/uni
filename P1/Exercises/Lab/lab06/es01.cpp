#include <iostream>

using namespace std;

int main() {
    int n;
    do {
        cout << "Inserire un numero naturale N: ";
        cin >> n;
    } while (n <= 0);

    if (n <= 2) {
        cout << "Il " << n << " numero di Fibonacci e': " << n - 1 << endl;
    } else {
        int res = 0;
        for (int f1 = 0, f2 = 1, i = 0; i < n; i++) {
            res = f1 + f2;
            f1 = f2;
            f2 = res;
        }

        cout << "Il " << n << " numero di Fibonacci e': " << res << endl;
    }


    return 0;
}