#include<iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World! value:" << a << std::endl;
}

int main()
{
    typedef void(*HelloWorldFunction)(int) ;

    const HelloWorldFunction function = HelloWorld;

    function(17);
    function(18);
    function(45);
    function(07);
    function(01);
    function(10);

    std::cin.get();
}