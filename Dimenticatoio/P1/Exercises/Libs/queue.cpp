#include <iostream>
#include "list.h"
#include "queue.h"

namespace queue {

    queue create_queue() {
        queue q = new queue_list;
        q->head = list::create_list();
        q->tail = list::create_list();
        return q;
    }

    queue get_queue(int arr[], int size) {
        queue q = create_queue();
        for (int i = 0; i < size; i++) {
            enqueue(q, arr[i]);
        }
        return q;
    }

    int* get_array_se(queue& n) {
        int len = length(n);
        int* arr = new int[len];
        // Completely empties the queue 
        for (int i = 0; i < len; i++) {
            arr[i] = front(n);
            dequeue(n);
        }

        return arr;
    }

    int* get_array(queue n) {
        int len = list::length(n->head);

        int* arr = nullptr; 
        if (len > 0) {
            arr = new int[len];
            list::node* c = n->head;
            for (int i = 0; i < len; i++) {
                arr[i] = c->val;
                c = c->next;
            }
        }

        return arr;
    }

    bool is_empty(queue n) {
        return n->head == nullptr;
    }

    int length(queue n) {
        return list::length(n->head);
    }

    void enqueue(queue& n, int x) {
        if (is_empty(n)) {
            list::add_head(n->head, x);
            n->tail = n->head;
        } else {
            list::node* enqueued = list::create_node_after(x, n->tail);
            n->tail = enqueued;
        }
    }

    void dequeue(queue& n) {
        if (!is_empty(n)) {
            list::remove_head(n->head);
            if (n->head == nullptr) {
                n->tail = nullptr;
            }
        }
    }

    int front(queue n) {
        return n->head->val;
    }

    int back(queue n) {
        return n->tail->val;
    }

    int& front_ref(queue n) {
        return n->head->val;
    }

    int& back_ref(queue n) {
        return n->tail->val;
    }

    void empty(queue n) {
        while (!is_empty(n)) {
            dequeue(n);
        }
    }

    queue copy(queue n) {
        queue q = create_queue(); 
        q->head = list::copy(n->head);
        q->tail = list::get_tail(n->head);
        return q;
    }

    void deallocate(queue& n) {
        list::deallocate(n->head);
        delete n;
        n = nullptr;
    }

    void print(queue n) {
        list::print(n->head);
    }
}