#include "list.h"
#include "stack.h"

typedef list::node node;

namespace stack {

    node* create_stack() {
        return nullptr;
    }

    node* get_stack(int* arr, int size) {
        node* s = create_stack();
        for (int i = 0; i < size; i++) {
            push(s, arr[i]);
        }
        return s;
    }

    int* get_array_se(node*& n) {
        int len = length(n);
        int* arr = new int[len];
        // Completely empties the stack
        for (int i = 0; i < len; i++) {
            arr[i] = top(n);
            pop(n);
        }

        return arr;
    }

    void get_array_aux(node* n, int* arr, int idx) {
        if (is_empty(n)) return;

        arr[idx] = top(n);
        pop(n);
        get_array_aux(n, arr, idx + 1);
        push(n, arr[idx]);
    }

    int* get_array(node* n) {
        int len = length(n);
        int* arr = new int[len];
        get_array_aux(n, arr, 0);
        return arr;
    }

    bool is_empty(node* n) {
        return n == nullptr;
    }

    int length(node* n) {
        return list::length(n);
    }

    void push(node*& n, int x) {
        list::add_head(n, x);
    }

    void pop(node*& n) {
        list::remove_head(n);
    }

    int top(node* n) {
        return n->val;
    }

    int& top_ref(node* n) {
        return n->val;
    }

    void empty(node* n) {
        while (!is_empty(n)) {
            pop(n);
        }
    }

    node* copy(node* n) {
        return list::copy(n);
    }

    void deallocate(node*& n) {
        list::deallocate(n);
    }

    void print(node* n) {
        list::print(n);
    }
}