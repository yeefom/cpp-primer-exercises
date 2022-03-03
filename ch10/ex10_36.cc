#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
  list<int> l = {1, 0, 2, 3, 0, 4};

  auto a = find(l.crbegin(), l.crend(), 0);

  cout << *a << endl;
  cout << *++a << endl;

  return 0;
}
