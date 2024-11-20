#include <iostream>

using namespace std;

int main() {
    for(int i = 'A'; i <= 'Z'; i++) {
        cout << "i: " << i << " -> " << (char)i << endl;
    }

    for(int i = 'a'; i <= 'z'; i++) {
        cout << "i: " << i << " -> " << (char)i << endl;
    }

    return 0;
}