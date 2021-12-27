#include <iostream>
#include "./lib/Sales_item.h"

int main()
{
  Sales_item sales_item_1;
  Sales_item sales_item_2;

  std::cin >> sales_item_1 >> sales_item_2;

  if (sales_item_1.isbn() == sales_item_2.isbn()) {
    std::cout << sales_item_1 + sales_item_2 << std::endl;
  }

  return 0;
}
