#include <iostream>
#include <cstdlib>

using namespace std;

void print_array(int arr[], int n);
void print_array(int arr[], int m, int n);
void populate_array(int arr[], int n);
void merge_sort(int arr[], int n);
void merge_sort_rec(int arr[], int m, int n);
void merge(int arr[], int m, int pivot, int n);

int main(int argc, char** argv) {
    srand(time(NULL));
    const int n = 16;

    int arr[n];
    populate_array(arr, n);
    print_array(arr, n);
    merge_sort(arr, n);
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

void print_array(int arr[], int m, int n) {
    cout << "[";
    for (int i = m; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << "]" << endl;
}

void populate_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
}

void merge_sort(int arr[], int n) {
    merge_sort_rec(arr, 0, n - 1);
}

void merge_sort_rec(int arr[], int m, int n) {
    if (m < n) {
        int pivot = (m + n) / 2;

        merge_sort_rec(arr, m, pivot);
        merge_sort_rec(arr, pivot + 1, n);
        merge(arr, m, pivot, n);
    }
}

void merge(int arr[], int m, int pivot, int n) {
    int i = m;
    int j = pivot + 1;

    //cout << "MERGING: " << "[" << m << "; " << n << "]" << endl;
    //print_array(arr, m, n + 1);

    while (i <= pivot && j <= n) {
        //cout << "INDEXES: " << "(" << i << "), (" << j << ")" << endl;
        if (arr[i] > arr[j]) {
            int tmp = arr[j];
            for (int k = j - 1; k >= i; k--) {
                arr[k + 1] = arr[k];
            }
            arr[i] = tmp;
            j++;
            pivot++;
        }

        i++;
        //print_array(arr, m, n + 1);
    }
}