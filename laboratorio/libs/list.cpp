#include <iostream>
#include "list.h"

struct list::node {
    int val;
    node* next;
};

bool list::is_empty(list::node* n) {
    return n == nullptr;
}

list::node* list::create_node(int x) {
    list::node* m = new list::node;
    m->val = x;
    m->next = nullptr;

    return m;
}

list::node* list::create_node_after(int x, list::node* t) {
    list::node* m = new list::node;
    m->val = x;
    m->next = t;

    return m;
}

void list::print(list::node* n) {
    if (!list::is_empty(n)) {
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

void list::print_rec(list::node* n) {
    if (n == nullptr) {
        std::cout << "NULL" << std::endl;
    } else { 
        std::cout << "{" << n->val << "}->";
        print_rec(n->next);
    }
}

int list::length(list::node* n) {
    int l = 0;
    while (n != nullptr) {
        n = n->next;
        l++;
    }

    return l;
}

int list::length_rec(list::node* n) {
    if (n == nullptr) return 0;
    else return 1 + list::length(n->next);
}

void list::deallocate(list::node*& n) {
    if (!list::is_empty(n)) {
        while (n != nullptr) {
            list::node* c = n;
            n = n->next;
            delete c;
        }
    }
}

void list::deallocate_circular(list::node*& n) {
    if (!list::is_empty(n)) {
        list::node* c = n;
        while (c != n) {
            list::node* t = c;
            c = c->next;
            delete t;
        }
        
        delete c;
        n = nullptr;
    }
}

void list::deallocate_rec(list::node*& n) {
    if (n == nullptr) return;

    // Si sfrutta la chiusura di chiamate ricorsive per percorrere la lista al contrario
    list::deallocate_rec(n->next);
    delete n;
    // Bisogna segnalare al chiamante cambiando il puntatore
    n = nullptr; 
}

void list::insert_at_node(list::node* n, list::node* t) {
    if (n != nullptr) {
        t->next = n->next;
        n->next = t;
    }
}

void list::insert_at(list::node*& n, int x, int pos) {
    list::node* m = list::create_node(x);

    // Questo serve a creare indici negativi some Python
    if (pos < 0) {
        pos += list::length(n) + 1; 
        if (pos < 0) {
            pos = 0;
        }
    }

    if (list::is_empty(n) || pos == 0) {
        m->next = n;
        n = m;
    } else {
        list::node* c = n;
        while (pos > 1 && c->next != nullptr) {
            c = c->next;
            pos--;
        }
        list::insert_at_node(c, m);
    }
}

void list::add_tail(list::node*& n, int x) {
    list::node* m = list::create_node(x);

    list::node* c = n;
    // Se la lista è vuota bisogna modificare il puntatore all'inizio della lista con il nuovo nodo
    // Altrimenti bisogna posizionarsi alla fine della lista e modificare il puntatore al prossimo elemento dell'ultimo elemento
    if (!list::is_empty(n)) {
        // Ciclo per posizionarsi all'ultimo elemento della lista
        while (c->next != nullptr) {
            c = c ->next;
        }

        c->next = m;
    } else {
        n = m;
    }
}

void list::add_head(list::node*& n, int x) {
    list::node* m = list::create_node_after(x, n);
    n = m;
}

void list::add_node_tail(list::node*& n, list::node* t) {
    list::node* c = n;
    // Se la lista è vuota bisogna modificare il puntatore all'inizio della lista con il nuovo nodo
    // Altrimenti bisogna posizionarsi alla fine della lista e modificare il puntatore al prossimo elemento dell'ultimo elemento
    if (!list::is_empty(n)) {
        // Ciclo per posizionarsi all'ultimo elemento della lista
        while (c->next != nullptr) {
            c = c ->next;
        }

        c->next = t;
    } else {
        n = t;
    }

}

void list::add_node_head(list::node*& n, list::node* t) {
    t->next = n;
    n = t;
}

void list::add_ordered_asc(list::node*& n, int x) {
    list::node* m = list::create_node(x);

    // Se la lista è vuota o il primo valore è maggiore di x allora bisogna aggiungere in testa
    // ALtrimenti bisogna scorrere la lista fino all'ultimo elemento minore di x
    if (!list::is_empty(n) || n->val > x) {
        list::add_node_head(n, m);
    } else {
        list::node* c = n;
        // Ciclo per posizionarsi all'elemento appena più piccolo di x
        while (c->next != nullptr && c->next->val < x) {
            c = c->next;
        }

        list::insert_at_node(c, m);
    }
}

void list::add_ordered_desc(list::node*& n, int x) {
    list::node* m = list::create_node(x);

    // Se la lista è vuota o il primo valore è maggiore di x allora bisogna aggiungere in testa
    // ALtrimenti bisogna scorrere la lista fino all'ultimo elemento minore di x
    if (!list::is_empty(n) || n->val < x) {
        list::add_node_head(n, m);
    } else {
        list::node* c = n;
        // Ciclo per posizionarsi all'elemento appena più piccolo di x
        while (c->next != nullptr && c->next->val > x) {
            c = c->next;
        }

        list::insert_at_node(c, m);
    }
}

void list::remove_head(list::node*& n) {
    if (!list::is_empty(n)) {
        list::node* c = n;
        n = n->next;
        delete c;
    }
}

void list::remove_tail(list::node*& n) {
    if (!list::is_empty(n)) {
        list::node* c = n;

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

void list::remove(list::node*&n, int x) {
    if (!list::is_empty(n)) {
        list::node* c = n;

        if (c->val == x) {
            n = c->next;
            delete c;
        } else {
            while (c->next != nullptr && c->next->val != x) {
                c = c->next;
            }

            list::remove_at_node(c);
        }
    }
}

void list::remove_at(list::node*& n, int pos) {
    if (pos < 0) {
        pos += list::length(n); 
        if (pos < 0) {
            pos = 0;
        }
    }

    if (list::is_empty(n) || pos == 0) {
        list::remove_head(n);
    } else {
        list::node* c = n;
        while (pos > 1 && c->next != nullptr) {
            c = c->next;
            pos--;
        }

        list::remove_at_node(c);
    }
}

void list::remove_at_node(list::node* n) {
    if (n->next != nullptr) {
        list::node* c = n->next;
        n->next = c->next;
        delete c;
    }
}

list::node* list::get_tail(list::node* n) {
    while (n->next != nullptr) {
        n = n->next;
    }

    return n;
}

list::node* list::get_at(list::node* n, int pos) {
    if (!list::is_empty(n)) {
        for (int i = 0; n->next != nullptr && i < pos; i++) {
            n = n->next;
        }
    }

    return n;
}

list::node* list::get_max(list::node* n) {
    list::node* max_node = n;

    if (!list::is_empty(n)) {
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

int list::get_max_pos(list::node* n) {
    int max_pos = -1;

    int i = 0;
    if (!list::is_empty(n)) {
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

list::node* list::get_min(list::node* n) {
    list::node* min_node = nullptr;

    if (!list::is_empty(n)) {
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

int list::get_min_pos(list::node* n) {
    int min_pos = -1;

    int i = 0;
    if (!list::is_empty(n)) {
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

int list::get_pos(list::node* n, int x) {
    int pos = 0;

    if (!list::is_empty(n)) {
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

bool list::contains(list::node* n, int x) {
    bool found = false;

    if (!list::is_empty(n)) {
        while (!found && n != nullptr) {
            if (n->val == x) found = true;
            n = n->next;
        }
    }

    return found;
}

int* list::get_array(list::node* n, int& len) {
    len = list::length(n);
    int* arr = new int[len];
    int i = 0;
    while (i < len && n != nullptr) {
        arr[i]= n->val;
        n = n->next;
        i++;
    }

    return arr;
}

void list::invert(list::node*& n) {
    list::node* t;
    list::node* y = n;
    list::node* r = nullptr;
    while (y != nullptr) {
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }

    n = r;
}

list::node* list::inverse(list::node* n) {
    node* c = nullptr;
    while (n != nullptr) {
        list::add_node_head(c, n);
        n = n->next;
    }
    return c;
}

void list::concatenate(list::node* n, list::node* t) {
    list::get_tail(n)->next = t;
}

void list::make_circular(list::node* n) {
    list::get_tail(n)->next = n;
}

bool list::is_circular(list::node* n) {
    bool circular = false; 
    if (!list::is_empty(n)) {
        list::node* c = n;
        while (c->next != nullptr && c->next != n) {
            c = c->next;
        }

        circular = c->next == n;
    }

    return circular;
}

void list::sort(list::node*& n) {
    // Very inefficient but works
    list::node* sorted = nullptr;

    while (n != nullptr) {
        list::node* max = list::get_max(n);
        int max_pos = list::get_max_pos(n);
        list::add_node_head(sorted, max);
        list::remove_at(n, max_pos);
    }

    n = sorted;
}

list::node* list::get_list(int arr[], int n) {
    list::node* list = nullptr;
    // Reversed loop for O(n) complexity
    for (int i = n - 1; i >= 0; i--) {
        list::add_head(list, arr[i]);
    }

    return list;
}

list::node* list::copy(list::node* n) {
    list::node* c = nullptr;

    /* 
    Facile ma inefficiente
    while (n != nullptr) {
        add_tail(head);
        n = n->next;
    }
    */

    list::node* t = list::inverse(n);
    while (t != nullptr) {
        list::add_node_head(c, t);
        t = t->next;
    }

    return c;
}

void list::push_up(list::node*& n) {
    int prev_pos = list::get_max_pos(n) - 1;

    if (prev_pos >= 0) {
        list::node* prev = list::get_at(n, prev_pos);
        list::node* max = prev->next;
        prev->next = prev->next->next;
        max->next = nullptr;
        list::add_node_tail(n, max);

    } else if (prev_pos == -1) {
        list::node* max = n;
        max->next = nullptr;
        list::remove_head(n);
        list::add_node_tail(n, max);
    }
}

void list::push_down(list::node*& n) {
    int prev_pos = list::get_min_pos(n) - 1;

    if (prev_pos >= 0) {
        list::node* prev = list::get_at(n, prev_pos);
        list::node* min = prev->next;
        prev->next = prev->next->next;
        list::add_node_head(n, min);
    }
}