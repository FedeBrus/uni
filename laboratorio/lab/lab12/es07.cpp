#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
int max(const int array[], int n);
int max_aux(const int array[], int a, int b);

int main() {
    srand(time(NULL));
    const int N = 10;
    int array[N] = {};

    populate_array(array, N);
    print_array(array, N);
    std::cout << max(array, N) << std::endl;
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

int max(const int array[], int n) {
    if (n > 0)
        return max_aux(array, 0, n - 1);
    else 
        return INT_MIN;
}

int max_aux(const int array[], int a, int b) {
    if (a < b)
        if (array[a] > array[b]) return max_aux(array, a, b - 1);
        else return max_aux(array, a + 1, b);
    
    else return array[a];
}