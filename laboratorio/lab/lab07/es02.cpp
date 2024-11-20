#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;

    cout << "Inserire un limite inferiore: " << endl; 
    cin >> a;

    cout << "Inserire un limite superiore: " << endl; 
    cin >> b;

    if (a <= b) {
        if (a >= 0 && b < 128) {
            for (int i = a; i <= b; i++) {
                cout << "i: " << i << " -> " << (char)i << endl;
            }
        } else {
            cerr << "I limiti inseriti non sono validi." << endl;
            return 1;
        }
    } else {
        cerr << "Il limite inferiore inserito è maggiore del limite superiore inserito." << endl;
        return 1;
    }

    return 0;
}