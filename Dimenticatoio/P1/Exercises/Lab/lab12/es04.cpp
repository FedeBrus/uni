#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
void invert(int array[], int n);

int main() {
    srand(time(NULL));
    const int N = 10;
    int array[N] = {};

    populate_array(array, N);
    print_array(array, N);
    invert(array, N);
    print_array(array, N);
}

void populate_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 10;
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

void invert(int array[], int n) {
    for (int tmp, i = 0; i < n / 2; i++) {
        tmp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = tmp;
    }
}