#include<iostream>
#include<string>

#if PR_DEBUG == 1
#define LOG(x) std::cout << "Hello" << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif

void LOG(const char * str);

int main()
{
    LOG("Hello");
    std::cin.get();
}


int main() {

}