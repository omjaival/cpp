#include <iostream>
int multiply (int a,int b)
{
    return a*b;
}

void multiply_function(int a, int b) {

    int result1 = multiply(a, b);
    std::cout << result1 << std::endl;
}

int main()
{
    multiply_function(37,69);
    std::cin.get();
}
