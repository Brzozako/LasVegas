#include "Forest.hpp"
using namespace std;
#include <iostream>
#include <vector>

int Tree::counter=0;

int main() {
  int i, j;
  Tree tree(5, 'A', "\033[1;31m");
  tree.printTree();

  Forest las(15, 60);
  las.AddTree(5, '#', "green", 2, 2);
  las.AddTree(7, '@', "yellow", 3, 30);

  for (j = 0; j < las.H; j++) {
    for (i = 0; i < las.W; i++)
      cout << las.tab[j][i];
    cout << endl;
  }
}
