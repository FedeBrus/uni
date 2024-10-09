#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n = 0;

    do {
        cout << "Si inserisca un numero intero compreso tra 0 e 1000: ";
        cin >> n;
    } while (n < 0 || n > 1000); // Continua il ciclo finché il numero non è compreso tra 0 e 1000

    bool prime = true;

    if (n == 1) { // 1 è un'eccezzione
        prime = false;

    } if (n == 2) { // 2 è l'unico numero primo pari
        prime = true;

    } else if (n % 2 != 0) { // Se il numero è pari non ha senso controllare

        int i = 3;
        while (i <= n / 2) {
            if (n % i == 0) {
                prime = false;
            }
            i++;
        }
    } else {
        prime = false;
    }

    cout << "Il numero inserito e' " << (prime ? "primo" : "non primo") << endl;


    return 0;
}