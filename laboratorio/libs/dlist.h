#ifndef DLIST_H
#define DLIST_H

namespace dlist {
    struct node {
        int val;
        node* next;
        node* prev;
    };

    // utility functions
    bool is_empty(const node* n);
    void print(const node* n);
    void print_rec(const node* n);
    void print_circular(const node* n);
    int length(const node* n);
    int length_rec(const node* n);

    // memory managment functinos
    node* create_list();
    node* create_node(int x); // Creates a node
    node* create_node_after(int x, node* t); // Creates node after a certain node t
    void deallocate(node*& n);
    void deallocate_circular(node*& n);
    void deallocate_rec(node*& n);

    // insertion functions
    void insert_at_node(node* n, node* t); // Inserts a certain node t after a certain node n
    void insert_at(node*& n, int x, int pos); // Inserts a node at a certain position
    void add_tail(node*& n, int x);
    void add_head(node*& n, int x);
    void add_node_tail(node*& n, node* t);
    void add_node_head(node*& n, node* t);
    void add_ordered_asc(node*& n, int x);
    void add_ordered_desc(node*& n, int x);

    // removal functions
    void remove_head(node*& n);
    void remove_circular_head(node*& n);
    void remove_tail(node*& n);
    void remove(node*&, int x);
    void remove_at(node*&, int pos);
    void remove_at_node(node* n);

    // access functions 
    node* get_tail(node* n);
    node* get_at(node* n, int pos);
    node* get_max(node* n);
    int get_max_pos(node* n);
    node* get_min(node* n);
    int get_min_pos(node* n);
    int get_pos(node* n, int x);

    // miscellanious functions
    bool contains(node* n, int x);
    int* get_array(node* n, int& len);
    void invert(node*& n);
    node* inverse(node* n);
    void concatenate(node* n, node* t);
    void make_circular(node* n);
    bool is_circular(node* n);
    void sort(node*& n);
    node* get_list(int arr[], int n);
    node* copy(node* n);
    void push_up(node*& n);
    void push_down(node*& n);
}

#endif