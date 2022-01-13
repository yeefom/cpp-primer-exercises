#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

iter HasValue(iter begin, iter end, int value) {
  while (begin != end) {
    if (*begin == value) {
      return begin;
    }

    begin++;
  }

  return end;
}

int main(int argc, char const *argv[]) {
  vector<int> v = { 10, 11, 12 };
  cout << *HasValue(v.cbegin(), v.cend(), 10) << endl;
  cout << *HasValue(v.cbegin(), v.cend(), 4) << endl;
  return 0;
}
