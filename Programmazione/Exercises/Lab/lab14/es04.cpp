#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 10;
const int M = 10;

void init(double mat[][M]);
void print(const double mat[][M]);
void filter(double mat[][M], double filtro[][M]);

int main() {
    srand(time(NULL));
    double mat[N][M];
    double filtro[N][M];
    
    init(mat);
    print(mat);
    filter(mat, filtro);
    print(filtro);
}

void init(double mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = rand() % 10;
        }
    }
}

void print(const double mat[][M]) {
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

void filter(double mat[][M], double filtro[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            double sum = 0;
            int n = 0;
            if (i - 1 >= 0) {
                sum += mat[i - 1][j];
                n++;
            }

            if (j - 1 >= 0) {
                sum += mat[i][j - 1];
                n++;
            }

            if (i + 1 < N) {
                sum += mat[i + 1][j];
                n++;
            }

            if (j + 1 < M) {
                sum += mat[i][j + 1];
                n++;
            }

            filtro[i][j] = sum / n;
        }
    }
}