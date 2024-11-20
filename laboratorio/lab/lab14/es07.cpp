#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 3;
const int M = 3;

void init(int mat[][M]);
void print_map(const int mat[][M]);
int sarrus(const int mat[][M], bool diag);
int det(const int mat[][M]);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print_map(mat);

    std::cout << "det: " << det(mat) << std::endl;

    return 0;
}

void init(int mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = rand() % 10;
        }
    }
}

void print_map(const int mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << mat[i][j];
        }
        std::cout << std::endl;
    }
}

int det(const int mat[][M]) {
    return sarrus(mat, true) - sarrus(mat, false);
}

int sarrus(const int mat[][M], bool diag) {
    int sum = 0;

    if (diag) {
        for (int j = 0; j < M; j++) {
            int prod = 1;
            for (int i = 0; i < N; i++) {
                prod *= mat[i][(j + i) % M];
            }
            sum += prod;
        }
    } else {
        for (int j = 0; j < M; j++) {
            int prod = 1;
            for (int i = N - 1; i >= 0; i--) {
                prod *= mat[i][(j + N - 1 - i) % M];
            }
            sum += prod;
        }
    }

    return sum;
}
