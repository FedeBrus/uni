#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"

namespace queue {
    struct queue_list {
        list::node* head;
        list::node* tail;
    };

    typedef queue_list* queue;

    queue create_queue();
    queue get_queue(int arr[], int size);
    int* get_array_se(queue& n);
    int* get_array(queue n);
    bool is_empty(queue n);
    int length(queue n);
    void enqueue(queue& n, int x);
    void dequeue(queue& n);
    int front(queue n);
    int back(queue n);
    int& front_ref(queue n);
    int& back_ref(queue n);
    void empty(queue n);
    queue copy(queue n);
    void deallocate(queue& n);
    void print(queue n);
}

#endif
