#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 10;
const int M = 10;

void init(int mat[][M]);
void print(const int mat[][M]);
void print_map(const int mat[][M]);
int find_isles(const int mat[][M]);
bool check_for_island(const int mat[][M], int y, int x);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print_map(mat);

    int isles = find_isles(mat);
    std::cout << "Isles found: " << isles << std::endl;

    return 0;
}

void init(int mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = (rand() % 6) == 0 ? 1 : 0;
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

int find_isles(const int mat[][M]) {
    int isles = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mat[i][j] == 1) {
                isles += 1 * check_for_island(mat, i, j);
            }
        }
    }
    
    return isles;
}

bool check_for_island(const int mat[][M], int y, int x) {
    bool is_isle = true;

    int start_y = (y - 1 >= 0) ? y - 1 : 0;
    int end_y = (y + 1 < N) ? y + 1 : N - 1;
    int start_x = (x - 1 >= 0) ? x - 1 : 0;
    int end_x = (x + 1 < M) ? x + 1 : M - 1;

    for (int i = start_y; is_isle && i <= end_y; i++) {
        for (int j = start_x; is_isle && j <= end_x; j++) {
            if (!(i == y && j == x) && mat[i][j] == 1) {
                is_isle = false;
            }
        }
    }

    return is_isle;
}