#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int max_sum_subarray(int arr[], const int n) {
  int *maxHere = new int[n];
  maxHere[0] = max(arr[0], 0);
  int result = maxHere[0];

  for (int i = 1; i < n; i++) {
    maxHere[i] = max(maxHere[i - 1] + arr[i], 0);
    result = max(result, maxHere[i]);
  }

  delete[] maxHere;
  return result;
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");

  int R, C;
  in >> R >> C;

  int mat[R][C];

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      in >> mat[i][j];
    }
  }

  int result = 0;

  // Matrice delle somme cumulative
  // La prima riga e' dummy e contiene solo 0
  int **cumulative_mat = new int *[R + 1];
  for (int i = 0; i <= R; i++) {
    cumulative_mat[i] = new int[C];
  }

  // Precalcolo delle somme cumulative per ogni riga
  for (int j = 0; j < C; j++) {
    for (int i = 0; i <= R; i++) {
      cumulative_mat[i][j] =
          (i == 0) ? 0 : cumulative_mat[i - 1][j] + mat[i - 1][j];
    }
  }

  for (int start = 0; start < R; start++) {
    for (int end = start; end < R; end++) {
      int *sums = new int[C];

      for (int i = 0; i < C; i++) {
        // Indici sballati perche' cumulative_mat ha una riga in piu'
        sums[i] = cumulative_mat[end + 1][i] - cumulative_mat[start][i];
      }

      result = max(result, max_sum_subarray(sums, C));
      delete[] sums;
    }
  }

  // Best practices :)
  for (int i = 0; i <= R; i++) {
    delete[] cumulative_mat[i];
  }
  delete[] cumulative_mat;

  out << result;
  return 0;
}
