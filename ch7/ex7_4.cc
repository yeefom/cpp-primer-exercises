#include <iostream>
#include <string>

using namespace std;

class Person {
  string name;
  string address;

  public:
    const string &GetName() const {
      return name;
    }

    const string &GetAddress() const {
      return address;
    }

    Person &SetName(string name) {
      this->name = name;
      return *this;
    }

    Person &SetAddress(string address) {
      this->address = address;
      return *this;
    }
};

istream &read(istream &is, Person &person) {
  string name, address;

  is >> name >> address;

  person.SetName(name).SetAddress(address);

  return is;
}

ostream &print(ostream &os, const Person &person) {
  return os << person.GetName() << " " << person.GetAddress();
}

int main(int argc, char const *argv[])
{
  Person p1;
  read(cin, p1);
  print(cout, p1) << endl;

  Person p2;
  read(cin, p2);
  print(cout, p2) << endl;

  return 0;
}
