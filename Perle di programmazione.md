```cpp
void get((double*)& a, int& n) {
	n = 3;
	a = new double[n]; // a deve essere passato per riferimento,
	// perché il new deve poter modificare il puntatore in sé, che ora
	// deve puntare alla nuova memoria allocata, altrimenti una volta
	// finita la funzione la a del main tornerebbe a puntare il valore
	// randomico iniziale.
}

int main() {
	double * a;
	int n;

	get(a, m);
	a[0] = 1;

	return 0;
}
```

```cpp
#include <cassert>

int main() {
	assert(a == nullptr);
}

void dealloc((double*)& a) {
	delete [] a;
	a = nullptr;
	// In modo che la deallocazione sia evidente, creando una sitruazione problematica
	// altrimenti sarebbe difficile accorgersene.
}
```

```cpp
int main() {
	int** M;
	M = new int* [dim1];
	for (int i = 0; i < dim1; i++) {
		M[i] = new int [dim2];
	}
}
```

```cpp
typedef float** float_matrix;
```

```cpp
void delete_matrix(float** A, int d1, int d2) {
	for (int i = 0; i < d1; i++) {
		delete [] A[i];
	}
	delete [] A;
}
```