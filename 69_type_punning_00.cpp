#include <iostream>

int main() {
    int a = 50;
    double &value = *(double *) &a;
    value = 0.0;
    std::cout << value << std::endl;

    std::cin.get();
}
