#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  vector<int> iv(ia, end(ia));
  list<int> il(iv.cbegin(), iv.cend());

  for (auto i = il.cbegin(); i != il.cend();) {
    if (*i % 2 == 0) {
      i = il.erase(i);
    } else {
      i++;
    }
  }

  for (auto i = il.cbegin(); i != il.cend(); i++) {
    cout << *i << endl;
  }

  for (auto i = iv.cbegin(); i < iv.cend();) {
    if (*i % 2) {
      i = iv.erase(i);
    } else {
      i++;
    }
  }

  for (auto i = iv.cbegin(); i < iv.cend(); i++) {
    cout << *i << endl;
  }


  return 0;
}
