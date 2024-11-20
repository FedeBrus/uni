#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int contatore = 0;

    for (int i = 0; i < 10; i++) {
        if (rand() % 6 == 0) {
            contatore++;
        }
    }

    cout << "Sono stati lanciati " << contatore << " dadi risultati 1" << endl;

    return 0;
}