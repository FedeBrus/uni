#include <iostream>
#include <cstdlib>
#include <ctime>

int** generate_matrix(int R, int C);
void print_matrix(int** mat, int R, int C);
void dealloc_mat(int**& mat, int R);

int main() {
    srand(time(NULL));
    const int R = 10, C = 10;
    int** mat = generate_matrix(R, C);
    print_matrix(mat, R, C);
    dealloc_mat(mat, R);
    return 0;
}

int** generate_matrix(int R, int C) {
    int** mat = new int*[R];
    for (int i = 0; i < R; i++) {
        mat[i] = new int[C];
        for (int j = 0; j < C; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    return mat;
}

void print_matrix(int** mat, int R, int C) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void dealloc_mat(int**& mat, int R) {
    for (int i = 0; i < R; i++) {
        delete [] mat[i];
    }

    delete [] mat;
    mat = nullptr;
}