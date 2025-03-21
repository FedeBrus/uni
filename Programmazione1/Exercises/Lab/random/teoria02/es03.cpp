#include <iostream>

using namespace std;

int main() {
    double res = 1;
    double x = 0;
    int n = 0;

    cout << "Inserire un reale x: ";
    cin >> x;

    cout << "Inserire un intero N: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        res *= x;
    }

    cout << res << endl;

    return 0;
}