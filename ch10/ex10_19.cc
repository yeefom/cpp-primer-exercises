#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Biggies(vector<string> &words, string::size_type limit) {
  auto it = stable_partition(words.begin(), words.end(),
                   [limit](const string &word) { return word.size() < limit; });

  for_each(it, words.end(), [](const string &word) { cout << word << " "; });
}

int main(int argc, char const *argv[]) {
  vector<string> v = { "aaaa", "bb", "ccc", "d" };
  Biggies(v, 3);
  return 0;
}
