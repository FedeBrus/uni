#include <iostream>

using namespace std;

int main() {
    float fahrenheit;

    cout << "Inserire i gradi in F: ";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) / 1.8;
    cout << "Ci sono " << celsius << " C";
    return 0;
}