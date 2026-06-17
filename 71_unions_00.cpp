#include <iostream>

int main() {
    struct Union {
        union {
            float a;
            int b;
        };
    };

    Union u;
    u.a = 2.0f;
    std::cout << u.a << ", " << u.b << std::endl;

    std::cin.get();
}
