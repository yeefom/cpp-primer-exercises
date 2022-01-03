#include <iostream>

using namespace std;

void swapPointers(int *&p1, int *&p2) {
  int *temp = p1;

  p1 = p2;

  p2 = temp;
}

int main(int argc, char const *argv[]) {
  int a = 1;
  int b = 2;
  int *p1 = &a;
  int *p2 = &b;

  cout << p1 << endl;
  cout << p2 << endl;

  swapPointers(p1, p2);

  cout << p1 << endl;
  cout << p2 << endl;
  return 0;
}
