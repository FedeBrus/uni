#include "BinarySearchTree.hpp"
#include <iostream>

int main() {
  BinarySearchTree<int> tree;
  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  tree.insert(1);

  std::cout << tree.search(5) << std::endl;
  std::cout << tree.search(3) << std::endl;
  std::cout << tree.search(7) << std::endl;
  std::cout << tree.search(1) << std::endl;
  std::cout << tree.search(4) << std::endl;

  tree.dfs_inorder();
  std::cout << std::endl;
}
