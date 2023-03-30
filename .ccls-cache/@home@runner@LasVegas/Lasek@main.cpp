#include "Forest.hpp"
using namespace std;
#include <iostream>
#include <vector>

int main() {
  Tree tree(5, 'A', "\033[1;31m");
  tree.printTree();

    Forest forest;
    forest.AddTree(5, '#', "\033[1;31m", 2, 2);

  // wypisać forest funkcją printForest i drzewka itd..
}