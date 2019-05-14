#include "singleton.h"
#include <iostream>

int main()
{
    Singleton *singleton = Singleton::getInstance();
    singleton->increment();
    singleton->increment();

    std::cout << "Singleton counter: " << singleton->getCurrentCount() << std::endl;
    
    Singleton *another = Singleton::getInstance();
    another->increment();
    
    std::cout << "Singleton counter: " << another->getCurrentCount() << std::endl;

    return 0;
}
