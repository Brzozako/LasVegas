#include "Tree.hpp"
using namespace std;
void Tree::printTree() {
  // Choinka kolorowa
  for (int i = 0; i < height; i++) {
    for (int j = height - i; j >= 0; j--) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << color << "\033[;32m*\033[0m";
    }
    cout << endl;
  }

  // Choinka binarna
  /*for (int j = 0; j < height; j++) {
    for (int i = 0; i < 2 * height - 1; i++) {
      cout << tab[j][i];
    }
    cout << endl;
  }*/
}

Tree::Tree(int h, char s, string c) {
  height = h;
  symbol = s;
  color = c;

  tab = new int *[height];

  for (int j = 0; j < height; j++) {
    tab[j] = new int[2 * height - 1];
    for (int i = 0; i < 2 * height - 1; i++) {
      tab[j][i] = 0;
    }
  }

  for (int j = 0; j < height; j++)
    for (int i = height - j - 1; i < height + j; i++)
      tab[j][i] = 1;
}

Tree::~Tree() {
  for (int j = 0; j < height; j++) {
    delete tab[j];
  }
  delete tab;
  cout << endl << "Kasuje drzewo" << endl;
}