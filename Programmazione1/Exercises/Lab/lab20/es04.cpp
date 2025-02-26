#include <iostream>
#include <cstring>
#include "coda_int.h"
#include "pila.h"

int main() {
    char buffer[256];
    pila_init();
    while (std::cin >> buffer && std::strcmp(buffer, "quit") != 0) {
        pila_push(atoi(buffer));
    }
    pila_print();
    std::cout << "-----------------" << std::endl;

    int n;
    coda_init();
    while (pila_top(n)) {
        coda_enqueue(n);
        pila_pop();
    }

    while (coda_first(n)) {
        pila_push(n);
        coda_dequeue();
    }

    coda_deinit();
    pila_print();
    pila_deinit();
    return 0;
}