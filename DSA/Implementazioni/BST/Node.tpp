#include <iostream>

template <typename T>
Node<T>::Node(const T &value)
    : value(value), left(nullptr), right(nullptr), parent(nullptr) {}

template <typename T> Node<T>::~Node() {
  delete left;
  delete right;
}

template <typename T> void Node<T>::insert(const T &value) {
  Node<T> **selected = &(value <= this->value ? this->left : this->right);

  if (!(*selected)) {
    *selected = new Node<T>(value);
    (*selected)->parent = this;
  } else {
    (*selected)->insert(value);
  }
}

template <typename T> bool Node<T>::search(const T &value) const {
  if (this->value == value)
    return true;

  Node<T> *const *selected = &(value <= this->value ? this->left : this->right);

  if (!(*selected)) {
    return false;
  } else {
    return (*selected)->search(value);
  }
}

template <typename T> void Node<T>::dfs_inorder() const {
  if (left)
    left->dfs_inorder();
  std::cout << value << " ";
  if (right)
    right->dfs_inorder();
}
