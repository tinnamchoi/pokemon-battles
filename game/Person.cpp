#include "Person.h"

Person::Person() {
  cout << "Enter your name: ";
  cin >> name;
}
Person::Person(std::string name) { this->name = name; }
