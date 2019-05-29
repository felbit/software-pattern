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
    virtual void craftBike()
    {
        bike = std::make_shared<Scout>("Bobber");
    }
};

class Honda : public Manufacturer
{
protected:
    virtual void craftBike()
    {
        bike = std::make_shared<Rebel>(500);
    }
};