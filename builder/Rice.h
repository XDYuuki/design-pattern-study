#ifndef RICE_H
#define RICE_H

#include <iostream>
#include "BaseMealComposite.h"

class Rice : public BaseMealComposite
{
public:
    Rice(std::string name, double price):BaseMealComposite(name, price){}
};

#endif
