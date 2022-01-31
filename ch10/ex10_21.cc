#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int i = 4;

  auto f = [&i]() {
    if (i > 0) {
      i--;
      return false;
    }

    return true;
  };

  cout << f() << endl;
  cout << f() << endl;
  cout << f() << endl;
  cout << f() << endl;
  cout << f() << endl;
  cout << f() << endl;
}
