#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> v = {1, 2, 3};

  for (auto i = v.crbegin(); i != v.crend(); ++i) {
    cout << *i << endl;
  }

  return 0;
}
