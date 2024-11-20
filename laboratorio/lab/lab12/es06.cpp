#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(double array[], int n);
void print_array(const double array[], int n);
int cull_array(double array[], int n, double x, double y);

int main() {
    srand(time(NULL));
    const int N = 10;
    double array[N] = {};

    double x = 3.5;
    double y = 7;

    populate_array(array, N);
    print_array(array, N);
    std::cout << cull_array(array, N, x, y) << " elements were culled" << std::endl;
    print_array(array, N);
}

void populate_array(double array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = (rand() / (RAND_MAX + 1.0)) * (10);
    }
}

void print_array(const double array[], int n) {
    std::cout << "[";

    for (int i = 0; i < n - 1; i++) {
        std::cout << array[i] << ", ";
    }

    std::cout << array[n - 1];
    std::cout << "]" << std::endl;
}

int cull_array(double array[], int n, double x, double y) {
    if (x < y) {
        int culls = 0;

        for(int i = 0; i < n; i++)
            if (array[i] < x || array[i] > y) {
                array[i] = 0;
                culls++;
            }

        return culls;
    } 
    
    else return -1;
}