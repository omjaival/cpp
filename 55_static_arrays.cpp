#include <iostream>
#include<array>

void PrintArray(const std::array<int, 5>& data) {
    for (int i = 0; i < data.size();)

}

int main()
{
    std::array<int, 5> data; // NOLINT(*-pro-type-member-init)
    data[0] = 2;
    data[4] = 1;

    int data[5];
    data[0] = 0;

    std::cin.get();
}
