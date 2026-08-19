#include <iostream>
#include <string>

class Printable
{
public:
    virtual ~Printable() = default;

    virtual std::string GetClassName() = 0;
};

class Entity  : public Printable
{
public:
    virtual std::string GetName(){return "Entity";}
    std::string GetClassName()override {return "Entity";}
};

class Player: public Entity
{
    std::string m_Name ;
public:
    Player(const std::string& name)
        :m_Name(name){}

    std::string GetName() override {return "Player";}

};

void PrintName (Entity* entity)
{
    std::cout<<entity->GetName()<<std::endl;
}

void Print(Printable* obj)
{
    std::cout<<obj-> GetClassName() <<std::endl;
}

int main()
{
    Entity* e=new Entity();
    //PrintName(e);

    Player* p=new Player("omi");
    //PrintName(p);

    Print(e);
    Print(p);

    std ::cin.get();
}