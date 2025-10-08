#pragma once

template <typename T> class BST {
private:
  T value;
  BST<T> *left;
  BST<T> *right;
  BST<T> *parent;
  bool empty;

  BST(const T &value);

public:
  BST();
  ~BST();

  void insert(const T &value);
  bool search(const T &value) const;
  void inorder() const;
};

#include "bst.tpp"
