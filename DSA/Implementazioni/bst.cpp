#include "bst.hpp"
#include <iostream>

int main() {
  BST<int> tree;
  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  tree.insert(1);

  std::cout << tree.search(5) << std::endl;
  std::cout << tree.search(4) << std::endl;

  tree.inorder();
  std::cout << std::endl;
}
