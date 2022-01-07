#include <iostream>
#include <string>

using namespace std;

class Screen {
  public:
    using pos = string::size_type;

    Screen() = default;
    Screen(pos w, pos h) : width(w), height(h), content(w * h, ' ') {};
    Screen(pos w, pos h, pos c) : width(w), height(h), content(w * h, c) {};

    char get() const {
      return content[cursor];
    }

    char get(pos row, pos column) const {
      return content[width * row + column];
    }

    Screen &move(pos r, pos c) {
      cursor = r * width + c;

      return *this;
    }

    Screen &set(char c) {
      content[cursor] = c;

      return *this;
    }

    Screen &display(ostream &os) {
      do_display(os);

      return *this;
    }

    const Screen &display(ostream &os) const {
      do_display(os);

      return *this;
    }

  private:
    pos width = 0;
    pos height = 0;
    pos cursor = 0;
    string content;

    void do_display(ostream &os) const {
      os << content[cursor];
    }
};

int main(int argc, char const *argv[])
{
  Screen s = Screen(1, 2, ' ');

  cout << s.get() << endl;

  return 0;
}
