#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int random_number = rand() % 10 + 1;
    int input = 0;

    do {
        do {
            cout << "Inserisci un numero da 1 a 10: ";
            cin >> input;
        } while (input < 1 || input > 10);
    } while (random_number != input);

    cout << "Hai indovinato!" << endl;

    return 0;
}