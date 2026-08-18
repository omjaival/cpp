#include <iostream>
 
 int main()
 {
     if constexpr (constexpr int x = 17; x==17)
     {
        std::cout << R"(Your number is also the same)"<< std::endl;
     }
     std::cin.get();
    
 }