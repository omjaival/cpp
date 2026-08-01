#include <iostream>
#include <string>

class Entity {
public:
    virtual void PrintName() {
    }
};

class Player : public Entity {
public:
};

class Enemy : public Entity {
public:
};

int main() {
    Player *player = new Player();
    Entity *actuallyEnemy = new Enemy();
    Entity *actuallyPlayer = player;

    Player *p0 = dynamic_cast<Player *>(actuallyEnemy);
    Player *p1 = dynamic_cast<Player *>(actuallyPlayer);
}
