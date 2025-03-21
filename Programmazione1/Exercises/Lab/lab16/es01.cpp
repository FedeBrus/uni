#include <iostream>
#include <ctime>
#include <cstdlib>

void print_array(int* arr, int n);
int* generate_numbers(int n);
void dealloc_array(int*& arr);

int main() {
    srand(time(NULL));
    const int N = 100;
    int* arr = generate_numbers(N);
    print_array(arr, N);
    dealloc_array(arr);
    return 0;
}

void print_array(int* arr, int n) {
    std::cout << "[";
    for (int i = 0; i < n - 1; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[n - 1] << "]" << std::endl;
}

int* generate_numbers(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

void dealloc_array(int*& arr) {
    delete [] arr;
    arr = nullptr;
}