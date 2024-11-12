#include <iostream>

struct node {
    int val;
    node* next;
};

// Convenzioni:
// n = primo nodo della lista
// t = nodo parametro per la funzione
// x = valore parametro per la funzione
// l = lunghezza
// m = nuovo nodo
// c = copia temporanea

// utility functions
bool is_empty(node* n);
void print(node* n);
void print_rec(node* n);
int length(node* n);
int length_rec(node* n);

// memory managment functinos
node* create_node(int x); // Creates a node
node* create_node(int x, node* t); // Creates node after a certain node t
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

int main() {
    node* lista = nullptr;

    add_tail(lista, 3);
    add_tail(lista, 1);
    add_tail(lista, 2);
    add_tail(lista, 7);
    add_tail(lista, 0);
    add_tail(lista, 2);

    print(lista);
    for (int i = 0; i < 6; i++) {
        push_down(lista);
        print(lista);
        remove_head(lista);
    }

    deallocate_circular(lista);
    return 0;
}

bool is_empty(node* n) {
    return n == nullptr;
}

node* create_node(int x) {
    node* m = new node;
    m->val = x;
    m->next = nullptr;

    return m;
}

node* create_node(int x, node* t) {
    node* m = new node;
    m->val = x;
    m->next = t;

    return m;
}

void print(node* n) {
    if (!is_empty(n)) {
        std::cout << "{";
        // Ciclo per stampare tutti i l - 1 nodi.
        while (n->next != nullptr) {
            std::cout << n->val << "}->{";
            n = n->next;
        }
        std::cout << n->val << "}->NULL" << std::endl;
    } else {
        std::cout << "NULL" << std::endl;
    }
}

void print_rec(node* n) {
    if (n == nullptr) {
        std::cout << "NULL" << std::endl;
    } else { 
        std::cout << "{" << n->val << "}->";
        print_rec(n->next);
    }
}

int length(node* n) {
    int l = 0;
    while (n != nullptr) {
        n = n->next;
        l++;
    }

    return l;
}

int length_rec(node* n) {
    if (n == nullptr) return 0;
    else return 1 + length(n->next);
}

void deallocate(node*& n) {
    if (!is_empty(n)) {
        while (n != nullptr) {
            node* c = n;
            n = n->next;
            delete c;
        }
    }
}

void deallocate_circular(node*& n) {
    if (!is_empty(n)) {
        node* c = n;
        while (c != n) {
            node* t = c;
            c = c->next;
            delete t;
        }
        
        delete c;
        n = nullptr;
    }
}

void deallocate_rec(node*& n) {
    if (n == nullptr) return;

    // Si sfrutta la chiusura di chiamate ricorsive per percorrere la lista al contrario
    deallocate_rec(n->next);
    delete n;
    // Bisogna segnalare al chiamante cambiando il puntatore
    n = nullptr; 
}

void insert_at_node(node* n, node* t) {
    if (n != nullptr) {
        t->next = n->next;
        n->next = t;
    }
}

void insert_at(node*& n, int x, int pos) {
    node* m = create_node(x);

    // Questo serve a creare indici negativi some Python
    if (pos < 0) {
        pos += length(n) + 1; 
        if (pos < 0) {
            pos = 0;
        }
    }

    if (is_empty(n) || pos == 0) {
        m->next = n;
        n = m;
    } else {
        node* c = n;
        while (pos > 1 && c->next != nullptr) {
            c = c->next;
            pos--;
        }
        insert_at_node(c, m);
    }
}

void add_tail(node*& n, int x) {
    node* m = create_node(x);

    node* c = n;
    // Se la lista è vuota bisogna modificare il puntatore all'inizio della lista con il nuovo nodo
    // Altrimenti bisogna posizionarsi alla fine della lista e modificare il puntatore al prossimo elemento dell'ultimo elemento
    if (!is_empty(n)) {
        // Ciclo per posizionarsi all'ultimo elemento della lista
        while (c->next != nullptr) {
            c = c ->next;
        }

        c->next = m;
    } else {
        n = m;
    }
}

