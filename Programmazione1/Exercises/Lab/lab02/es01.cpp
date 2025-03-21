#include <iostream>

using namespace std;

int main() {
    char c = 'a';
    cout << "Inserire un carattere ASCII:" << endl;
    cin >> c;

    c ^= 32;
    bool flag = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    char s = (flag * c) | (flag ^ 1) * '?';

    cout << s << endl;
    return 0;
}