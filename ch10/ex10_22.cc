#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool SmallerThan(const string &word, string::size_type size) {
  return word.size() < size;
}

int main(int argc, char const *argv[]) {
  vector<string> words = {"abc", "def", "a", "bb", "ccc"};

  auto a = bind(SmallerThan, _1, 3);

  int res = count_if(words.cbegin(), words.cend(), bind(SmallerThan, _1, 3));

  cout << res << endl;
}
