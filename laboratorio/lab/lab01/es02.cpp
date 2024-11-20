#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14;
    float r, area, circonferenza;

    cout << "Inserire il raggio: ";
    cin >> r;

    area = pi * r * r;
    circonferenza = 2 * pi * r;

    cout << "Area: " << area << endl;
    cout << "Cirocnferenza: " << circonferenza << endl;
    return 0;
}