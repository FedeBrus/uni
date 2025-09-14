#include <iostream>
#include <cstdlib>
#include <cassert>

// Non modificare questa parte sotto del codice
typedef struct Stack {
    int data;
    struct Stack * next;
} Stack;

typedef struct List {
    int data;
    struct List * next;
} List;

struct Stack * initStack() {
    return nullptr;
}

bool isEmpty(struct Stack * s) {
    return (s == nullptr);
}

void push(struct Stack * &s, int value) {
    struct Stack * newElement = new Stack;
    newElement->data = value;
    newElement->next = s;
    s = newElement;
}

int top(struct Stack * s) {
    if (isEmpty(s)) {
        std::cerr << "top Error: stack is empty" << std::endl;
        assert(false);
        exit(1);
    }
    return s->data;
}

int pop(struct Stack * &s) {
    if (isEmpty(s)) {
        std::cerr << "pop Error: stack is empty" << std::endl;
        assert(false);
        exit(1);
    }
    int value = s->data;
    struct Stack * temp = s;
    s = s->next;
    delete temp;
    return value;
}

int lenght(struct Stack * s) {
    int count = 0;
    struct Stack * temp = s;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void deleteStack(struct Stack * &s) {
    while (!isEmpty(s)) {
        pop(s);
    }
}

void printStack(struct Stack * s, const char * message = "Stack: ") {
    if (isEmpty(s)) {
        std::cout << "Stack is empty" << std::endl;
    }
    else
    {
        std::cout << message;
        struct Stack * temp = s;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}

void deleteList(struct List * &l) {
    while (l != nullptr) {
        struct List * temp = l;
        l = l->next;
        delete temp;
    }
}

void printList(struct List * l, const char * message = "List: ") {
    if (l == nullptr) {
        std::cout << "List is empty" << std::endl;
    }
    else
    {
        std::cout << message;
        struct List * temp = l;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}
// Non modificare questa parte sopra del codice

// Inserire qui sotto la dichiarazione della funzione calcola
List* calcola(Stack*& s1, Stack*& s2);
void calcola_aux(Stack*& s1, Stack*& s2, List*& result, int index);
void insert_inorder(List*& l, int x);
// Inserire qui sopra la dichiarazione della funzione calcola


int main() {
    Stack *s1, *s2;
    List *result;
    unsigned int seed = (unsigned int)time(NULL);
    // seed = 60000
    seed = 1697033220;
    srand(seed);

    s1 = initStack();
    s2 = initStack();
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) push(s1, 10-i);
        else push(s2, 10-i);
    }
    printStack(s1, "S1: ");
    printStack(s2, "S2: ");
    result = calcola(s1, s2);
    printStack(s1, "NS1: ");
    printStack(s2, "NS2: ");
    printList(result, "Result: ");
    deleteStack(s1);
    deleteStack(s2);
    deleteList(result);

    s1 = initStack();
    s2 = initStack();
    for (int i = 0; i < 10; i++) {
        push(s1, rand() % 10);
        push(s2, rand() % 10);
    }
    printStack(s1, "S1: ");
    printStack(s2, "S2: ");
    result = calcola(s1, s2);
    printStack(s1, "NS1: ");
    printStack(s2, "NS2: ");
    printList(result, "Result: ");
    deleteStack(s1);
    deleteStack(s2);
    deleteList(result);

    s1 = initStack();
    s2 = initStack();
    printStack(s1, "S1: ");
    printStack(s2, "S2: ");
    result = calcola(s1, s2);
    printStack(s1, "NS1: ");
    printStack(s2, "NS2: ");
    printList(result, "Result: ");
    deleteStack(s1);
    deleteStack(s2);
    deleteList(result);

    return 0;
}

// Inserire qui sotto la definizione della funzione calcola

List* calcola(Stack*& s1, Stack*& s2) {
    List* result = nullptr;
    calcola_aux(s1, s2, result, 0);
    return result;
}

void calcola_aux(Stack*& s1, Stack*& s2, List*& result, int index) {
    if (index % 2 != 0) {
        if (!isEmpty(s1)) {
            insert_inorder(result, top(s1));
        } else {
            return;
        }
    } else {
        if (!isEmpty(s2)) {
            insert_inorder(result, top(s2));
        } else {
            return;
        }
    }

    int tmp1 = top(s1);
    int tmp2 = top(s2);
    pop(s1);
    pop(s2);
    calcola_aux(s1, s2, result, index + 1);
    push(s1, tmp1);
    push(s2, tmp2);
}

void add_head(List*& l, int x) {
    List* n = new List;
    n->data = x;
    n->next = l;
    l = n;
}

void insert_inorder(List*& l, int x) {
    if (l == nullptr) {
        add_head(l, x);
        return;
    }

    List* n = new List;
    n->data = x;

    if (l->data > x) {
        if (l->next == nullptr) {
            n->next = nullptr;
            l->next = n;
        } else {
            if (l->next->data > x) {
                insert_inorder(l->next, x);
            } else {
                n->next = l->next;
                l->next = n;
            }
        }
    } else {
        add_head(l, x);
    }
}

// Inserire qui sopra la definizione della funzione calcola