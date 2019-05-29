/**
 * Decorator Pattern
 * The decorator pattern is used to extend the behaviour of a class without
 * the need for inheritance. (For an example of a decorator refactoring of
 * inheritance hell visit https://sourcemaking.com/design_patterns/decorator/cpp/1)
 *
 * 2019 by Martin Penckert
 */

#pragma once

#include <string>

class Bike
{
public:
    virtual std::string sound();
};

class IndianScout : public Bike
{
public:
    std::string sound();
};

class Decorator : public Bike
{
public:
    Decorator(Bike *b) : bike(b) {}
    virtual std::string sound();

private:
    Bike *bike;
};

class AkrapovicDecorator : public Decorator
{
public:
    AkrapovicDecorator(Bike *b) : Decorator(b) {}
    std::string sound();
};