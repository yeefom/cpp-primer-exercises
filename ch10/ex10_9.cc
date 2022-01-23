#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ElimDups(vector<int> &v) {
  sort(v.begin(), v.end());
  auto uniqueEnd = unique(v.begin(), v.end());
  v.erase(uniqueEnd, v.end());
}

int main(int argc, char const *argv[]) {
  vector<int> v = { 0, 1, 2, 0, 4 };

  ElimDups(v);

  for (auto e : v) {
    cout << e << " ";
  }

  return 0;
}
