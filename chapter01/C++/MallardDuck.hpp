#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include <iostream>
#include "Duck.hpp"

using namespace std;

class MallardDuck : public Duck
{

public:
    MallardDuck()
    {
        flyBehavior = new FlyWithWings;
    }

    virtual void swim()
    {
        std::cout << "All ducks float, even mallard ducks!\n";
    }

    void display()
    {
        std::cout << "I'm a real Mallard Duck\n";
    }
};

#endif
