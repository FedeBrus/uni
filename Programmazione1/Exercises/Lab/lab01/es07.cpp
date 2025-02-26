#include <iostream>

using namespace std;

int main() {

    char c;

    cout << "Inserisci una lettera maiuscola: ";
    cin >> c;

    cout << "La stessa lettera minuscola e': " << (char)(c + 0x20) << endl;

    return 0;
}
