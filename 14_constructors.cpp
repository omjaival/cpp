#include <iostream>

class Entity
{
 public:
        float X, Y;

        Entity()
        {
            X = 0.0f;
            Y = 0.0f;
        }

    void print() const {
        std::cout << X << "," << Y<< std::endl;
    }
};
int main()
{
    Entity e;
    std::cout << e.X << std::endl;
    e.print();
    std::cin.get();
}