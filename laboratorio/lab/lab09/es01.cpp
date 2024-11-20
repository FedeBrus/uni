#include <iostream>

using namespace std;

void swap(double& a, double& b);

int main() {
    double a = 12;
    double b = 29;

    cout << a << " " << b << endl;
    
    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}

void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}