#include "Tree.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Forest {
public:
  int H;
  int W;
  int **tab;

  vector<Tree *> trees;

  void AddTree(int h, char s, string c, int x, int y);

  void Proba(int height, int width);

  Forest();

  ~Forest();
};