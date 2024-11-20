#include <iostream>

using namespace std;

void swap_ls8(short& a, short& b);

int main() {
    short a = 0, b = 0;

    cout << "Inserire uno short a: ";
    cin >> a;
    cout << "Inserire uno short b: ";
    cin >> b;
    
    cout << a << ", " << b << endl;
    swap_ls8(a, b);
    cout << a << ", " << b << endl;
}

void swap_ls8(short& a, short& b) {
    short ls_a = a & 0x00FF;
    short ls_b = b & 0x00FF;

    short ms_a = a & 0xFF00;
    short ms_b = b & 0xFF00;

    a = ms_a | ls_b;
    b = ms_b | ls_a;
}