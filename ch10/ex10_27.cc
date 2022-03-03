#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<string> v{"a", "a", "b", "b", "c"};
  list<string> l;

  unique_copy(v.cbegin(), v.cend(), inserter(l, l.begin()));

  for (auto iter = l.cbegin(); iter != l.cend(); ++iter) {
    cout << *iter << endl;
  }

  return 0;
}
