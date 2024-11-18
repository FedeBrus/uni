#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list.h"
#include "array.h"

int main() {
    srand(time(NULL));
    const int N = 20;
    int* arr = array::create(N);
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
    array::print(arr, N);
    array::bubble_sort(arr, N);
    array::print(arr, N);
    delete [] arr;

    return 0;
}