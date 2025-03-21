#ifndef LIST_H
#define LIST_H

namespace list {
    struct node {
        int val;
        node* next;
    };

    typedef node* list;

    // Convenzioni:
    // n = primo nodo della lista
    // t = nodo parametro per la funzione
    // x = valore parametro per la funzione
    // l = lunghezza
    // m = nuovo nodo
    // c = copia temporanea

    // utility functions
    bool is_empty(list n);
    void print(list n);
    void print_rec(list n);
    void print_circular(list n);
    int length(list n);
    int length_rec(list n);

    // memory managment functinos
    list create_list();
    node* create_node(int x); // Creates a node
    node* create_node_after(int x, node* t); // Creates node after a certain node t
    void deallocate(list& n);
    void deallocate_circular(list& n);
    void deallocate_rec(list& n);

    // insertion functions
    void insert_at_node(list n, node* t); // Inserts a certain node t after a certain node n
    void insert_at(list& n, int x, int pos); // Inserts a node at a certain position
    void add_tail(list& n, int x);
    void add_head(list& n, int x);
    void add_node_tail(list& n, node* t);
    void add_node_head(list& n, node* t);
    void add_ordered_asc(list& n, int x);
    void add_ordered_desc(list& n, int x);

    // removal functions
    void remove_head(list& n);
    void remove_circular_head(list& n);
    void remove_tail(list& n);
    void remove(list&, int x);
    void remove_at(list&, int pos);
    void remove_at_node(list n);

    // access functions 
    list get_tail(list n);
    list get_at(list n, int pos);
    list get_max(list n);
    int get_max_pos(list n);
    list get_min(node* n);
    int get_min_pos(list n);
    int get_pos(list n, int x);

    // miscellanious functions
    bool contains(list n, int x);
    int* get_array(list n, int& len);
    void invert(list& n);
    list inverse(node* n);
    void concatenate(list n, node* t);
    void make_circular(list n);
    bool is_circular(list n);
    void sort(list& n);
    list get_list(int arr[], int n);
    list copy(node* n);
    void push_up(list& n);
    void push_down(list& n);
}

#endif