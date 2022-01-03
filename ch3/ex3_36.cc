#include <iostream>

using namespace std;

int main()
{

  int a1[3] = {1, 2, 3};
  int a2[3] = {1, 2, 3};

  if (end(a1) - begin(a1) != end(a2) - begin(a2)) {
    cout << "false";
  } else {
    for (int *i = begin(a1), *j = begin(a2); i < end(a1) && j < end(a2); i++, j++) {
      if (*i != *j) {
        cout << "false";
      }
    }

    cout << "true";
  }

  return 0;
}
