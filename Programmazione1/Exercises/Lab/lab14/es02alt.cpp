#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 4;
const int M = 3;

void init(int* mat, int n, int m);
void print(const int* mat, int n, int m);
void transpose(int* a, int* b, int n, int m);

int main() {
    srand(time(NULL));
    int mat[N][M];
    int trans[M][N];

    init(*mat, N, M);
    print(*mat, N, M);
    transpose(*mat, *trans, N, M);
    print(*trans, M, N);

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

void transpose(int* a, int* b, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[j * n + i] = a[i * m + j];
        }
    }
}