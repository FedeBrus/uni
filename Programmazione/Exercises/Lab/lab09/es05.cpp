#include <iostream>

using namespace std;

void ordina(int& n1, int& n2, int& n3);

int main() {
    int n1, n2, n3;

    cout << "Inserire il primo numero: ";
    cin >> n1;
    cout << "Inserire il secondo numero: ";
    cin >> n2;
    cout << "Inserire il terzo numero: ";
    cin >> n3;

    cout << n1 << ", " << n2 << ", " << n3 << endl;
    ordina(n1, n2, n3)
    cout << n1 << ", " << n2 << ", " << n3 << endl;

    return 0;
}

void ordina(int& n1, int& n2, int& n3) {
    int temp = 0; 
    if (n1 >= n2) {
        temp = n1;
        n1 = n2;
        n2 = temp; 
    }

    if (n1 >= n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if (n2 >= n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
}