#include <iostream>
#include <ctime>
#include <cstdlib>

const int N = 5;
const int M = 6;

void init(int mat[][M]);
void print(const int mat[][M]);
void print_map(const int mat[][M]);
int* find_path(const int mat[][M]);
bool try_path(const int mat[][M], int position, int depth, int* path);
void print_path(int* path);

int main() {
    srand(time(NULL));
    int mat[N][M];

    init(mat);
    print_map(mat);

    int* path = find_path(mat);
    if (path[0] != -1) {
        std::cout << "Un percorso è: < ";
        for(int i = 0; i < M; i++) {
            std::cout << path[i] << " ";
        }
        std::cout << ">" <<  std::endl;
        print_path(path);
    } else {
        std::cout << "Nessun percorso è stato trovato" << std::endl;
    }

    delete [] path;
    return 0;
}

void init(int mat[][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = rand() % 2;
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

int* find_path(const int mat[][M]) {
    int* path = new int[M];
    bool found = false;

    // Bisogna provare ogni punto di partenza della colonna 0
    for (int i = 0; i < N && !found; i++) {
        // Se mat[i][0] == 1 significa che è un punto di partenza valido
        if (mat[i][0] == 1) {
            found = try_path(mat, i, 0, path);
        }
    }

    if (!found) {
        // L'array con primo elemento -1 indica l'inesistenza di un percorso 
        path[0] = -1;
    }

    return path;
}

bool try_path(const int mat[][M], int position, int depth, int* path) {
    if (depth == M - 1 && mat[position][depth] == 1) {
        path[depth] = position;
        return true;
    }

    if (position - 1 >= 0 && mat[position - 1][depth + 1] == 1) {
        path[depth] = position;
        return try_path(mat, position - 1, depth + 1, path);
    }

    if (mat[position][depth + 1] == 1) {
        path[depth] = position;
        return try_path(mat, position, depth + 1, path);
    }

    if (position + 1 < N && mat[position + 1][depth + 1] == 1) {
        path[depth] = position;
        return try_path(mat, position + 1, depth + 1, path);
    }

    return false;
}

void print_path(int* path) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            if (i == path[j]) std::cout << "*";
            else std::cout << "-";
        }

        std::cout << std::endl;
    }
}