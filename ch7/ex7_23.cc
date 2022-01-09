#include <initializer_list>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class WindowManager {
public:
  using ScreenIndex = vector<Screen>::size_type;

  WindowManager() = default;
  WindowManager(initializer_list<Screen>);

  void clear(ScreenIndex);
  const Screen &getScreen(ScreenIndex i) const {
    return screens[i];
  };

private:
  vector<Screen> screens;
};

class Screen {
  friend void WindowManager::clear(ScreenIndex);

public:
  using pos = string::size_type;

  Screen() = default;
  Screen(pos w, pos h) : width(w), height(h), content(w * h, ' '){};
  Screen(pos w, pos h, pos c) : width(w), height(h), content(w * h, c){};

  char get() const { return content[cursor]; }

  char get(pos row, pos column) const { return content[width * row + column]; }

  Screen &move(pos r, pos c) {
    cursor = r * width + c;

    return *this;
  }

  Screen &set(char c) {
    content[cursor] = c;

    return *this;
  }

  Screen &display(ostream &os) {
    doDisplay(os);

    return *this;
  }

  const Screen &display(ostream &os) const {
    doDisplay(os);

    return *this;
  }

private:
  pos width = 0;
  pos height = 0;
  pos cursor = 0;
  string content;

  void doDisplay(ostream &os) const {
    os << content[cursor];
  }
};

WindowManager::WindowManager(initializer_list<Screen> l) {
  screens.insert(screens.end(), l.begin(), l.end());
};

inline void WindowManager::clear(ScreenIndex i) {
  if (i < 0 || i >= screens.size()) {
    return;
  }

  Screen &screen = screens[i];

  screen.content = string(screen.height * screen.width, ' ');
}

int main(int argc, char const *argv[]) {
  WindowManager wm = WindowManager({Screen(1, 2, 'a'), Screen(1, 2, 'b')});
  const Screen &s = wm.getScreen(0);

  s.display(cout);
  wm.clear(0);
  s.display(cout);

  return 0;
}
