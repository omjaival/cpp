#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor\n"; }
    virtual ~Base() { std::cout << "Base Destructor\n"; }
};

class Derived : public Base {
public:
    Derived() {
        m_Array = new int[5];
        std::cout << "Derived Constructor\n";
    }

    ~Derived() {
        delete[]m_Array;
        std::cout << "Derived Destructor\n";
    }

private:
    int *m_Array;
};

int main() {
    std::cin.get();
}
