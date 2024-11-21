#ifndef STACK_H
#define STACK_H
#include "list.h"

typedef list::node node;

namespace stack {
    node* create_stack();
    node* get_stack(int arr[], int size);
    int* get_array_se(node*& n);
    int* get_array(node* n);
    bool is_empty(node* n);
    int length(node* n);
    void push(node*& n, int x);
    void pop(node*& n);
    int top(node* n);
    int& top_ref(node* n);
    void empty(node* n);
    node* copy(node* n);
    void deallocate(node*& n);
    void print(node* n);
}

#endif