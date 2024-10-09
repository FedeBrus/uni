#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char c;

    cin >> c;

    char res = c - 'A' - 26 - 3;
    char x = (char)(res * -1);

    cout << (int)res << ":" << (int)x << endl;
}