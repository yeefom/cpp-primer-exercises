#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vec(10, 1);

  for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
    *iter = *iter * 2;
  }

  for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
    cout << *iter << " ";
  }

  return 0;
}
