#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a = 0, b = 0, c = 0;

    do {
        cout << "Inserire il coefficiente a dell'equazione di secondo grado: ";
        cin >> a;
    } while (cin.fail());

    do {
        cout << "Inserire il coefficiente b dell'equazione di secondo grado: ";
        cin >> b;
    } while (cin.fail());

    do {
        cout << "Inserire il coefficiente c dell'equazione di secondo grado: ";
        cin >> c;
    } while (cin.fail());

    double d = b * b - 4 * a * c;

    double x1 = 0, x2 = 0;

    if (a != 0) {
        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Le due soluzioni reali sono distine e valgono: x1: " << x1 << ", x2: " << x2 << endl; 
        } else if (d == 0) {
            x1 = -b / (2 * a);
            cout << "Le due soluzioni reali coincidono e valgono: " << x1 << endl;
        } else {
            cout << "Non esistono soluzioni reali." << endl;
        }
    } else {
        cout << "L'equazione non è di secondo grado" << endl;
    }

    return 0;
}