void add_head(node*& n, int x) {
    node* m = create_node(x, n);
    n = m;
}

void add_node_tail(node*& n, node* t) {
    node* c = n;
    // Se la lista è vuota bisogna modificare il puntatore all'inizio della lista con il nuovo nodo
    // Altrimenti bisogna posizionarsi alla fine della lista e modificare il puntatore al prossimo elemento dell'ultimo elemento
    if (!is_empty(n)) {
        // Ciclo per posizionarsi all'ultimo elemento della lista
        while (c->next != nullptr) {
            c = c ->next;
        }

        c->next = t;
    } else {
        n = t;
    }

}

void add_node_head(node*& n, node* t) {
    t->next = n;
    n = t;
}

void add_ordered_asc(node*& n, int x) {
    node* m = create_node(x);

    // Se la lista è vuota o il primo valore è maggiore di x allora bisogna aggiungere in testa
    // ALtrimenti bisogna scorrere la lista fino all'ultimo elemento minore di x
    if (!is_empty(n) || n->val > x) {
        add_node_head(n, m);
    } else {
        node* c = n;
        // Ciclo per posizionarsi all'elemento appena più piccolo di x
        while (c->next != nullptr && c->next->val < x) {
            c = c->next;
        }

        insert_at_node(c, m);
    }
}

void add_ordered_desc(node*& n, int x) {
    node* m = create_node(x);

    // Se la lista è vuota o il primo valore è maggiore di x allora bisogna aggiungere in testa
    // ALtrimenti bisogna scorrere la lista fino all'ultimo elemento minore di x
    if (!is_empty(n) || n->val < x) {
        add_node_head(n, m);
    } else {
        node* c = n;
        // Ciclo per posizionarsi all'elemento appena più piccolo di x
        while (c->next != nullptr && c->next->val > x) {
            c = c->next;
        }

        insert_at_node(c, m);
    }
}

void remove_head(node*& n) {
    if (!is_empty(n)) {
        node* c = n;
        n = n->next;
        delete c;
    }
}

void remove_tail(node*& n) {
    if (!is_empty(n)) {
        node* c = n;

        if (c->next == nullptr) {
            delete c;
            n = nullptr;
        } else {
            while (c->next != nullptr && c->next->next != nullptr) {
                c = c->next;
            }

            delete c->next;
            c->next = nullptr;
        }
    }
}

void remove(node*&n, int x) {
    if (!is_empty(n)) {
        node* c = n;

        if (c->val == x) {
            n = c->next;
            delete c;
        } else {
            while (c->next != nullptr && c->next->val != x) {
                c = c->next;
            }

            remove_at_node(c);
        }
    }
}

void remove_at(node*& n, int pos) {
    if (pos < 0) {
        pos += length(n); 
        if (pos < 0) {
            pos = 0;
        }
    }

    if (is_empty(n) || pos == 0) {
        remove_head(n);
    } else {
        node* c = n;
        while (pos > 1 && c->next != nullptr) {
            c = c->next;
            pos--;
        }

        remove_at_node(c);
    }
}

void remove_at_node(node* n) {
    if (n->next != nullptr) {
        node* c = n->next;
        n->next = c->next;
        delete c;
    }
}

node* get_tail(node* n) {
    while (n->next != nullptr) {
        n = n->next;
    }

    return n;
}

node* get_at(node* n, int pos) {
    if (!is_empty(n)) {
        for (int i = 0; n->next != nullptr && i < pos; i++) {
            n = n->next;
        }
    }

    return n;
}

node* get_max(node* n) {
    node* max_node = n;

    if (!is_empty(n)) {
        int max = n->val;

        while (n != nullptr) {
            if (n->val > max) {
                max_node = n;
                max = n->val;
            }

            n = n->next;
        }
    }

    return max_node;
}

