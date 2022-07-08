#ifndef BEANS_H
#define BEANS_H

#include <iostream>
#include "BaseMealComposite.h"

class Beans : public BaseMealComposite
{
public:
    Beans(std::string name, double price):BaseMealComposite(name, price){}
};

#endif