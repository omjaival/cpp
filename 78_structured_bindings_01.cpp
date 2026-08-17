#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson() {
  return {"Cherno", 24};
}

int main() {
  std::string name;
  int age;
  std::tie(name, age) = CreatePerson();

  std::cout << name << " " << age << '\n';
  return 0;
}
