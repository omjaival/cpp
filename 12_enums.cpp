#include <iostream>

enum Example
{
    A [[maybe_unused]],B,C [[maybe_unused]]
};
int main()
{
    Example value=B;
    std::cout<<value<<std::endl;
  std::cin.get();
}