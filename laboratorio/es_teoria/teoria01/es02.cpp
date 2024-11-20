#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1, b = 1, c = 1;

    do {
        cout << "Inserire il coefficiente a: ";
        cin >> a;
    } while (a == 0);

    cout << "Inserire il coefficiente b: ";
    cin >> b;

    cout << "Inserire il coefficiente c: ";
    cin >> c;

    double d = b * b - 4 * a * c;

    if (d >= 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Le radici dell'equazione sono: " << x1 << ", " << x2 << endl;
    } else {
        double xr = (-b) / (2*a);
        double xi = +sqrt(-d) / (2 * a);
        cout << "Le radici dell'equazione sono: " << xr << "+" << xi << "i, " << xr << "-" << xi << "i" << endl;
    }

    return 0;
}