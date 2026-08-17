#include <iostream>
#include <string>

struct Person {
  std::string name;
  int age;
};

Person CreatePerson() {
  return {"Cherno", 24};
}

int main() {
  Person person = CreatePerson();
  std::string name = person.name;
  int age = person.age;

  std::cout << name << " " << age << '\n';
  return 0;
}
