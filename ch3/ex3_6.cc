#include <iostream>

using namespace std;

void replaceWithX(string &s) {
  for (char &c : s) {
    c = 'X';
  }
}

int main()
{
  string s = "abc";
  replaceWithX(s);
  cout << s << endl;

  return 0;
}
