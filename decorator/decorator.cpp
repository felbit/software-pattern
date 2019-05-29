#include "decorator.h"

std::string Bike::sound() {
    return "brrrrr";
}

std::string IndianScout::sound()
{
    return "wrrrrr";
}

std::string Decorator::sound()
{
    return bike->sound();
}

std::string AkrapovicDecorator::sound()
{
    return "blobl blobl blobl blobl";
}