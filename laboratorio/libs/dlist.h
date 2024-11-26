#ifndef DLIST_H
#define DLIST_H

namespace dlist {
    struct node {
        int val;
        node* next;
        node* prev;
    };

    struct node* dlist;

    // utility functions
    bool is_empty(dlist n);
    void print(dlist n);
    void print_rec(dlist n);
    void print_circular(dlist n);
    int length(dlist n);
    int length_rec(dlist n);

    // memory managment functinos
    dlist create_list();
    node* create_node(int x); // Creates a node
    node* create_node(int x, node* next, node* prev); // Creates node before a certain node t
    void deallocate(dlist& n);
    void deallocate_circular(dlist& n);
    void deallocate_rec(dlist& n);

    // insertion functions
    void insert_at_node(dlist n, node* t); // Inserts a certain node t after a certain node n
    // DA RIFARE DA QUI IN AVANTI
    void insert_at(dlist& n, int x, int pos); // Inserts a node at a certain position
    void add_tail(dlist& n, int x);
    void add_head(dlist& n, int x);
    void add_node_tail(dlist& n, node* t);
    void add_node_head(dlist& n, node* t);
    void add_ordered_asc(dlist& n, int x);
    void add_ordered_desc(dlist& n, int x);

    // removal functions
    void remove_head(dlist& n);
    void remove_circular_head(dlist& n);
    void remove_tail(dlist& n);
    void remove(dlist& n, int x);
    void remove_at(dlist& n, int pos);
    void remove_at_node(dlist n);

    // access functions 
    node* get_tail(dlist n);
    node* get_at(dlist n, int pos);
    node* get_max(dlist n);
    int get_max_pos(dlist n);
    node* get_min(dlist n);
    int get_min_pos(dlist n);
    int get_pos(dlist n, int x);

    // miscellanious functions
    bool contains(dlist n, int x);
    int* get_array(dlist n, int& len);
    void invert(dlist& n);
    dlist inverse(dlist n);
    void concatenate(dlist n, node* t);
    void make_circular(dlist n);
    bool is_circular(dlist n);
    void sort(dlist& n);
    dlist get_list(int arr[], int n);
    dlist copy(dlist n);
    void push_up(dlist& n);
    void push_down(dlist& n);
}

#endif