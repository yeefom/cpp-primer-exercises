#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Reset(vector<int> &v) {
  fill_n(v.begin(), v.size(), 0);
}

int main(int argc, char const *argv[]) {
  vector<int> v = { 0, 1, 2, 0, 4 };

  Reset(v);

  for (auto e : v) {
    cout << e << " ";
  }

  return 0;
}
