#include <iostream>
#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "ModelDuck.hpp"

using namespace std;

int main()
{
    Duck *mallard = new MallardDuck;
    mallard->display();
    mallard->swim();
    mallard->performFly();
    Duck *model = new ModelDuck;
    model->performFly();
    FlyRocketPowered fb;
    model->setFlyBehavior(fb);
    model->performFly();
    /*
mallard.performQuack();
mallard.performFly();
 */
    return 0;
}