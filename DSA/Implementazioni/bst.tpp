#include <iostream>

template <typename T>
BST<T>::BST() : left(nullptr), right(nullptr), parent(nullptr), empty(true) {}

template <typename T>
BST<T>::BST(const T &value)
    : value(value), left(nullptr), right(nullptr), parent(nullptr),
      empty(false) {}

template <typename T> BST<T>::~BST() {
  delete left;
  delete right;
}

template <typename T> void BST<T>::insert(const T &value) {
  if (this->empty) {
    this->value = value;
    this->empty = false;
    return;
  }

  BST<T> **selected = value <= this->value ? &this->left : &this->right;

  if (!*selected) {
    *selected = new BST<T>(value);
    (*selected)->parent = this;
  } else {
    (*selected)->insert(value);
  }
}

template <typename T> bool BST<T>::search(const T &value) const {
  if (!this)
    return false;

  if (this->value < value)
    return this->left->search(value);

  if (this->value > value)
    return this->right->search(value);

  return true;
}

template <typename T> void BST<T>::inorder() const {
  if (!this)
    return;

  this->left->inorder();
  std::cout << this->value << " ";
  this->right->inorder();
}
