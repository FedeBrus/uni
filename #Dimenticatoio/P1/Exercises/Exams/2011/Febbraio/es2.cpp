#include <iostream>

bool contains(int testo[], int n, int pattern[], int m);
bool contains_aux(int testo[], int n, int pattern[], int m, int i);
bool check(int testo[], int i, int pattern[], int m, int j);

int main() {
    int testo[] = {4, 5, 9, 1, 7, 3};
    int pattern[] = {9, 1, 7};

    std::cout << contains(testo, 6, pattern, 3);
    return 0;
}

bool contains(int testo[], int n, int pattern[], int m) {
    return contains_aux(testo, n, pattern, m, 0);
}

bool contains_aux(int testo[], int n, int pattern[], int m, int i) {
    if (i + m <= n) {
        if (check(testo, i, pattern, m, 0)) return true;
        else return contains_aux(testo, n, pattern, m, i + 1);
    }

    else return false;
}

bool check(int testo[], int i, int pattern[], int m, int j) {
    if (j >= m) return true;

    if (testo[i] == pattern[j]) return check(testo, i + 1, pattern, m, j + 1);
    else return false;
}
