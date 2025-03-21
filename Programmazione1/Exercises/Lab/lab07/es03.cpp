#include <iostream>

using namespace std;

bool isprime(int);

int main() {
    int n = 0;

    cout << "Inserire un numero in input: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++) {
        if (isprime(i) && isprime(n - i)) {
            cout << "Il numero e' ottenibile dalla somma di due numeri primi: " << i << ", " << n - i << endl;
        }
    }

    return 0;
}

bool isprime(int x) {
    int c = 2;
    while (c < x / 2 && x % c != 0) {
        c++;
    }
        
    return (x % c != 0);
}