#ifndef DUCK_HPP
#define DUCK_HPP

#include <iostream>

using namespace std;

class FlyBehavior;
class FlyWithWings;

class Duck
{
protected:
    FlyBehavior *flyBehavior;

public:
    virtual void display() = 0;
    void performFly();
    virtual void swim()
    {
        std::cout << "All ducks float, even decoys!\n";
    }
    void setFlyBehavior(FlyBehavior &fb)
    {
        flyBehavior = &fb;
    }
};

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
    virtual void fly()
    {
        std::cout << "I'm flying!!\n";
    }
};

class FlyNoWay : public FlyBehavior
{
public:
    virtual void fly()
    {
        std::cout << "I can't fly\n";
    }
};

class FlyRocketPowered : public FlyBehavior
{
public:
    virtual void fly()
    {
        std::cout << "I'm flying with a rocket !\n";
    }
};

#endif