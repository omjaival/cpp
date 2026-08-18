#include <iostream>

class Entity
{
public:
    float X, Y;

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout<<"Created Entity"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity"<<std::endl;
    }
    void print() const {
        std::cout << X << "," << Y<< std::endl;
    }
};

void function()
{
    Entity e;
    e.print();
}
int main()
{
    function();
    std::cin.get();
}