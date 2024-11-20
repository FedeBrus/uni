#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
void insert(int array[], int n, int e, int pos);

int main() {
    srand(time(NULL));
    const int N = 10;
    int array[N] = {};

    populate_array(array, N);
    print_array(array, N);
    insert(array, N, 75, 5);
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

void insert(int array[], int n, int e, int pos) {
    if (pos >= 0 && pos < n) {
        for (int i = n - 1; i > pos; i--) {
            array[i] = array[i - 1];
        }
        array[pos] = e;
    } else {
        std::cout << "Index of new element is out of bounds" << std::endl;
    }
}