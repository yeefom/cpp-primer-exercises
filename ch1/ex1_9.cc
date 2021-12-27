#include <iostream>

int main()
{
  int i = 50;
  int sum = 0;
  while(i < 101) {
    sum += i;
    i++;
  }

  std::cout << sum << std::endl;

  return 0;
}
