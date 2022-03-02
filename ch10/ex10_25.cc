#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool CheckSize(const string &s, string::size_type size) {
  return s.size() < size;
}

void Print(ostream &os, const string &word) { os << word << " "; }

void Biggies(vector<string> &words, string::size_type limit) {
  auto it =
      stable_partition(words.begin(), words.end(), bind(CheckSize, _1, limit));

  for_each(it, words.end(), bind(Print, ref(cout), _1));
}

int main(int argc, char const *argv[]) {
  vector<string> v = {"aaaa", "bb", "ccc", "d"};
  Biggies(v, 3);

  return 0;
}
