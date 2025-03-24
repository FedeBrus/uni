#include <iostream>
#include <cstdlib>
#include <ctime>

void populate_array(int array[], int n);
void print_array(const int array[], int n);
void shell_sort(int array[], int n);
bool check(const int array[], int n);

int main() {
    srand(time(NULL));
    const int N = 10;
    int array[N] = {};

    bool sorted = true;

    for (int i = 0; sorted == true && i < 1000; i++) {
        populate_array(array, N);
        print_array(array, N);
        shell_sort(array, N);
        print_array(array, N);
        sorted = check(array, N);
    }

    std::cout << ((sorted) ? "All tests were passed successfully" : "The solution is incorrect") << std::endl;
}

void populate_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 100;
    }
}

void print_array(const int array[], int n) {
    std::cout << "[";

    for (int i = 0; i < n - 1; i++) {
        std::cout << array[i] << ", ";
    }

    std::cout << array[n - 1];
    std::cout << "]" << std::endl;
}

void shell_sort(int array[], int n) {
    // Ciclo che esegue l'insertion per ogni gap possibile
    for (int i = n / 2; i >= 1; i /= 2) { 
        // Eseguo l'insertion a partire da l'indice dimensione del gap in avanti (prima sarebbe inutile)
        for (int j = i; j < n; j++) { 
            // Salvo il valore di array[j] che è l'elemento più a destra, creando così un buco per far shiftare gli altri
            int tmp = array[j]; 
            
            // Il ciclo cicla ogni posizione a distanza 'gap' prima di j, 
            // si ferma se arriva a una distanza dalla fine che è < 'gap' o quando l'elemento non è più grande di tmp
            // In questi casi vuol dire che se inserisco lì tmp allora tmp è nel posto giusto (rispetto ai gaps)
            int k = j;
            while (k >= i && array[k - i] > tmp) {
                array[k] = array[k - i];
                k -= i;
            }

            array[k] = tmp;
        }
    }
}

bool check(const int array[], int n) {
    for (int i = 1; i < n; i++)
        if (array[i] < array[i - 1]) return false;

    return true;
}