#include "Forest.hpp"
using namespace std;
void Forest::AddTree(int h, char s, string c, int x, int y) {
  Tree *tree = new Tree(h, s, c);
  tree->x = x;
  tree->y = y;

  trees.push_back(tree);
}

void Forest::Proba(int height, int width) {
  H = height;
  W = width;

  tab = new int *[H];
  for (int i = 0; i < H; i++) {
    tab[i] = new int[W];
  }
}


Forest::~Forest() {
  for (auto t : trees) {
    delete t;
  }

  trees.clear();
}
Forest::Forest() {}
