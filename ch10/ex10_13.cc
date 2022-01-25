#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool LessThanSix(string a) {
  return a.size() < 6;
}

int main(int argc, char const *argv[]) {
  vector<string> v = { "aaa", "cc", "bbbbbbbbbb", "dd", "eeeeeeeeeee" };

  auto it = partition(v.begin(), v.end(), LessThanSix);

  for (auto i = v.begin(); i != it; i++) {
    cout << *i << " ";
  }

  cout << endl;

  for (auto i = v.end() - 1; i >= it; i--) {
    cout << *i << " ";
  }

  return 0;
}
