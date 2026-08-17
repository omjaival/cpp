#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson() {
  return {"Cherno", 24};
}

int main() {
  auto person = CreatePerson();
  std::string name = std::get<0>(person);
  int age = std::get<1>(person);

  std::cout << name << " " << age << '\n';
  return 0;
}
