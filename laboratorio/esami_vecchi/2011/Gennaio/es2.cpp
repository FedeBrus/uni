#include <iostream>
#include <cstdlib>

bool palindromo(int arr[], int n);
bool palindromo_aux(int arr[], int n, int i);

int main() {

    int n;

    std::cout << "Size: ";
    std::cin >> n;

    if (n <= 100) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        std::cout << "Palindromo: " << palindromo(arr, n) << std::endl;
    }

    return 0;
}

bool palindromo(int arr[], int n) {
    return palindromo_aux(arr, n, 0);
}

bool palindromo_aux(int arr[], int n, int i) {
    if (i > n / 2) return true;

    if (arr[i] == arr[n - i - 1]) return palindromo_aux(arr, n, i + 1);
    else return false;
}