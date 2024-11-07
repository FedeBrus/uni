#include <iostream>

struct node {
    int val;
    node* next;
};

void add(node*& curr, int n) {
    node* new_node = new node;
    new_node->val = n;
    new_node->next = nullptr;

    node* copy = curr;

    if (copy != nullptr) {
        while (copy ->next != nullptr) {
            copy = copy->next;
        }

        copy->next = new_node;
    } else {
        curr = new_node;
    }
}

/*
int length(node* node) {
    if (node == nullptr) return 0;
    else return 1 + length(node->next);
}
*/

/*
void deallocate((node*)& s) {
    if (s == nullptr) return;

    deallocate(s->next);
    delete s;
    s = nullptr; // bisogna segnalare al chiamante cambiando il puntatore
}
*/

int length(node* curr) {
    int l = 0;
    while (curr != nullptr) {
        curr = curr->next;
        l++;
    }

    return l;
}

int main() {
    node* lista = nullptr;

    add(lista, 1);
    add(lista, 2);
    add(lista, 3);
    add(lista, 4);
    add(lista, 5);

    std::cout << length(lista) << std::endl;

    return 0;
}