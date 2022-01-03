#include <cctype>
#include <iostream>

bool hasUppercase(const std::string &s) {
  for (auto c : s) {
    if (std::isupper(c)) {
      return true;
    }
  }

  return false;
}

void convertToLowercase(std::string &s) {
  for (auto &c : s) {
    c = tolower(c);
  }
}

int main()
{
  std::string s = "This";

  std::cout << hasUppercase(s);

  convertToLowercase(s);

  std::cout << s;

  return 0;
}
