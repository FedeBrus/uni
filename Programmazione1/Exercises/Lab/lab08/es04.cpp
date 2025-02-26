#include <iostream>

using namespace std;

void print_inverted(int);

int main() {
    int n = 1;
    
    cout << "Inserire un numero intero: ";
    cin >> n;

    print_inverted(n);
}

void print_inverted(int n) {
    while (n != 0) {
        cout << n % 10;
        n /= 10;
    }

    cout << endl;
}