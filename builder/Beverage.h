#ifndef BEVERAGE_H    
#define BEVERAGE_H

#include <iostream>
#include "BaseMealComposite.h"

class Beverage : public BaseMealComposite
{
public:
    Beverage(std::string name, double price):BaseMealComposite(name, price){}
};

#endif