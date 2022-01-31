#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int GreaterThan(vector<int> &numbers, int value) {
  return count_if(numbers.cbegin(), numbers.cend(),
                  [value](int number) { return number > value; });
}

int main(int argc, char const *argv[]) {
  vector<int> v = {1, 2, 6, 7, 8, 3};

  cout << GreaterThan(v, 6) << endl;
}
