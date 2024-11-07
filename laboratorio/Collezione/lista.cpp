#include <iostream>

struct node {
    int val;
    node* next;
};

struct head {
    node* start;
};

// Convenzioni:
// n = primo nodo della lista
// t = nodo parametro per la funzione
// x = valore parametro per la funzione
// l = lunghezza
// m = nuovo nodo
// c = copia temporanea

bool is_empty(node* n);
node* create_node(int x);
node* create_node(int x, node* t);

void print(node* n);
void print_rec(node* n);

int length(node* n);
int length_rec(node* n);

void deallocate(node*& n);
void deallocate_rec(node*& n);

void insert_at_node(node* n, node* t);
void insert_at(node*& n, int x, int pos);

void add_tail(node*& n, int x);
void add_head(node*& n, int x);
void add_node_tail(node*& n, node* t);
void add_node_head(node*& n, node* t);
void add_ordered_asc(node*& n, int x);
void add_ordered_desc(node*& n, int x);

void remove_head(node*& n);
void remove_tail(node*& n);
void remove(node*&, int x);
void remove_at(node*&, int pos);
void remove_at_node(node* n);

int main() {
    node* lista = nullptr;

    add_tail(lista, 1);
    add_tail(lista, 2);
    add_tail(lista, 3);
    add_tail(lista, 5);
    add_tail(lista, 6);

    print(lista);
    remove_at(lista, -2);
    print(lista);
    remove_at(lista, 0);
    print(lista);
    remove_at(lista, 3);
    print(lista);
    remove_at(lista, 2);
    print(lista);

    deallocate(lista);
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