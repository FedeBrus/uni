#include <iostream>

using namespace std;

int main() {
    int dividendo, divisore;

    cout << "Inserire il dividendo: ";
    cin >> dividendo;

    cout << "Inserire il divisore: ";
    cin >> divisore;

    cout << "Il quoziente e': " << dividendo / divisore << endl;
    cout << "Il resto e': " << dividendo % divisore << endl;

    return 0;
}