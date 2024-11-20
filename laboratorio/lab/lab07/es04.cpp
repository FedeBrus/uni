#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cout << "Inserire la dimensione della matrice: " << endl;
    cin >> n;

    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (i == j ? '1' : '0');
            }

            cout << endl;
        }
    } else {
        cerr << "La dimensione inserita non e' valida." << endl;
    }

    return 0;
}