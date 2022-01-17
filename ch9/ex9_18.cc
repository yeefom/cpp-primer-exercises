#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[]) {
  deque<string> words;

  string word;
  while (cin >> word) {
    words.push_back(word);
  }

  for (auto i = words.cbegin(); i < words.cend(); ++i) {
    cout << *i << endl;
  }

  return 0;
}
