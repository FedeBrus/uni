#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
void counting_sort(int array[], int n);
void bounds(const int array[], int n, int& a, int& b);
bool check(const int array[], int n);

int main() {
    srand(time(NULL));
    const int N = 10;
    int array[N] = {};

    bool sorted = true;

    for (int i = 0; sorted == true && i < 1000; i++) {
        populate_array(array, N);
        print_array(array, N);
        counting_sort(array, N);
        print_array(array, N);
        sorted = check(array, N);
    }

    std::cout << ((sorted) ? "All tests were passed successfully" : "The solution is incorrect") << std::endl;
}

void populate_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 100;
    }
}

void print_array(const int array[], int n) {
    std::cout << "[";

    for (int i = 0; i < n - 1; i++) {
        std::cout << array[i] << ", ";
    }

    std::cout << array[n - 1];
    std::cout << "]" << std::endl;
}

void counting_sort(int array[], int n) {
    int a = 0, b = 0;
    bounds(array, n, a, b); // Ora a e b contengono rispettivamente il valore minimo e massimo;

    int supp[b - a + 1] = {}; // Array che può contenere a => [a - a], fino a b => [b - a]

    for (int i = 0; i < n; i++) { // Creo l'array di supporto contentente il numero di occorrenze
        supp[array[i] - a]++;
    }

    for (int i = 1; i <= b - a; i++) { // Faccio la somma comulativa
        supp[i] += supp[i - 1];
    }

    int ordered[n] = {}; // Secondo array di supporto

    for (int i = 0; i < n; i++) { // Ordinamento effettivo
        ordered[--supp[array[i] - a]] = array[i]; 
    }

    for (int i = 0; i < n; i++) { // Copia finale
        array[i] = ordered[i]; 
    }
}

void bounds(const int array[], int n, int& a, int& b) {
    int min = array[0];
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    a = min;
    b = max;
}

bool check(const int array[], int n) {
    for (int i = 1; i < n; i++)
        if (array[i] < array[i - 1]) return false;

    return true;
}