#pragma once

#include <iostream>
#include <string>

class Bike {};

class Scout : public Bike {
public:
    Scout(const std::string &flavour)
    {
        std::cout << "Indian Scout " << flavour << " built." << std::endl;
    }
};

class Rebel : public Bike {
public:
    Rebel(const int cc)
    {
        std::cout << "Honda Rebel with " << cc << "cc built." << std::endl;
    }
};