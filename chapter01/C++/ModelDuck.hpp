#ifndef MODEL_DUCK_HPP
#define MODEL_DUCK_HPP

#include <iostream>
#include "Duck.hpp"

class ModelDuck : public Duck
{

public:
    ModelDuck()
    {
        flyBehavior = new FlyNoWay();
    }

    void display()
    {
        std::cout << ("I'm a model duck");
    }
};

#endif