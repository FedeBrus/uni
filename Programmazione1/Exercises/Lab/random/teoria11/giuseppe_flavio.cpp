#include <iostream>
#include "./../libs/list.h"

int* giuseppe(int N, int M);

int main() {
    const int M = 3;
    const int N = 10;
    int* eliminazione = giuseppe(N, M);

    if (eliminazione != nullptr) {
        for (int i = 0; i < N; i++) {
            std::cout << eliminazione[i] << std::endl;
        }
    }

    delete [] eliminazione;
    return 0;
}

int* giuseppe(int N, int M) {
    list::node* people = nullptr;
    int* elimination = new int[N];

    for (int i = 0; i < N; i++) {
        list::add_tail(people, i);
    }

    list::make_circular(people);
    
    int counter = 0; 
    while (!list::is_empty(people)) {
        people = list::get_at(people, M);
        elimination[counter++] = people->val;
        list::remove_circular_head(people);
    }

    return elimination;
}