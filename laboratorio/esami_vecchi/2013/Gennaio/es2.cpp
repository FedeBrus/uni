#include <iostream>
#include <cstdlib>

int** create_matrix(int n, int m);
void create_rows(int** mat, int i, int n, int m);
void generate_row(int** mat, int i, int j, int m);
void print_submatrix(int** mat, const int N, const int M, int i, int j, int k, int n, int m);
void print_row(int** mat, const int N, const int M, int i, int j, int k, int m);

int main() {

    srand(time(NULL));

    int n, m;
    std::cout << "N: ";
    std::cin >> n;
    std::cout << "M: ";
    std::cin >> m;

    int** mat = create_matrix(n, m);

    print_submatrix(mat, n, m, 2, 1, 0, 2, 3);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
        delete [] mat[i];
    }

    delete [] mat;

    return 0;
}

int** create_matrix(int n, int m) {
    int** mat = new int*[n];
    create_rows(mat, 0, n, m);
    return mat;
}

void create_rows(int** mat, int i, int n, int m) {
    if (i < n) {
        mat[i] = new int[m];
        generate_row(mat, i, 0, m);
        create_rows(mat, i + 1, n, m);
    }
}

void generate_row(int** mat, int i, int j, int m) {
    if (j < m) {
        mat[i][j] = rand() % 10;
        generate_row(mat, i, j + 1, m);
    }
}

void print_submatrix(int** mat, const int N, const int M, int i, int j, int k, int n, int m) {
    if (i < 0 || i >= N || k >= n) {
        return;
    }

    print_row(mat, N, M, i, j, 0, m);
    std::cout << std::endl;
    print_submatrix(mat, N, M, i + 1, j, k + 1, n, m);
}

void print_row(int** mat, const int N, const int M, int i, int j, int k, int m) {
    if (j < 0 || j > M || k > m) {
        return;
    }

    std::cout << mat[i][j] << " ";
    print_row(mat, N, M, i, j + 1, k + 1, m);
}