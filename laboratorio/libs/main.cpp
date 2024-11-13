#include <iostream>
#include "list.h"

int main() {
    list::node* lista = nullptr;
    list::add_tail(lista, 1);
    list::add_tail(lista, 2);
    list::add_tail(lista, 3);
    list::add_tail(lista, 4);

    list::print(lista);
    list::deallocate(lista);
    return 0;
}