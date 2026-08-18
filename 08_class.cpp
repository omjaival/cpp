#include <iostream>


class Player
 {
    public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
     x += speed * xa;
     y += speed * ya;
    }
 };
int main ()
 {
    Player player{};
    player.Move(1,-1);

    std:: cout << player.x << std::endl;
    std::cin.get();
 }
