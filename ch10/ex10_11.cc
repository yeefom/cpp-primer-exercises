#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsShorter(string a, string b) {
  return a.size() < b.size();
}

int main(int argc, char const *argv[]) {
  vector<string> v = { "aaa", "cc", "bb", "dd", "eeee" };

  stable_sort(v.begin(), v.end(), IsShorter);

  for (auto &e : v) {
    cout << e << " ";
  }

  return 0;
}
