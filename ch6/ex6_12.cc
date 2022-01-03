#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 1;
  int b = 2;

  swap(a, b);

  std::cout << a;

  return 0;
}
