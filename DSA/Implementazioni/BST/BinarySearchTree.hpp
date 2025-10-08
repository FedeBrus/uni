#pragma once
#include "Node.hpp"

template <typename T> class BinarySearchTree {
private:
  Node<T> *root;

public:
  BinarySearchTree();
  ~BinarySearchTree();

  void insert(const T &value);
  bool search(const T &value) const;
  void dfs_inorder() const;
};

#include "BinarySearchTree.tpp"
