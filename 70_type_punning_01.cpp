#include <iostream>

struct Entity {
    int x, y;

    int *GetPosition() {
        return &x;
    }
};

int main() {
    Entity e = {5, 8};

    int *position = e.GetPosition();
    position[0] = 2;

    int y = *(int *) ((char *) &e + 4);
    std::cout << y << std::endl;
    std::cout << position[0] << ", " << position[1] << std::endl;

    std::cin.get();
}
