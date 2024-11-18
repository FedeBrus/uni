#include <iostream>
#include "list.h"
#include "array.h"

int main() {
    const int N = 20;
    int* arr = array::create(N);
    for (int i = 0; i < N; i++) {
        arr[i] = i;
    }
    array::print(arr, N);
    std::cout << array::min_pos(arr, N) << std::endl;
    std::cout << array::max_pos(arr, N) << std::endl;
    delete [] arr;

    return 0;
}