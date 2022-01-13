#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
  list<int> s1 = { 1, 2 };
  vector<int> s2 = { 3, 4 };

  vector<double> d1(s1.cbegin(), s1.cend());

  for (auto i : d1) {
    cout << i << endl;
  }

  vector<double> d2(s2.cbegin(), s2.cend());

  for (auto i : d2) {
    cout << i << endl;
  }

  return 0;
}
