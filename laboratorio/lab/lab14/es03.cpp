#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 4;
const int M = 4;

void init(int mat[][M]);
void print(const int mat[][M]);
int triangle_sum(const int mat[][M]);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print(mat);
    std::cout << triangle_sum(mat) << std::endl;

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

int triangle_sum(const int mat[][M]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < M; j++) {
            sum += mat[i][j];
        }
    }

    return sum;
}