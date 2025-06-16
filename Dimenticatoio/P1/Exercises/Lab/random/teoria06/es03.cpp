#include <iostream>
#include <cstdlib>

using namespace std;

void print_array(int arr[], int n);
void populate_array(int arr[], int n);
void bubble_sort(int arr[], int n);
void bubble_up(int arr[], int n, int i);
void swap(int arr[], int i, int j);
void bubble_rec(int arr[], int m, int n);

int main(int argc, char** argv) {
    srand(time(NULL));
    const int n = 100;

    int arr[n];
    populate_array(arr, n);
    print_array(arr, n);
    bubble_sort(arr, n);
    print_array(arr, n);

    return 0;
}

void print_array(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << "]" << endl;
}

void populate_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
}

void bubble_sort(int arr[], int n) {
    bubble_rec(arr, 0, n - 1);
}

void bubble_up(int arr[], int n, int i) {
    if (i < n) {
        if (arr[i] > arr[i + 1]) {
            swap(arr, i, i + 1);
        }

        bubble_up(arr, n, i + 1);
    }
}

void swap(int arr[], int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void bubble_rec(int arr[], int m, int n) {
    if (m < n) {
        bubble_up(arr, n, m);
        bubble_rec(arr, m, n - 1);
    }
}