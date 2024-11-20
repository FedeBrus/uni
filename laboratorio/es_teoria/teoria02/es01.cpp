#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 1;
    for (int i = 0, c = 0; i < 18; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;

    return 0;
}