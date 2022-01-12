#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

bool HasValue(iter begin, iter end, int value) {
  while (begin < end) {
    if (*begin == value) {
      return true;
    }

    begin++;
  }

  return false;
}

int main(int argc, char const *argv[]) {
  vector<int> v = { 1, 2, 3 };
  cout << HasValue(v.cbegin(), v.cend(), 1) << endl;
  cout << HasValue(v.cbegin(), v.cend(), 4) << endl;
  return 0;
}
