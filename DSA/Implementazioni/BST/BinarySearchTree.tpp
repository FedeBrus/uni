#include <iostream>

template <typename T> BinarySearchTree<T>::BinarySearchTree() : root(nullptr) {}

template <typename T> BinarySearchTree<T>::~BinarySearchTree() { delete root; }

template <typename T> void BinarySearchTree<T>::insert(const T &value) {
  if (!root)
    root = new Node<T>(value);
  root->insert(value);
}

template <typename T> bool BinarySearchTree<T>::search(const T &value) const {
  if (!root)
    return false;
  return root->search(value);
}

template <typename T> void BinarySearchTree<T>::dfs_inorder() const {
  if (!root)
    return;
  root->dfs_inorder();
}
