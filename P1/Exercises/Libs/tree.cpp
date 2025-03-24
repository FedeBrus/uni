#include <iostream>
#include "tree.h"

namespace tree {

    static node* create_node(int x) {
        node* t = new node;
        t->val = x;
        t->right = nullptr;
        t->left = nullptr;
        return t;
    }

    bool search(node* n, int e) {
        if (n == nullptr) return;

        if (n->val == e) return true;
        if (n->val > e) return search(n->right, e);
        if (n->val < e) return search(n->left, e);
    }

    void insert(node* n, int x) {
        if (n == nullptr) n = create_node(x);
        if (n->val < x) insert(n->left, x);
        if (n->val >= x) insert(n->right, x);
    }

    static void preorder_print_aux(node* n) {
        if (n != nullptr) {
            std::cout << "{" << n->val << "}";
            preorder_print_aux(n->left);
            preorder_print_aux(n->right);
        }
    }

    void preorder_print(node* n) {
        if (n != nullptr) {
            std::cout << "<";
            preorder_print_aux(n);
            std::cout << ">" << std::endl;
        } else {
            std::cout << "NULL" << std::endl;
        }
    }

    static void postorder_print_aux(node* n) {
        if (n != nullptr) {
            postorder_print_aux(n->left);
            postorder_print_aux(n->right);
            std::cout << "{" << n->val << "}";
        }
    }

    void postorder_print(node* n) {
        if (n != nullptr) {
            std::cout << "<";
            postorder_print_aux(n);
            std::cout << ">" << std::endl;
        } else {
            std::cout << "NULL" << std::endl;
        }
    }

    static void inorder_print_aux(node* n) {
        if (n != nullptr) {
            inorder_print_aux(n->left);
            std::cout << "{" << n->val << "}";
            inorder_print_aux(n->right);
        }
    }

    void inorder_print(node* n) {
        if (n != nullptr) {
            std::cout << "<";
            inorder_print_aux(n);
            std::cout << ">" << std::endl;
        } else {
            std::cout << "NULL" << std::endl;
        }
    }

    void dealloc(node* n) {
        if (n != nullptr) {
            dealloc(n->left);
            dealloc(n->right);
            delete n;
        }
    }
}