#pragma once

template <typename T> class Node {
private:
  T value;
  Node<T> *left;
  Node<T> *right;
  Node<T> *parent;

public:
  Node(const T &value);
  ~Node();

  void insert(const T &value);
  bool search(const T &value) const;
  void dfs_inorder() const;
};

#include "Node.tpp"
