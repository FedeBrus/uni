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

void test_queue();
void test_stack();

int main() {
    srand(time(NULL));
    test_queue();
    test_stack();
    return 0;
}

void test_queue() {
    print_title("QUEUE TESTING");

    print_subtitle("create");
    queue::queue q = queue::create_queue();
    queue::print(q);

    print_subtitle("enqueue");
    for (int i = 0; i < 10; i++) queue::enqueue(q, i);
    queue::print(q);

    print_subtitle("dequeue");
    for (int i = 0; i < 5; i++) queue::dequeue(q);
    queue::print(q);

    print_subtitle("front");
    std::cout << queue::front(q) << std::endl;
    queue::print(q);

    print_subtitle("front_ref");
    queue::front_ref(q) = -1;
    queue::print(q);

    print_subtitle("back");
    std::cout << queue::back(q) << std::endl;
    queue::print(q);

    print_subtitle("back_ref");
    queue::back_ref(q) = -1;
    queue::print(q);

    print_subtitle("copy");
    queue::queue copy = queue::copy(q);
    queue::print(q);
    queue::print(copy);

    print_subtitle("is_empty, empty");
    std::cout << queue::is_empty(copy) << std::endl;
    queue::empty(copy);
    std::cout << queue::is_empty(copy) << std::endl;

    print_subtitle("get_array_se, length, get_stack, get_array");
    int len = queue::length(q);
    std::cout << len << std::endl;
    int* arr = queue::get_array_se(q);
    array::print(arr, len);
    queue::print(q);
    q = queue::get_queue(arr, len);
    queue::print(q);
    delete [] arr;
    arr = queue::get_array(q);
    array::print(arr, len);
    queue::print(q);

    print_subtitle("deallocate");
    queue::deallocate(q);
}

void test_stack() {
    print_title("STACK TESTING");

    print_subtitle("create");
    stack::stack s = stack::create_stack();
    stack::print(s);

    print_subtitle("push");
    for (int i = 0; i < 10; i++) stack::push(s, i);
    stack::print(s);

    print_subtitle("pop");
    for (int i = 0; i < 5; i++) stack::pop(s);
    stack::print(s);

    print_subtitle("top");
    std::cout << stack::top(s) << std::endl;
    stack::print(s);

    print_subtitle("top_ref");
    stack::top_ref(s) = -1;
    stack::print(s);

    print_subtitle("copy");
    stack::stack copy = stack::copy(s);
    stack::print(s);
    stack::print(copy);

    print_subtitle("is_empty, empty");
    std::cout << stack::is_empty(copy) << std::endl;
    stack::empty(copy);
    std::cout << stack::is_empty(copy) << std::endl;

    print_subtitle("get_array_se, length, get_stack, get_array");
    int len = stack::length(s);
    std::cout << len << std::endl;
    int* arr = stack::get_array_se(s);
    array::print(arr, len);
    stack::print(s);
    s = stack::get_stack(arr, len);
    stack::print(s);
    delete [] arr;
    arr = stack::get_array(s);
    array::print(arr, len);
    stack::print(s);

    print_subtitle("deallocate");
    stack::deallocate(s);
}