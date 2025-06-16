#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(int array[], int n, int max);
void print_array(const int array[], int n);
int same_numbers(const int array1[], int n, int array2[], int m);

int main() {
    srand(time(NULL));
    const int N = 20;
    int max = 0;
    int array1[N] = {};
    int array2[N] = {};

    std::cout << "Inserisci un massimo: ";
    std::cin >> max;

    populate_array(array1, N, max);
    populate_array(array2, N, max);
    print_array(array1, N);
    print_array(array2, N);

    std::cout << "Il numero di elementi uguali in posizione uguale è: " << same_numbers(array1, N, array2, N) << std::endl; 
}

void populate_array(int array[], int n, int max) {
    for (int i = 0; i < n; i++) {
        array[i] = rand() % max;
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

int same_numbers(const int array1[], int n, int array2[], int m) {
    int size = m < n ? m : n;
    int same = 0;

    for (int i = 0; i < size; i++)
        if (array1[i] == array2[i]) 
            same++;

    return same;
}