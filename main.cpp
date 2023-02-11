#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
bool endsWith(string target, string ending) {
  cout << "\n" << target << " " << ending;

  if (target.size() <= 0) {
    return false;
  }
  if (ending.size() <= 0) {
    return false;
  } else if (ending.size() > target.size()) {
    return false;
  }
  cout << "\n" << target.size() << " " << ending.size();
  for (int i = target.size() - 1, j = ending.size() - 1; i > 0, j > 0;
       i--, j--) {

    if (target.at(i) != ending.at(j)) {
      //  cout << target.at(i) << " " << ending.at(j) << "\n";
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    cerr << "No input file \n";
  } else if (endsWith(string(argv[1]), ".bmp")) {
    cout << "Correct";
  } else {
    cout << argv[1] << "\n";
  }
}