#ifndef STACK_H
#define STACK_H
#include "list.h"

namespace stack {
struct stack_list {
  list::node *head;
};

typedef stack_list *stack;

stack create_stack();
stack get_stack(int arr[], int size);
int *get_array_se(stack &n);
int *get_array(stack n);
bool is_empty(stack n);
int length(stack n);
void push(stack &n, int x);
void pop(stack &n);
int top(stack n);
int &top_ref(stack n);
void empty(stack n);
stack copy(stack n);
void deallocate(stack &n);
void print(stack n);
} // namespace stack

#endif
