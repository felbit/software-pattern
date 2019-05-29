/**
 * Factory Method Pattern
 * The factory method pattern is used to define an interface for creation of
 * instances without the need to know the exact subclass that is being
 * instanciated.
 *
 * 2019 by Martin Penckert
 */

#pragma once

#include <iostream>
#include <memory>
#include "bike.h"

class Manufacturer
{
protected:
    std::shared_ptr<Bike> bike;

    // the (abstract) factory method
    // must be implemented by specific manufacturer
    virtual void craftBike() = 0;

    virtual void getOrder()
    {
        // customer places order here
        std::cout << "We received your order, thank you!" << std::endl;
    }

    virtual void deliverBike()
    {
        // delivering the manufactured bike
        std::cout << "Have fun with your new bike!" << std::endl;
    }

public:
    void makeBike()
    {
        getOrder();
        craftBike();
        deliverBike();
    }
};

// specific manufacturers

class Indian : public Manufacturer
{
protected:
    // override the factory method
    void craftBike()
    {
        bike = std::make_shared<Scout>("Bobber");
    }
};

class Honda : public Manufacturer
{
protected:
    // override the factory method
    void craftBike()
    {
        bike = std::make_shared<Rebel>(500);
    }
};