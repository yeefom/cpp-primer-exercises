#include <iostream>

int main()
{
  int start;
  int end;
  std::cin >> start >> end;

  int sum = 0;
  for (int i = start; i <= end; i++) {
    sum += i;
  }

  std::cout << sum << std::endl;

  return 0;
}
