#include <iostream>
#include <list>
#include <vector>

using namespace std;

void Print(list<int> l) {
  for (auto iter = l.cbegin(); iter != l.cend(); ++iter) {
    cout << *iter;
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {
  vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> dest1;
  list<int> dest2;
  list<int> dest3;

  copy(source.cbegin(), source.cend(), inserter(dest1, dest1.begin()));
  copy(source.cbegin(), source.cend(), front_inserter(dest2));
  copy(source.cbegin(), source.cend(), back_inserter(dest3));

  Print(dest1);
  Print(dest2);
  Print(dest3);

  return 0;
}
