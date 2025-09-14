#include <iostream>

using namespace std;

int main() {

    bool A, B;
    cout << "A | B | A xor B" << endl;
    A = B = false;
    cout << A << B << ((!A && B) || (A && !B)) << endl;
    A = true, B = false;
    cout << A << B << ((!A && B) || (A && !B)) << endl;
    A = false, B = true;
    cout << A << B << ((!A && B) || (A && !B)) << endl;
    A = B = true;
    cout << A << B << ((!A && B) || (A && !B)) << endl;

    cout << "A | B | A xor B" << endl;
    A = B = false;
    cout << A << B << (A ^ B) << endl;
    A = true, B = false;
    cout << A << B << (A ^ B) << endl;
    A = false, B = true;
    cout << A << B << (A ^ B) << endl;
    A = B = true;
    cout << A << B << (A ^ B) << endl;
}