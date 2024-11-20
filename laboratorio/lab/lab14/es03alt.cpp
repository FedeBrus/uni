#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 4;
const int M = 4;

void init(int* mat, int n, int m);
void print(const int* mat, int n, int m);
int triangle_sum(const int* mat, int n, int m);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(*mat, N, M);
    print(*mat, N, M);
    std::cout << triangle_sum(mat) << std::endl;

    return 0;
}

void init(int* mat, int n, int m) {
    for (int i = 0; i < n * m; i++) {
        mat[i] = rand() % 10;
    }
}

void print(const int* mat, int n, int m) {
    std::cout << "[";
    for (int i = 0; i < n - 1; i++) {
        std::cout << "[";
        for (int j = 0; j < m - 1; j++) {
            std::cout << mat[i * m + j] << ", ";
        }

        // ultimo elemento
        std::cout << mat[i * m + m - 1] << "], ";
    }

    // ultimo array
    std::cout << "[";
    for (int i = 0; i < m - 1; i++) {
        std::cout << mat[(n - 1) * m + i] << ", ";
    }
    std::cout << mat[(n - 1) * m + m - 1];
    std::cout << "]";

    std::cout << "]" << std::endl;
}

int triangle_sum(const int* mat, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < m; j++) {
            sum += mat[i * m + j];
        }
    }

    return sum;
}