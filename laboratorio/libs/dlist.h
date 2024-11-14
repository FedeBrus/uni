#ifndef DLIST_H
#define DLIST_H

namespace dlist {
    struct node {
        int val;
        node* next;
        node* prev;
    };

    bool is_empty(node* n);
    void print(node* n);
    void add_head(node* n);
    void remove_at(node* n, int pos);
    int length(node* n);
}

#endif