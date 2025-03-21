#include <iostream>
#include <cstdlib>

using namespace std;

int d6();
void ordina(int& n1, int& n2, int& n3);
void scontro(const int ad, const int dd, int& a_points, int& d_points);

int main() {
    srand(time(NULL));

    int ad1 = d6();
    int ad2 = d6();
    int ad3 = d6();

    int dd1 = d6();
    int dd2 = d6();
    int dd3 = d6();

    ordina(ad1, ad2, ad3);
    ordina(dd1, dd2, dd3);

    int a_points = 0;
    int d_points = 0;

    scontro(ad1, dd1, a_points, d_points);
    scontro(ad2, dd2, a_points, d_points);
    scontro(ad3, dd3, a_points, d_points);

    cout << "Attaccante: " << ad1 << ", " << ad2 << ", " << ad3 << endl;
    cout << "Difensore: " << dd1 << ", " << dd2 << ", " << dd3 << endl;

    cout << "Punti a|d : " << a_points << "|" << d_points << endl;

    return 0;
}

int d6() {
    return rand() % 6 + 1;
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

void scontro(const int ad, const int dd, int& a_points, int& d_points) {
    if (ad > dd) {
        a_points++;
    } else {
        d_points++;
    }
}