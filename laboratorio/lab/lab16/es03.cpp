#include <iostream>
#include <fstream>
#include <cstdlib>

void sort(double* arr, int n);
void dealloc_array(double*& arr);

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage [file] [number of temperature to display] [maximum number of temperatures]";
        exit(1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);

    if (!input) {
        std::cerr << "Cannot read from file" << std::endl;
        exit(2);
    }

    const int M = std::atoi(argv[3]);
    double arr[M];
    char buffer[10];
    int n = 0, i = 0;
    while (input.getline(buffer, 10)) {
        arr[i] = std::atof(buffer);
        i++;
    }
    n = i;

    double* temps = new double[n];
    for (i = 0; i < n; i++) {
        temps[i] = arr[i];
    }

    sort(temps, n);
    const int N = atoi(argv[2]);
    for (i = 0; i < N; i++) {
        std::cout << i + 1 << ": " << temps[i] << std::endl;
    }

    input.close();
    return 0;
}

void sort(double* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void dealloc_array(double*& arr) {
    delete [] arr;
    arr = nullptr;
}