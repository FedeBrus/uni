#include <iostream>
#include <cstdlib>

using namespace std;

int d6() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));

    int attacker = d6();
    int defender = d6();

    cout << "Attaccante: " << attacker << endl;
    cout << "Difensore: " << defender << endl;

    if (attacker > defender) {
        cout << "VINCE L'ATTACCANTE" << endl;
    } else {
        cout << "VINCE IL DIFENSORE" << endl;
    }
}