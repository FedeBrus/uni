#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 4;
const int M = 4;

void init(int* mat);
void print(const int* mat);

void init(int mat[][M]);
void print(const int mat[][M]);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print(mat);

    init(*mat);
    print(*mat);

    return 0;
}

void init(int mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = rand() % 10;
        }
    }
}

void print(const int mat[][M]) {
    std::cout << "[";
    for (int i = 0; i < N - 1; i++) {
        std::cout << "[";
        for (int j = 0; j < M - 1; j++) {
            std::cout << mat[i][j] << ", ";
        }

        // ultimo elemento
        std::cout << mat[i][M - 1] << "], ";
    }

    // ultimo array
    std::cout << "[";
    for (int i = 0; i < M - 1; i++) {
        std::cout << mat[N - 1][i] << ", ";
    }
    std::cout << mat[N - 1][M - 1];
    std::cout << "]";

    std::cout << "]" << std::endl;
}

void init(int* mat) {
    for (int i = 0; i < N * M; i++)
        *(mat + i) = rand() % 10;
}

void print(const int* mat) {
    std::cout << "[";
    for (int i = 0; i < N - 1; i++) {
        std::cout << "[";
        for (int j = 0; j < M - 1; j++) {
            std::cout << *(mat + i * M + j) << ", ";
        }

        // ultimo elemento
        std::cout << *(mat + i * M + M - 1) << "], ";
    }

    // ultimo array
    std::cout << "[";
    for (int i = 0; i < M - 1; i++) {
        std::cout << *(mat + (N - 1) * M + i) << ", ";
    }
    std::cout << *(mat + (N - 1) * M + M - 1);
    std::cout << "]";

    std::cout << "]" << std::endl;
}