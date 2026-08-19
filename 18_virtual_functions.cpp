#include <iostream>
#include <string>
#include <utility>

class Entity
{
public:
    virtual ~Entity() = default;

    virtual std::string GetName(){return "Entity";}
};

class Player: public Entity
{
private:
    std::string m_Name ;
public:
    Player(std::string  name)
        :m_Name(std::move(name)){}

    std::string GetName() override {return m_Name;}

};

void PrintName (Entity* entity)
{
 std::cout<<entity->GetName()<<std::endl;
}

int main()
{
    auto *e = new Entity();
    PrintName(e);
    delete e;

    auto* p = new Player("omi");
    PrintName(p);
    delete p;

    std ::cin.get();
}