int get_max_pos(node* n) {
    int max_pos = -1;

    int i = 0;
    if (!is_empty(n)) {
        max_pos = i;
        int max = n->val;

        while (n != nullptr) {
            if (n->val > max) {
                max_pos = i;
                max = n->val;
            }

            n = n->next;
            i++;
        }
    }

    return max_pos;
}

node* get_min(node* n) {
    node* min_node = nullptr;

    if (!is_empty(n)) {
        min_node = n;
        int min = n->val;

        while (n != nullptr) {
            if (n->val < min) {
                min_node = n;
                min = n->val;
            }

            n = n->next;
        }
    }

    return min_node;
}

int get_min_pos(node* n) {
    int min_pos = -1;

    int i = 0;
    if (!is_empty(n)) {
        min_pos = i;
        int min = n->val;

        while (n != nullptr) {
            if (n->val < min) {
                min_pos = i;
                min = n->val;
            }

            n = n->next;
            i++;
        }
    }

    return min_pos;
}

int get_pos(node* n, int x) {
    int pos = 0;

    if (!is_empty(n)) {
        while (n != nullptr && n->val != x) {
            n = n->next;
            pos++;
        }

        if (n == nullptr) pos = -1;
    } else {
        pos = -1;
    }

    return pos;
}

bool contains(node* n, int x) {
    bool found = false;

    if (!is_empty(n)) {
        while (!found && n != nullptr) {
            if (n->val == x) found = true;
            n = n->next;
        }
    }

    return found;
}

int* get_array(node* n, int& len) {
    len = length(n);
    int* arr = new int[len];
    int i = 0;
    while (i < len && n != nullptr) {
        arr[i]= n->val;
        n = n->next;
        i++;
    }

    return arr;
}

void invert(node*& n) {
    node* t;
    node* y = n;
    node* r = nullptr;
    while (y != nullptr) {
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }

    n = r;
}

node* inverse(node* n) {
    node* c = nullptr;
    while (n != nullptr) {
        add_node_head(c, n);
        n = n->next;
    }
    return c;
}

void concatenate(node* n, node* t) {
    get_tail(n)->next = t;
}

void make_circular(node* n) {
    get_tail(n)->next = n;
}

bool is_circular(node* n) {
    bool circular = false; 
    if (!is_empty(n)) {
        node* c = n;
        while (c->next != nullptr && c->next != n) {
            c = c->next;
        }

        circular = c->next == n;
    }

    return circular;
}

void sort(node*& n) {
    // Very inefficient but works
    node* sorted = nullptr;

    while (n != nullptr) {
        node* max = get_max(n);
        int max_pos = get_max_pos(n);
        add_node_head(sorted, max);
        remove_at(n, max_pos);
    }

    n = sorted;
}

node* get_list(int arr[], int n) {
    node* list = nullptr;
    // Reversed loop for O(n) complexity
    for (int i = n - 1; i >= 0; i--) {
        add_head(list, arr[i]);
    }

    return list;
}

node* copy(node* n) {
    node* c = nullptr;

    /* 
    Facile ma inefficiente
    while (n != nullptr) {
        add_tail(head);
        n = n->next;
    }
    */

    node* t = inverse(n);
    while (t != nullptr) {
        add_node_head(c, t);
        t = t->next;
    }

    return c;
}

void push_up(node*& n) {
    int prev_pos = get_max_pos(n) - 1;

    if (prev_pos >= 0) {
        node* prev = get_at(n, prev_pos);
        node* max = prev->next;
        prev->next = prev->next->next;
        max->next = nullptr;
        add_node_tail(n, max);

    } else if (prev_pos == -1) {
        node* max = n;
        max->next = nullptr;
        remove_head(n);
        add_node_tail(n, max);
    }
}

void push_down(node*& n) {
    int prev_pos = get_min_pos(n) - 1;

    if (prev_pos >= 0) {
        node* prev = get_at(n, prev_pos);
        node* min = prev->next;
        prev->next = prev->next->next;
        add_node_head(n, min);

    }
}