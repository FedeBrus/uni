#include <iostream>

using namespace std;

void remove_excess(int& hours, int& minutes, int& seconds);

int main() {
    int ore = 0, minuti = 0, secondi = 0;

    cout << "Inserire il numero di ore: ";
    cin >> ore;
    cout << "Inserire il numero di minuti: ";
    cin >> minuti;
    cout << "Inserire il numero di secondi: ";
    cin >> secondi;

    remove_excess(ore, minuti, secondi);

    cout << ore << ":" << minuti << ":" << secondi << endl;

    return 0;
}

void remove_excess(int& hours, int& minutes, int& seconds) {
    minutes += seconds / 60;
    seconds %= 60;
    hours += minutes / 60;
    minutes %= 60;
}