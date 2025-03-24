#include <iostream>
#include <cstring>
#include "coda.h"

bool add_person(char* name);

int main() {
    int choice;
    init();

    char buffer[256];

    do {
        std::cout << "0) Exit" << std::endl;
        std::cout << "1) Add person" << std::endl;
        std::cout << "2) Dequeue person" << std::endl;
        std::cout << "3) Print queue" << std::endl;
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cin >> buffer;
                if (add_person(buffer)) {
                    std::cout << buffer << " was added to the queue" << std::endl;
                } else {
                    std::cout << "Cannot add homonyms to the queue" << std::endl;
                }
                break;

            case 2:
                if (!dequeue()) {
                    std::cout << "Queue was already empty" << std::endl;
                }
                break;

            case 3:
                print();
                break;

            default:
                break;
        }

    } while (choice != 0);

    deinit();
    return 0;
}

bool add_person(char* name) {
    char* f; 
    bool homonym = false;
    bool end = false;
    if (first(f)) {
        dequeue();
        enqueue(f);
        char* buf;
        // Cycles through every element until it goes back to the beginnig
        do { 
            first(buf);
            if (std::strcmp(name, buf) == 0) {
                homonym = true;
            }

            if (std::strcmp(f, buf) != 0) {
                dequeue();
                enqueue(buf);
            } else {
                end = true;
            }
        } while (!end && !homonym);

        if (!homonym) {
            enqueue(name);
        }

    } else {
        enqueue(name);
    }

    return !homonym;
}