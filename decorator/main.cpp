#include <iostream>
#include "decorator.h"


int main()
{
    Bike *indianStock = new IndianScout();
    std::cout << indianStock->sound() << std::endl;

    Bike *indianCustom = new AkrapovicDecorator(new IndianScout());
    std::cout << indianCustom->sound() << std::endl;

    return 0;
}
