#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> v = { 0, 1, 2, 0, 4 };

  cout << count(v.cbegin(), v.cend(), 0) << endl;

  return 0;
}
