#include <iostream>
using namespace std;



void changeValue(int& someVar, int newValue) {
    someVar = newValue;
}

int main(int argc, char const *argv[]) {
  cout << "/* Hello World */" << endl;
    int tree = 9;
    int* treeptr = &tree;
    int& treeRef = tree;

    cout << &treeptr << " | " <<  treeptr << endl;

  return 0;
}
