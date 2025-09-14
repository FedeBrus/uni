#include <iostream>

using namespace std;

int tartaglia(int, int);

int main() {

    int n = 0;
    int nspazi = 0;

    cout << "Inserire la dimensione del triangolo di Tartaglia: ";
    cin >> n;

    if (n > 0) {
        for (int i = 0; i < n; i++) {

            nspazi = n - i;

            for (int j = 0; j < nspazi; j++) {
                cout << " ";
            }

            for (int j = 0; j <= i; j++) {
                cout << tartaglia(i, j) << " ";
            }
            
            cout << endl;
        }
    } else {
        cerr << "La dimensione inserita non è valida." << endl;
    }

    return 0;
}

int tartaglia(int i, int j) {
    if (j == 0 || j == i) return 1;
    
    return tartaglia(i - 1, j) + tartaglia(i - 1, j - 1);
}