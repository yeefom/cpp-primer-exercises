#include <iostream>
#include <string>

using namespace std;

class Person {
  friend istream &read(istream &is, Person &person);
  friend ostream &print(ostream &os, const Person &person);

  private:
    string name;
    string address;

  public:
    Person() = default;
    Person(string n) : name(n) {};
    Person(string &n, string &a) : name(n), address(a) {};

    const string &GetName() const {
      return name;
    }

    const string &GetAddress() const {
      return address;
    }
};

istream &read(istream &is, Person &person) {
  return is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person) {
  return os << person.name << " " << person.address;
}

int main(int argc, char const *argv[])
{
  Person p1;
  read(cin, p1);
  print(cout, p1) << endl;

  string name, address;
  cin >> name >> address;
  Person p2 = Person(name, address);
  print(cout, p2) << endl;

  cout << p2.GetAddress() << endl;

  return 0;
}
