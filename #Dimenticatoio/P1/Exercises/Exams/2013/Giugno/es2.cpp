#include <iostream>

void print_rec(int arr[], int n, int i);
int* esagonali(int n);
void esagonali_aux(int arr[], int n, int i);

int main() {

    int n;
    std::cout << "N: ";
    std::cin >> n;

    int* arr = esagonali(n);

    print_rec(arr, n, 0);

    delete [] arr;
    return 0;
}

void print_rec(int arr[], int n, int i) {
    if (i < n) {
        if (i < n - 1) {
            std::cout << arr[i] << ", ";
        } else if (i == n - 1) {
            std::cout << arr[i];
        }

        print_rec(arr, n, i + 1);
    }
}

int* esagonali(int n) {
    int* arr = new int[n];
    esagonali_aux(arr, n, 0);
    return arr;
}

void esagonali_aux(int arr[], int n, int i) {
    if (i < n) {
        arr[i] = i * (2 * i - 1);
        esagonali_aux(arr, n, i + 1);
    }
}