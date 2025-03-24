#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 4;
const int M = 3;

void init(int mat[][M]);
void print(const int mat[][M]);
void trans(int mat[][M]);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print(mat);
    trans(mat);

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

void print_trans(const int mat[][N]) {
    std::cout << "[";
    for (int i = 0; i < M - 1; i++) {
        std::cout << "[";
        for (int j = 0; j < N - 1; j++) {
            std::cout << mat[i][j] << ", ";
        }

        // ultimo elemento
        std::cout << mat[i][N - 1] << "], ";
    }

    // ultimo array
    std::cout << "[";
    for (int i = 0; i < N - 1; i++) {
        std::cout << mat[M - 1][i] << ", ";
    }
    std::cout << mat[M - 1][N - 1];
    std::cout << "]";

    std::cout << "]" << std::endl;
}

void trans(int mat[][M]) {
    int trans[M][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    print_trans(trans);
}