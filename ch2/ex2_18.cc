#include <iostream>

int main()
{
  int v1 = 0;
  int v2 = 1;

  int *p1 = &v1;
  int *p2 = &v2;

  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;

  // change value of pointer
  p1 = p2;

  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;

  // change pointer
  *p1 = 2;

  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;

  return 0;
}
