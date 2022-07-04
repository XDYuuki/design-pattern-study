#include "BaseMealComposite.h"

BaseMealComposite::BaseMealComposite(std::string name, double price)
{
    this->name_ = name;
    this->price_ = price;
}

double BaseMealComposite::getPrice()
{
    return this->price_;
}