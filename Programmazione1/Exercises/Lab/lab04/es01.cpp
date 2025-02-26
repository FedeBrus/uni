#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Inserire il numero a: ";
    cin >> a;

    cout << "Inserire il numero b: ";
    cin >> b;

    bool flag = (a > b);

    int result = flag*(a-b) + (1 - flag)*(b-a);
    cout << "Il valore assoluto di (a-b): " << result << endl;
    return 0;
}
