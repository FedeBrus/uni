#include <iostream>
#include <cstdlib>

using namespace std;

void print_array(int arr[], int n);
void populate_array(int arr[], int n);
int linear_search(int arr[], int n, int e);
int linear_search_rec(int arr[], int m, int n, int e);

int main() {
    srand(time(NULL));
    const int n = 10;

    int arr[n];
    populate_array(arr, n);
    print_array(arr, n);
    cout << linear_search(arr, n, 4) << endl;

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

int linear_search(int arr[], int n, int e) {
    return linear_search_rec(arr, 0, n - 1, e);
}

int linear_search_rec(int arr[], int m, int n, int e) {
    if (m > n) {
        return -1;
    }

    if (arr[m] == e) {
        return m;
    }

    return linear_search_rec(arr, m + 1, n, e);
}