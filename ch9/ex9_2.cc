#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
  list<deque<int>> l;

  l.push_back({1});

  cout << (*l.begin())[0] << endl;

  return 0;
}
