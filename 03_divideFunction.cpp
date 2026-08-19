#include <iostream>
int divide (int a,int b)
{
    return a/b;
}

void divide_function(int a, int b)
{
    int result = divide(a,b);
    std::cout<< result << std::endl;
}
int main()
{
    divide_function(50,20);
    std::cin.get();
}
