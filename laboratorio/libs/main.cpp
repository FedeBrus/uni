#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list.h"
#include "array.h"
#include "stack.h"
#include "queue.h"

void print_title(const char title[]) {
    std::cout << "========" << title << "========" << std::endl;
}

void print_subtitle(const char subtitle[]) {
    std::cout << ">>> " << subtitle << ":" << std::endl;
}

void test_stack();

int main() {
    srand(time(NULL));
    list::node* list = list::create_list();
    list::add_head(list, 1);
    list::add_head(list, 2);
    list::add_head(list, 3);
    list::node* x = list::get_at(list, 2);
    list::create_node_after(4, x);
    return 0;
}

void test_stack() {
    print_title("STACK TESTING");

    print_subtitle("create");
    list::node* stack = stack::create_stack();
    stack::print(stack);

    print_subtitle("push");
    for (int i = 0; i < 10; i++) stack::push(stack, i);
    stack::print(stack);

    print_subtitle("pop");
    for (int i = 0; i < 5; i++) stack::pop(stack);
    stack::print(stack);

    print_subtitle("top");
    std::cout << stack::top(stack) << std::endl;
    stack::print(stack);

    print_subtitle("top_ref");
    stack::top_ref(stack) = -1;
    stack::print(stack);

    print_subtitle("copy");
    node* copy = stack::copy(stack);
    stack::print(stack);
    stack::print(copy);

    print_subtitle("is_empty, empty");
    std::cout << stack::is_empty(copy) << std::endl;
    stack::empty(copy);
    std::cout << stack::is_empty(copy) << std::endl;

    print_subtitle("get_array_se, length, get_stack, get_array");
    int len = stack::length(stack);
    std::cout << len << std::endl;
    int* arr = stack::get_array_se(stack);
    array::print(arr, len);
    stack::print(stack);
    stack = stack::get_stack(arr, len);
    stack::print(stack);
    delete [] arr;
    arr = stack::get_array(stack);
    array::print(arr, len);
    stack::print(stack);

    print_subtitle("deallocate");
    stack::deallocate(stack);
    stack::print(stack);
}