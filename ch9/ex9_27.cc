#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char const *argv[]) {
  forward_list<int> fl = { 0, 1, 2, 3, 4, 5 };

  auto prev = fl.cbefore_begin();
  auto curr = fl.cbegin();

  while (curr != fl.cend()) {
    if (*curr % 2) {
      curr = fl.erase_after(prev);
    } else {
      prev = curr;
      curr++;
    }
  }

  for (auto i = fl.cbegin(); i != fl.cend(); ++i) {
    cout << *i << endl;
  }

  return 0;
}
