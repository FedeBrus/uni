#include <iostream>

using namespace std;

int fib(int n);
int fib_tail(int a, int b, int n);

int main() {

    for (int i = 0; i < 20; i++) {
        cout << fib(i) << endl;
    }

    return 0;
}

int fib(int n) {
    return fib_tail(0, 1, n);
}

int fib_tail(int a, int b, int n) {
    if (n == 0) {
        return a;
    } else {
        return fib_tail(b, a + b, n - 1);
    }
}