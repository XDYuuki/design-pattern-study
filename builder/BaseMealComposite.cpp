#include <iostream>
#include "BaseMealComposite.h"

BaseMealComposite::BaseMealComposite(std::string name, double price)
{
    this->name_ = name;
    this->price_ = price;
    std::cout<<"Base Composite Constructor"<<std::endl;
}

double BaseMealComposite::getPrice()
{
    return this->price_;
}