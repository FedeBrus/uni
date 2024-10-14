#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int d6() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));

    int attacker1 = d6();
    int defender1 = d6();
    int attacker2 = d6();
    int defender2 = d6();

    cout << "Attaccante dado 1: " << attacker1 << endl;
    cout << "Difensore dado 1: " << defender1 << endl;
    cout << "Attaccante dado 2: " << attacker2 << endl;
    cout << "Difensore dado 2: " << defender2 << endl;

    int attackermax = max(attacker1, attacker2);
    int defendermax = max(defender1, defender2);
    int attackermin = min(attacker1, attacker2);
    int defendermin = min(defender1, defender2);

    int attacker_points = 0;
    int defender_points = 0;

    // Confronto tra i massimi
    if (attackermax > defendermax) attacker_points++;
    else defender_points++;

    if (attackermin > defendermin) attacker_points++;
    else defender_points++;

    cout << "Punti attaccante: " << attacker_points << endl;
    cout << "Punti difensore: " << defender_points << endl;
}