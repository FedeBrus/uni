#include <iostream>
#include <ctime>
#include <cstdlib>

void sort(int* arr, int n);
int* generate_numbers(int n);
int* concatenate(int* a, int* b, int n, int m);
void dealloc_array(int*& arr);
void print_array(int* arr, int n);

int main() {
    srand(time(NULL));
    const int size = 10;

    int* a = generate_numbers(size);
    std::cout << "Generated array a: ";
    print_array(a, size);

    int* b = generate_numbers(size);
    std::cout << "Generated array b: ";
    print_array(b, size);

    sort(a, size);
    std::cout << "Sorted array a: ";
    print_array(a, size);

    sort(b, size);
    std::cout << "Sorted array b: ";
    print_array(b, size);

    int* ab = concatenate(a, b, size, size);
    std::cout << "Concatenated arrays a and b: ";
    print_array(ab, size*2);

    dealloc_array(a);
    dealloc_array(b);
    dealloc_array(ab);

    return 0;
}

void sort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int* generate_numbers(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int* concatenate(int* a, int* b, int n, int m) {
    int* ab = new int[n + m];
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a[i] <= a[j]) {
            ab[i + j] = a[i];
            i++;
        } else {
            ab[i + j] = b[j];
            j++;
        }
    }

    while (i < n) {
        ab[i + j] = a[i];
        i++;
    }

    while (j < m) {
        ab[i + j] = b[j];
        j++;
    }

    return ab;
}

void dealloc_array(int*& arr) {
    delete [] arr;
    arr = nullptr;
}

void print_array(int* arr, int n) {
    std::cout << "[";
    for (int i = 0; i < n - 1; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[n - 1] << "]" << std::endl;
}