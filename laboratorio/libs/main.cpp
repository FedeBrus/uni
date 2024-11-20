#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list.h"
#include "array.h"
#include "stack.h"
#include "queue.h"

int main() {
    srand(time(NULL));
    const int N = 10;
    int* arr = array::create(N);
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
    array::print(arr, N);
    array::bubble_sort(arr, N);
    array::print(arr, N);
    std::cout << array::median(arr, N) << std::endl;
    delete [] arr;

    return 0;
}