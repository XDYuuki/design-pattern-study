#ifndef DESSERT_H
#define DESSERT_H


#include <iostream>
#include "BaseMealComposite.h"

class Dessert : public BaseMealComposite
{
public:
    Dessert(std::string name, double price):BaseMealComposite(name, price){}
};

#endif