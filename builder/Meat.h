#ifndef MEAT_H
#define MEAT_H

#include <iostream>
#include "BaseMealComposite.h"

class Meat : public BaseMealComposite
{
public:
    Meat(std::string name, double price):BaseMealComposite(name, price){}
};

#endif