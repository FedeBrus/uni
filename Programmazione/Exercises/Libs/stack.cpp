#include "list.h"
#include "stack.h"

namespace stack {
    stack create_stack() {
        stack s = new stack_list;
        s->head = list::create_list();
        return s;
    }

    stack get_stack(int* arr, int size) {
        stack s = create_stack();
        for (int i = 0; i < size; i++) {
            push(s, arr[i]);
        }
        return s;
    }

    int* get_array_se(stack& n) {
        int len = length(n);
        int* arr = new int[len];
        // Completely empties the stack
        for (int i = 0; i < len; i++) {
            arr[i] = top(n);
            pop(n);
        }

        return arr;
    }

    void get_array_aux(stack n, int* arr, int idx) {
        if (is_empty(n)) return;

        arr[idx] = top(n);
        pop(n);
        get_array_aux(n, arr, idx + 1);
        push(n, arr[idx]);
    }

    int* get_array(stack n) {
        int len = length(n);
        int* arr = new int[len];
        get_array_aux(n, arr, 0);
        return arr;
    }

    bool is_empty(stack n) {
        return n->head == nullptr;
    }

    int length(stack n) {
        return list::length(n->head);
    }

    void push(stack& n, int x) {
        list::add_head(n->head, x);
    }

    void pop(stack& n) {
        list::remove_head(n->head);
    }

    int top(stack n) {
        return n->head->val;
    }

    int& top_ref(stack n) {
        return n->head->val;
    }

    void empty(stack n) {
        while (!is_empty(n)) {
            pop(n);
        }
    }

    stack copy(stack n) {
        stack s = create_stack(); 
        s->head = list::copy(n->head);
        return s;
    }

    void deallocate(stack& n) {
        list::deallocate(n->head);
        delete n;
        n = nullptr;
    }

    void print(stack n) {
        list::print(n->head);
    }
}