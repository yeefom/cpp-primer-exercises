#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<string> strings;
  string in;
  while (cin >> in) {
    strings.push_back(in);
  }

  for (auto s : strings) {
    for (auto &c : s) {
      c = toupper(c);
    }
  }

  for (int i = 0; i < strings.size(); ++i) {
    cout << strings[i] << " ";
    if (!((i + 1) % 8)) {
      cout << endl;
    }
  }

  return 0;
}
