#include <iostream>
#include "./lib/Sales_item.h"

int main()
{
  Sales_item sales_item;

  while (std::cin >> sales_item) {
    std::cout << sales_item << std::endl;
  }

  return 0;
}
