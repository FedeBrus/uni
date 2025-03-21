#include <iostream>
#include "coda_int.h"
#include "pila.h"

int main() {
    bool palindromo = true;
    char buffer[256];
    std::cin >> buffer;

    coda_init();
    pila_init();
    int i = 0;
    while (buffer[i] != '\0') {
        coda_enqueue(buffer[i]);
        pila_push(buffer[i]);
        i++;
    }

    int c, d;
    bool finished = false;
    while (!finished) {
        // Both contain something
        if (pila_top(c) && coda_first(d)) {
            if (c != d) {
                palindromo = false;
                finished = true;
            }
            pila_pop();
            coda_dequeue();
        } 
        // Neither contain anything
        else if (!pila_top(c) && !coda_first(d)) {
            finished = true;
        }
        // If only one of the two contains something it needs to end
        else {
            finished = true;
            palindromo = false;
        }
    }

    std:: cout << (palindromo ? "e'" : "non e'") << "palindromo" << std::endl;
    return 0;
}