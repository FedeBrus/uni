#ifndef TREE_H
#define TREE_H

namespace tree {
    struct node {
        int val;
        node* left;
        node* right;
    };

    bool search(node* n, int e);
    void inesrt(node* n, int x);

    void preorder_print(node* n);
    void postorder_print(node* n);
    void inorder_print(node* n);

    void dealloc(node* n);
}

#endif