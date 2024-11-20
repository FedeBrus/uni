#include <iostream>

using namespace std;

int main() {

    char scelta = 'e';

    do {
        cout << "Insert the language code (press q to exit): ";
        cin >> scelta;
        switch (scelta) {
            case 'e':
                cout << "Good morning" << endl;
                break;

            case 'i':
                cout << "Buongiorno" << endl;
                break;

            case 's':
                cout << "Buenos dias" << endl;
                break;

            default:
                break;
        }
    } while (scelta != 'q');

    return 0;
}