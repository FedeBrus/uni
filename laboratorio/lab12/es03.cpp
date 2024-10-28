#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
double avg(const int array[], int n);
int min(const int array[], int n);
int max(const int array[], int n);

int main() {
    srand(time(NULL));
    const int N = 5;
    int array[N] = {};

    populate_array(array, N);
    print_array(array, N);
    std::cout << avg(array, N) << std::endl;
    std::cout << min(array, N) << std::endl;
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

double avg(const int array[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++)
       sum += array[i];

    return sum / n;
}

int min(const int array[], int n) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
        if (array[i] < min) 
            min = array[i];

    return min;
}

int max(const int array[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
        if (array[i] > max) 
            max = array[i];

    return max;
}