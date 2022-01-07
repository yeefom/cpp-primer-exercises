#include <iostream>
#include <string>

using namespace std;

class Screen {
  public:
    using pos = string::size_type;

    Screen() = default;
    Screen(pos width, pos h) : width(width), height(h), content(width * h, ' ') {};
    Screen(pos width, pos h, pos c) : width(width), height(h), content(width * h, c) {};

    char get() const {
      return content[cursor];
    }

    char get(pos row, pos column) const {
      return content[width * row + column];
    }

  private:
    pos width = 0;
    pos height = 0;
    pos cursor = 0;
    string content;
};

int main(int argc, char const *argv[])
{
  Screen s = Screen(1, 2, ' ');

  cout << s.get() << endl;

  return 0;
}
