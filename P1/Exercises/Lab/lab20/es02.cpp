#include <iostream>
#include <fstream>
#include "pila.h"

bool check(const char buffer[]);

int main() {

    char buffer[256];
    while (std::cin >> buffer) {
        std::cout << buffer << ":" << check(buffer) << std::endl;
    }

    return 0;
}

bool check(const char expr[]) {
    pila_init();
    bool valid = true;

    int i = 0;
    while (expr[i] != '\0' && valid) {
        if (expr[i] == '(') {
            pila_push(1);
        } else if (expr[i] == ')') {
            if (!pila_pop()) {
                valid = false;
            }
        }

        i++;
    }

    // Checking if there are values remaining inside the stack
    if (pila_pop()) {
        valid = false;
    }

    pila_deinit();
    return valid;
}